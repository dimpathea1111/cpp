//

#include <iostream>
#include <chrono>
#include <ctime>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
// #include <vector>
#include <thread>
#include <cstdlib>

using namespace std;

// ANSI escape codes for colors
const string RESET = "\033[0m";
const string RED = "\033[31m";
const string GREEN = "\033[32m";
const string YELLOW = "\033[33m";
const string BLUE = "\033[34m";
const string MAGENTA = "\033[35m";
const string CYAN = "\033[36m";
const string WHITE = "\033[37m";

// Clear screen function
void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Simple loading animation
void loadingAnimation(int seconds)
{
    for (int i = 0; i < seconds; ++i)
    {
        cout << ".";
        cout.flush();
        this_thread::sleep_for(chrono::seconds(1));
    }
    cout << endl;
}

// Structure of customer
struct Customer
{
    string name;
    string gender;
    string service_type;
    string status;
    int numero;
    time_t arrival_time;
    time_t finish_time;
};

// Structure of queue in the bank
struct bankqueue
{
    Customer data;
    bankqueue *next;
};

// Structure of list of customers in the queue
struct Listcustomer
{
    int n;
    int Size;
    bankqueue *head;
    bankqueue *tail;
};

// Creating an empty list of customers
Listcustomer *createEmptyQ()
{
    Listcustomer *l = new Listcustomer;
    l->n = 0;
    l->Size = 1;
    l->head = nullptr;
    l->tail = nullptr;
    return l;
}

int number_customer = 0;

// Function to enqueue a customer
void enqueue(Listcustomer *ls, Customer *newdata)
{
    bankqueue *bq = new bankqueue;
    bq->data = *newdata;
    bq->next = nullptr;
    if (ls->n == 0)
    {
        ls->head = bq;
        ls->tail = bq;
    }
    else
    {
        ls->tail->next = bq;
        ls->tail = bq;
    }
    ls->n++;
}

// Function to dequeue a customer
void dequeue(Listcustomer *ls)
{
    if (ls->n == 0)
    {
        cout << RED << "\tCannot delete! List is empty." << RESET << endl;
        return;
    }
    else
    {
        bankqueue *tmp = ls->head;
        ls->head = ls->head->next;
        delete tmp;
        ls->n--;
    }
}

// Function to add a customer
void addCustomer(Listcustomer *ls, Customer c)
{
    cout << "\t>>>>Please complete some information: ..." << endl;
    cout << "\tEnter name  : ";
    cin >> c.name;
    cout << "\tEnter gender: ";
    cin >> c.gender;
    cout << "\tEnter service type: ";
    cin >> c.service_type;
    auto now = chrono::system_clock::now();
    c.arrival_time = chrono::system_clock::to_time_t(now);
    c.status = "In Service";
    number_customer++;
    c.numero = number_customer;
    enqueue(ls, &c);
}

// Function to display a ticket
void displayTicket(Listcustomer *ls)
{
    tm local_tm = *localtime(&ls->tail->data.arrival_time);
    cout << CYAN << "\n\t\t=================== TICKET ==============================" << RESET << endl;
    cout << CYAN << "\t\tTicket No: 00" << number_customer << RESET << endl;
    cout << CYAN << "\t\tName     : " << ls->tail->data.name << RESET << endl;
    cout << CYAN << "\t\tGender   : " << ls->tail->data.gender << RESET << endl;
    cout << CYAN << "\t\tService type: " << ls->tail->data.service_type << RESET << endl;
    cout << CYAN << "\t\tArrival time: " << put_time(&local_tm, "%H:%M:%S, Date: %d-%m-%Y") << RESET << endl;
    cout << CYAN << "\t\t=========================================================" << RESET << endl;
}

