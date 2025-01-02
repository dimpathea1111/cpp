// #include <stdio.h>
// #include <iostream>
// #include <iomanip>
// // #include<cmath.h>

// using namespace std;
// struct User
// {
//     int id;
//     string name;
//     string email;
//     string password;
//     double salary;
// };

// const int MAX_USERS = 100;

// void option(){
//     cout<<"1. ";
// }
// void createUSer(User users[], int &count)
// {
//     if (count >= MAX_USERS)
//     {
//         cout << "Array is full. cannot add more user. " << endl;
//     }
//     cout << "Enter user information : " << endl;
//     cout << "ID : ";
//     cin >> users[count].id;

//     cout << "Name : ";
//     cin.ignore();
//     getline(cin, users[count].name);
//     cin >> users[count].name;

//     cout << "Email : ";
//     cin >> users[count].email;

//     cout << "Password : ";
//     cin >> users[count].password;

//     cout << "Salary : ";
//     cin >> users[count].salary;

//     count++;//+1 update value
//     cout << "User create successfully." << endl;
// }

// void readUser(const User users[], int count)
// {
//     for (int i = 0; i < count; i++)
//     {
//         cout << left << "";
//         cout << setw(10) << users[i].id;
//         cout << setw(20) << users[i].name;
//         cout << setw(20) << users[i].email;
//         cout << setw(20) << users[i].password;
//         cout << setw(20) << users[i].salary;
//     }
// }

// int main()
// {
//     system("clear");
//     User users[MAX_USERS] = {};
//     int choice, count = 0;

//     do
//     {
//         // createUSer();
//         cout << "Select your choice : ";
//         cin >> choice;
//         switch (choice)
//         {
//         case 1:
//         {
//             createUSer(users, count);
//             break;
//         }
//         case 2:
//         {
//             readUser(users, count);
//             break;
//         }
//         case 3:
//         {
//             cout << "Exiting..." << endl;
//             exit(0); //
//         }
//         }

//     } while (true);
//     return 0;
// }
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct User
{
    int id;
    string name;
    string email;
    string password;
    double salary;
};

const int MAX_USERS = 100; // constant for maximum number of users

void options()
{
    cout << "\n\n---------->> Menu <<-------------" << endl;
    cout << "1. Create User" << endl;
    cout << "2. Read Users" << endl;
    cout << "3. Update User" << endl;
    cout << "4. Delete User" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

void header()
{
    cout << left << "";
    cout << setw(10) << "ID";
    cout << setw(20) << "Name";
    cout << setw(25) << "Email";
    cout << setw(20) << "Password";
    cout << setw(10) << "Salary";
    cout << endl;
}

void createUser(User users[], int &count)
{
    if (count >= MAX_USERS)
    {
        cout << "Array is full. Cannot add more users." << endl;
        return; // exit the function early
    }

    cout << "Enter user information:" << endl;
    cout << "ID: ";
    cin >> users[count].id;

    cout << "Name: ";
    cin.ignore();
    getline(cin, users[count].name);

    cout << "Email: ";
    cin >> users[count].email;

    cout << "Password: ";
    cin >> users[count].password;

    cout << "Salary: ";
    cin >> users[count].salary;

    count++; // update count = count + 1
    cout << "User created successfully...!" << endl;
}

void readUsers(const User users[], int count)
{
    header();
    for (int i = 0; i < count; i++)
    {
        cout << left << "";
        cout << setw(10) << users[i].id;
        cout << setw(20) << users[i].name;
        cout << setw(25) << users[i].email;
        cout << setw(20) << users[i].password;
        cout << setw(10) << users[i].salary;
        cout << endl;
    }
}

int findUserIndexById(User users[], int count, int id)
{
    for (int i = 0; i < count; i++)
    {
        if (users[i].id == id)
        {
            return i;
        }
    }

    return -1;
}

void updateUser(User users[], int count, int id)
{
    int index = findUserIndexById(users, count, id);
    if (index == -1)
    {
        cout << "User with ID " << id << " not found." << endl;
        return;
    }
    cout << "User deleted successfully." << endl;

    cout << "Enter new name: ";
    cin.ignore();
    getline(cin, users[index].name);

    cout << "Enter new email: ";
    cin >> users[index].email;

    cout << "Enter new password: ";
    cin >> users[index].password;

    cout << "Enter new salary: ";
    cin >> users[index].salary;

    cout << "User updated successfully." << endl;
}

void deleteUser(User users[], int &count, int id)
{
    int index = findUserIndexById(users, count, id);
    if (index == -1)
    {
        cout << "User with ID " << id << " not found." << endl;
        return;
    }

    for (int i = index; i < count - 1; i++)
    {
        users[i] = users[i + 1];
    }

    count--;
    cout << "User deleted successfully." << endl;
}

int main()
{
    system("clear");
    User users[MAX_USERS] = {};
    int choice, count = 0;

    do
    {
        options();
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            createUser(users, count);
            break;
        }
        case 2:
        {
            readUsers(users, count);
            break;
        }
        case 3:
        {
            int id;
            cout << "Enter user ID: ";
            cin >> id;

            updateUser(users, count, id);
            break;
        }
        case 4:
        {
            int id;
            cout << "Enter user ID: ";
            cin >> id;

            deleteUser(users, count, id);
            break;
        }
        case 5:
        {
            cout << "Exiting..." << endl;
            exit(0); // close the program
        }
        }

    } while (1);

    return 0;
}