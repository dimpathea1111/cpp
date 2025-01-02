// #include <iostream>
// #include <string>
// #include <iomanip>

// using namespace std;

// int main()
// {
//     system("clear");
//     struct student
//     {
//         int id;
//         string name;
//         string total;
//         string email;
//         string password;
//     };

//     struct student1
//     {
//         int id;
//         string name;
//         string total;
//         string email;
//         string password;
//     };

//     struct student2
//     {
//         int id;
//         string name;
//         string total;
//         string email;
//         string password;
//     };

//     struct
//     {
//         int id;
//         string name;
//         string total;
//         string password;
//     } user;
//     student student;
//     student.id = 2;
//     student.name = "vipha";
//     student.total = "234";
//     student.password = "2357";

//     student1 student1;
//     student1.id = 3;
//     student1.name = "vipha";
//     student1.total = "234";
//     student1.password = "2357";

//     student2 student2;
//     student2.id = 3;
//     student2.name = "vipha";
//     student2.total = "234";
//     student2.password = "2357";

//     user.id = 1;
//     user.name = "pathea";
//     user.total = "123";
//     user.password = "12345";

//     cout << "user Info:" << endl;
//     cout << user.id << " " << user.name << " " << user.total << " " << user.password << " " << endl;
//     cout << student.id << " " << student.name << " " << student.total << " " << student.password << " " << endl;
//     cout << student1.id << " " << student1.name << " " << student1.total << " " << student1.password << " " << endl;
//     cout << student2.id << " " << student2.name << " " << student2.total << " " << student2.password << " " << endl;

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