// Function to display all customers
void displayCustomers(Listcustomer *ls)
{
    bankqueue *temp = ls->head;
    if (temp == nullptr)
    {
        cout << RED << "\t\tThere are no waiting customers!" << RESET << endl;
        return;
    }
    cout << BLUE << "\n\t\t\t================== CUSTOMERS =====================" << RESET << endl;
    cout << BLUE << "\t Name\t\t| Gender\t| Service Type\t| Arrival Time" << RESET << endl;
    cout << BLUE << "\t-----------------------------------------------------------------" << RESET << endl;
    while (temp != nullptr)
    {
        tm local_tm = *localtime(&temp->data.arrival_time);
        cout << CYAN << "\t" << temp->data.name << "\t\t|"
             << temp->data.gender << "\t\t|"
             << temp->data.service_type << "\t|"
             << "Time: " << put_time(&local_tm, "%H:%M:%S, Date: %d-%m-%Y") << RESET << endl;
        temp = temp->next;
    }
    cout << "\t---------------------------------------------------------------------" << endl;
}

// Function to add a customer to a counter
void addCustomerToCounter(Listcustomer *ls, Listcustomer *counters[], int counterCount)
{
    for (int i = 0; i < counterCount; i++)
    {
        if (counters[i]->n < counters[i]->Size)
        {
            bankqueue *temp = new bankqueue;
            temp->data = ls->head->data;
            temp->next = nullptr;
            enqueue(counters[i], &temp->data);
            cout << GREEN << "\t\tCustomer: No:00" << temp->data.numero << ",Name: " << temp->data.name << ", please come to counter #" << i + 1 << "!" << RESET << endl;
            dequeue(ls);
            delete temp;
            return;
        }
    }
    cout << YELLOW << "\t\tAll counters are busy. Please wait for an available counter." << RESET << endl;
}

// Function to add a customer to a file
void addCustomerToFile(Customer &c)
{
    ofstream file("bankQueue.csv", ios::app);
    if (!file.is_open())
    {
        cerr << RED << "Error opening file" << RESET << endl;
        return;
    }

    tm local_tm_arrival = *localtime(&c.arrival_time);
    file << c.name << "," << c.gender << "," << c.service_type << ","
         << put_time(&local_tm_arrival, "%H:%M:%S") << ","
         << "N/A" << "," // Initially, finish time is N/A
         << put_time(&local_tm_arrival, "Date: %d-%m-%Y") << ","
         << c.status << "\n";
    file.close();
}

// Function to update customer status in a file
void updateCustomerStatusInFile(Customer &c)
{
    ifstream infile("bankQueue.csv");
    ofstream tempFile("temp.csv");
    if (!infile.is_open() || !tempFile.is_open())
    {
        cerr << RED << "Error opening file" << RESET << endl;
        return;
    }

    string line;
    while (getline(infile, line))
    {
        stringstream ss(line);
        string name, gender, service_type, arrival_time, finish_time, date, status;
        getline(ss, name, ',');
        getline(ss, gender, ',');
        getline(ss, service_type, ',');
        getline(ss, arrival_time, ',');
        getline(ss, finish_time, ',');
        getline(ss, date, ',');
        getline(ss, status, ',');

        if (name == c.name && service_type == c.service_type)
        {
            tm local_tm_finish = *localtime(&c.finish_time);
            stringstream finish_time_ss;
            finish_time_ss << put_time(&local_tm_finish, "%H:%M:%S");
            finish_time = finish_time_ss.str();
            // finish_time = put_time(&local_tm_finish, "%H:%M:%S");
            status = c.status;
        }

        tempFile << name << "," << gender << "," << service_type << ","
                 << arrival_time << "," << finish_time << "," << date << "," << status << "\n";
    }

    infile.close();
    tempFile.close();
    remove("bankQueue.csv");
    rename("temp.csv", "bankQueue.csv");
}

