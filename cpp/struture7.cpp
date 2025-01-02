#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Task
{
    int id;
    string title;
    string description;
    bool completed;
};

void header();
void display();
void addTask(Task[], int &);
void viewTasks(Task[], int);
void updateTask(Task[], int, int);
int findTaskIndexById(Task[], int, int);
void toggleTask(Task[], int, int);
void deleteTask(Task[], int &, int);

const int MAX_TASKS = 100; // Maximum number of tasks
int main()
{
    system("clear");
    Task tasks[MAX_TASKS];
    int count = 0;
    int id, choice;

    while (true)
    {
        display();
        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            addTask(tasks, count);
            break;
        case 2:
            header();
            viewTasks(tasks, count);
            break;
        case 3:
            cout << "\nEnter the ID of the task you want to update: ";
            cin >> id;
            updateTask(tasks, count, id);
            break;
        case 4:
            cout << "\nEnter the ID of the task you want to toggle: ";
            cin >> id;
            toggleTask(tasks, count, id);
            break;
        case 5:
            cout << "\nEnter the ID of the task you want to delete: ";
            cin >> id;

            deleteTask(tasks, count, id);
            break;
        case 6:
        {
            cout << "Thanks for using Todo Tasks Manager" << endl;
            exit(0);
        }
        default:
        {
            cout << "Invalid Choice........!" << endl;
            break;
        }
        }
    }

    return 0;
}

void display()
{
    cout << "\n\n---------------->> Todo Tasks Manager <<----------------" << endl;
    cout << "1. Add new task" << endl;
    cout << "2. View tasks" << endl;
    cout << "3. Update task" << endl;
    cout << "4. Toggle task" << endl;
    cout << "5. Delete task" << endl;
    cout << "6. Exit" << endl;
}

void header()
{
    cout << left << "";
    cout << setw(5) << "ID";
    cout << setw(20) << "Title";
    cout << setw(30) << "Description";
    cout << setw(10) << "Status";
    cout << endl;
}

void addTask(Task tasks[], int &count)
{
    if (count >= MAX_TASKS)
    {
        cout << "\nTask list is full. Cannot add more tasks." << endl;
        return;
    }

    cout << "\n\nEnter Your Task: " << endl;

    cout << "ID: ";
    cin >> tasks[count].id;

    cout << "Title: ";
    cin.ignore();
    getline(cin, tasks[count].title);

    cout << "Description: ";
    cin.ignore();
    getline(cin, tasks[count].description);

    tasks[count].completed = false;

    count++;
    cout << "Task Added Successfully" << endl;
}

void viewTasks(Task tasks[], int count)
{
    for (int i = 0; i < count; i++)
    {
        cout << left << "";
        cout << setw(5) << tasks[i].id;
        cout << setw(20) << tasks[i].title;
        cout << setw(30) << tasks[i].description;
        if (tasks[i].completed)
        {
            cout << setw(10) << "completed";
        }
        else
        {
            cout << setw(10) << "uncompleted";
        }
        cout << endl;
    }
}

int findTaskIndexById(Task tasks[], int count, int id)
{
    for (int i = 0; i < count; i++)
    {
        if (tasks[i].id == id)
        {
            return i;
        }
    }
    return -1;
}

void updateTask(Task tasks[], int count, int id)
{
    int index = findTaskIndexById(tasks, count, id);
    if (index == -1)
    {
        cout << "Task with ID " << id << " not found." << endl;
        return;
    }

    char choice;
    cout << "Do you want update title?(y/n): ";
    cin >> choice;

    if (choice == 'y')
    {
        cout << "Enter new title: ";
        cin.ignore();
        getline(cin, tasks[index].title);
    }

    cout << "Do you want update description?(y/n): ";
    cin >> choice;
    if (choice == 'y')
    {
        cout << "Enter new description: ";
        cin.ignore();
        getline(cin, tasks[index].description);
    }

    cout << "Task updated successfully." << endl;
}
void toggleTask(Task tasks[], int count, int id)
{
    int index = findTaskIndexById(tasks, count, id);
    if (index == -1)
    {
        cout << "\nTask with ID " << id << " not found." << endl;
        return;
    }

    tasks[index].completed = !tasks[index].completed;
    cout << "\nTask toggled successfully." << endl;
}

void deleteTask(Task tasks[], int &count, int id)
{
    int index = findTaskIndexById(tasks, count, id);
    if (index == -1)
    {
        cout << "\nTask with ID " << id << " not found." << endl;
        return;
    }

    for (int i = index; i < count - 1; i++)
    {
        tasks[i] = tasks[i + 1];
    }

    count--;
    cout << "\nTask deleted successfully." << endl;
}
