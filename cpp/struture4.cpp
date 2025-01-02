#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

struct User
{
    int id;
    string name;
    string email;
    double salary;
};

const int MAX_USER = 100;
void exercise()
{
    cout << "\n1. Create User" << endl;
    cout << "2. Read User" << endl;
    cout << "3. Update User " << endl;
    cout << "4. Delete User" << endl;
    cout << "5. Exit" << endl;
}

void createUser(User user[], int &count)
{
    cout << "Enter ID :";
    cin >> user[count].id;
    cout << "Enter Name :";
    cin.ignore();
    cin >> user[count].name;
    cout << "Enter Email :";
    cin.ignore();
    cin >> user[count].email;
    cout << "Enter Salary :";
    cin >> user[count].salary;

    count++;
}

void header()
{
    cout << left;
    cout << setw(10) << "ID";
    cout << setw(15) << "Name";
    cout << setw(15) << "Email";
    cout << setw(15) << "Salary" << endl;
}

void readUser(int count, User user[])
{
    header();
    for (int i = 0; i < count; i++)
    {
        cout << setw(10) << user[i].id;
        cout << setw(15) << user[i].name;
        cout << setw(15) << user[i].email;
        cout << setw(15) << user[i].salary;
        cout << endl;
    }
}

int findUserId(User user[], int count, int id)
{
    for (int i = 0; i < count; i++)
    {
        if (user[i].id == id)
        {
            return i;
        }
    }
    return -1;
}

void updateUser(User user[], int count, int id)
{
    int index = findUserId(user, count, id);
    if (index == -1)
    {
        cout << "User id " << id << "Not found" << endl;
        return;
    }
    cout << "Enter new name :";
    cin.ignore();
    getline(cin, user[index].name);
    cout << "Enter new email :";
    cin >> user[index].email;
    cout << "Enter new salary :";
    cin >> user[index].salary;
}

void deleteUser(User user[], int &count, int id)
{
    int index = findUserId(user, count, id);
    if (index == -1)
    {
        cout << "User id" << id << "Not found " << endl;
        return;
    }
    for (int i = index; i < count; i++)
    {
        user[i] = user[i + 1];
    }
    count--;
    cout << "user delete successfull" << endl;
}

int main()
{
    system("clear");
    User user[MAX_USER] = {};
    int choose, i, count = 0;

    do
    {
        exercise();
        cout << "Choose============= :";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            createUser(user, count);
            break;
        }
        case 2:
        {
            readUser(count, user);
            break;
        }
        case 3:
        {
            int id;
            cout << "Enter user id :";
            cin >> id;
            updateUser(user, count, id);
            break;
        }
        case 4:
        {
            int id;
            cout << "Enter new id :";
            cin >> id;
            deleteUser(user, count, id);
            break;
        }
        case 5:
        {
            cout << "Exiting='''''''''''";
            // break;
            exit(0);
        }
        }

    } while (1);

    return 0;
}