// Function to finish service at a counter
void finishServiceAtCounter(Listcustomer *counters[], int counterIndex, Listcustomer *ls, int counterCount)
{
    if (counters[counterIndex - 1]->n == 0)
    {
        cout << RED << "\t\tCounter #" << counterIndex << " is already available! , Please service other counter." << RESET << endl;
        return;
    }

    cout << CYAN << "\t\tCustomer: No:00" << counters[counterIndex - 1]->head->data.numero << "\t| Name: " << counters[counterIndex - 1]->head->data.name << "  have finished at counter #" << counterIndex << "." << RESET << endl;
    cout << "\t-----------------------------------------------------------------------------\n";

    auto now = chrono::system_clock::now();
    counters[counterIndex - 1]->head->data.finish_time = chrono::system_clock::to_time_t(now);
    counters[counterIndex - 1]->head->data.status = "Finished";

    updateCustomerStatusInFile(counters[counterIndex - 1]->head->data);

    dequeue(counters[counterIndex - 1]);

    if (ls->n == 0)
    {
        cout << YELLOW << "\t\tThere are no waiting customers." << RESET << endl;
    }
    else
    {
        addCustomerToCounter(ls, counters, counterCount);
    }
    cout << "\t-----------------------------------------------------------------------------\n";
}

// Function to display all counters
void displayAllCounters(Listcustomer *counters[], int counterCount)
{
    cout << BLUE << "\n\t\t\tList of All Counters\n"
         << RESET;
    for (int i = 0; i < counterCount; ++i)
    {
        cout << "\t\tCounter #" << i + 1 << ":";
        if (counters[i]->head == nullptr)
        {
            cout << GREEN << "\n\tThere are no service customers!, Counter #" << i + 1 << " is available." << RESET << endl;
            cout << "\n\t--------------------------------------------------------------\n";
        }
        else
        {
            displayCustomers(counters[i]);
        }
    }
}

// Function to display available counters
void displayAvailableCounters(Listcustomer *counters[], int counterCount)
{
    cout << BLUE << "\n\t\tAvailable Counters\n"
         << RESET;
    bool available = false;
    for (int i = 0; i < counterCount; ++i)
    {
        if (counters[i]->n < counters[i]->Size)
        {
            cout << GREEN << "\tCounter #" << i + 1 << " is available." << RESET << endl;
            available = true;
        }
        else
        {
            cout << RED << "\tCounter #" << i + 1 << " is not available." << RESET << endl;
        }
    }
    if (!available)
    {
        cout << RED << "\tNo counters are available at the moment." << RESET << endl;
    }
    cout << "\t--------------------------------------------------" << endl;
}

int checkFinishCustomer(Listcustomer *counters[], int counterCount)
{
    int check = 0;
    for (int i = 0; i < counterCount; ++i)
    {
        if (counters[i]->n == counters[i]->Size)
        {
            check = 1;
            break;
        }
    }
    return check;
}

int main()
{
    clearScreen();
    cout << YELLOW << "\t\t\t*** Welcome to the Bank Queue Management System ***" << RESET << endl;
    cout << GREEN << "\t\t\t*** Coded by [PHAL Menghak, NEANG Vanna, PRIME Veasna] ***" << RESET << endl;
    cout << "\n\tLoading";
    loadingAnimation(3);

    cout << YELLOW << "Press enter to continue..." << RESET;
    cin.ignore().get();

    Listcustomer *ls = createEmptyQ();
    const int counterCount = 3;
    Listcustomer *counters[counterCount];
    for (int i = 0; i < counterCount; ++i)
    {
        counters[i] = createEmptyQ(); // Assuming each counter can handle 1 customer at a time
    }

    Customer c;
    while (1)
    {
        clearScreen();
        cout << CYAN << "\t\t\t------------------ Bank queue menu ---------------" << RESET << endl;
        cout << BLUE << "\t\t\t 1. User log in to customer." << RESET << endl;
        cout << BLUE << "\t\t\t 2. User log in to counter." << RESET << endl;
        cout << BLUE << "\t\t\t 3. Exit." << RESET << endl;
        cout << CYAN << "\t\t\t--------------------------------------------------" << RESET << endl;
        cout << YELLOW << "\t\t\tLog in to: " << RESET;
        int option;
        cin >> option;

        if (option == 1)
        {
            char choice;
            while (1)
            {
                clearScreen();
                cout << MAGENTA << "\n\t*************** Customer Menu ****************" << RESET << endl;
                cout << BLUE << "\t a. Add customer." << RESET << endl;
                cout << BLUE << "\t b. Display waiting customers." << RESET << endl;
                cout << BLUE << "\t c. Back to Bank Queue menu." << RESET << endl;
                cout << MAGENTA << "\t-----------------------------------------------" << RESET << endl;
                cout << YELLOW << "\t Please enter choice: " << RESET;
                cin >> choice;

                if (choice == 'a')
                {
                    while (1)
                    {
                        string answer;
                        addCustomer(ls, c);
                        addCustomerToFile(ls->tail->data);
                        displayTicket(ls);
                        addCustomerToCounter(ls, counters, counterCount);
                        cout << YELLOW << "\tDo you want to add more customers? (yes/no): " << RESET;
                        cin >> answer;
                        if (answer == "no")
                        {
                            break;
                        }
                    }
                }
                else if (choice == 'b')
                {
                    cout << CYAN << "\t\tList of customers: " << RESET << endl;
                    displayCustomers(ls);
                    cout << YELLOW << "\tPress enter to continue..." << RESET;
                    cin.ignore().get();
                }
                else if (choice == 'c')
                {
                    cout << YELLOW << "\tBack to bank queue menu!\n"
                         << RESET << endl;
                    break;
                }
                else
                {
                    cout << RED << "\tWrong choice! Please enter a, b, or c." << RESET << endl;
                }
            }
        }
        else if (option == 2)
        {
            char choice;
            while (1)
            {
                clearScreen();
                cout << MAGENTA << "\n\t>>>>>>>>>>>>>>> Counter Menu <<<<<<<<<<<<<<<" << RESET << endl;
                cout << BLUE << "\t a. Finish service for a customer." << RESET << endl;
                cout << BLUE << "\t b. Display customers in counter." << RESET << endl;
                cout << BLUE << "\t c. Display available counters." << RESET << endl;
                cout << BLUE << "\t d. Exit the counter menu." << RESET << endl;
                cout << MAGENTA << "\t---------------------------------------------" << RESET << endl;
                cout << YELLOW << "\tPlease enter choice: " << RESET;
                cin >> choice;

                if (choice == 'a')
                {
                    int counterIndex;
                    string decision;
                    cout << YELLOW << "\t>>>>> There are " << counterCount << " counters.\n"
                         << RESET;
                    cout << YELLOW << "\tPlease enter a number to log in to counter: " << RESET;
                    cin >> counterIndex;
                    if (counterIndex >= 1 && counterIndex <= counterCount)
                    {
                        finishServiceAtCounter(counters, counterIndex, ls, counterCount);
                    }
                    else
                    {
                        cout << RED << "\tInvalid counter number! Please enter a number between 1 and " << counterCount << "." << RESET << endl;
                    }
                    cout << YELLOW << "\tPress enter to continue..." << RESET;
                    cin.ignore().get();
                }
                else if (choice == 'b')
                {
                    displayAllCounters(counters, counterCount);
                    cout << YELLOW << "\tPress enter to continue..." << RESET;
                    cin.ignore().get();
                }
                else if (choice == 'c')
                {
                    displayAvailableCounters(counters, counterCount);
                    cout << YELLOW << "\tPress enter to continue..." << RESET;
                    cin.ignore().get();
                }
                else if (choice == 'd')
                {
                    cout << YELLOW << "\tExiting the counter menu...\n"
                         << RESET << endl;
                    break;
                }
                else
                {
                    cout << RED << "\tInvalid choice! Please try again." << RESET << endl;
                }
            }
        }
        else if (option == 3)
        {
            int check;
            check = checkFinishCustomer(counters, counterCount);
            if (check == 1)
            {
                cout << YELLOW << "\n\t>>> Please go to counter to finish all service before exit program." << RESET << endl;
                cout << YELLOW << "\n\tPress enter to continue..." << RESET;
                cin.ignore().get();
            }
            else
            {
                cout << GREEN << "\n\n\t\t**Thank you!**\n"
                     << RESET << endl;
                break;
            }
        }
        else
        {
            cout << RED << "\tYou selected the wrong option. Please select a number (1-3)." << RESET << endl;
        }
    }
    return 0;
}