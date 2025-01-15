// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;
// vector<Employee> employees;

// // Employee structure
// struct Employee
// {
//     int id;
//     string name;
//     string department;
//     double salary;
// };

// void updateEmployee()
// {
//     int id;
//     int name;
//     cout << "Update employee by id " << endl;
//     cout << "ID :";
//     cin >> id;
//     // int pos;
//     // cout<<"pos :";
//     // cin>>pos;
//     for (auto &emp : employees)
//     {
//         if (emp.id == id)
//         {
//             cout << "Enter new name :" << emp.name << endl;
//             cout << "Enter new deparment :" << emp.deparment << " ";
//             // cin.ignore();
//             // getline(cin,name.emp);
//             cin >> emp.name;
//             cout << "Enter New Department (current: " << emp.department << "): ";
//             // getline(cin, emp.department);
//             cin >> emp.deparment;
//             cout << "Enter New Salary (current: " << emp.salary << "): ";
//             cin >> emp.salary;

//             cout << "Update successfull !" << endl;
//             return;
//         }
//     }
// }

// int main()
// {

//     // update

//     return 0;

// }

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

// Employee structure
struct Employee
{
    int id;
    string name;
    string role;
};

class Admin
{
private:
    string username = "admin";
    string password = "password123";
    bool isLoggedIn = false;

public:
    // Admin login function
    bool login()
    {
        string inputUsername, inputPassword;
        cout << "\nAdmin Login\n";
        cout << "Username: ";
        cin >> inputUsername;
        cout << "Password: ";
        cin >> inputPassword;

        if (inputUsername == username && inputPassword == password)
        {
            isLoggedIn = true;
            cout << "Login successful! Welcome, Admin.\n";
        }
        else
        {
            cout << "Invalid credentials. Please try again.\n";
        }
        return isLoggedIn;
    }

    // Admin logout function
    void logout()
    {
        if (isLoggedIn)
        {
            isLoggedIn = false;
            cout << "Logged out successfully.\n";
        }
        else
        {
            cout << "You are not logged in.\n";
        }
    }

    // Check login status
    bool checkLoginStatus()
    {
        return isLoggedIn;
    }
};

class EmployeeManagehttps : // github.com/dimpathea1111/cpp.gitmentSystem {
                            private : vector<Employee>
                                          employees;
int nextId = 1;

public:
// List all employees
void listEmployees()
{
    if (employees.empty())
    {
        cout << "No employees found.\n";
        return;
    }

    cout << "\nEmployee List:\n";
    cout << "ID\tName\t\tRole\n";
    for (const auto &emp : employees)
    {
        cout << emp.id << "\t" << emp.name << "\t\t" << emp.role << "\n";
    }
}

// Insert a new employee
void insertEmployee()
{
    Employee emp;
    emp.id = nextId++;
    cout << "Enter employee name: ";
    cin.ignore();
    getline(cin, emp.name);
    cout << "Enter employee role: ";
    getline(cin, emp.role);
    employees.push_back(emp);
    cout << "Employee added successfully!\n";
}

// Update an existing employee
void updateEmployee()
{
    int id;
    cout << "Enter employee ID to update: ";
    cin >> id;

    for (auto &emp : employees)
    {
        if (emp.id == id)
        {
            cout << "Enter new name (current: " << emp.name << "): ";
            cin.ignore();
            getline(cin, emp.name);
            cout << "Enter new role (current: " << emp.role << "): ";
            getline(cin, emp.role);
            cout << "Employee updated successfully!\n";
            return;
        }
    }
    cout << "Employee with ID " << id << " not found.\n";
}

// Delete an employee
void deleteEmployee()
{
    int id;
    cout << "Enter employee ID to delete: ";
    cin >> id;

    auto it = remove_if(employees.begin(), employees.end(), [id](Employee &emp)
                        { return emp.id == id; });

    if (it != employees.end())
    {
        employees.erase(it, employees.end());
        cout << "Employee deleted successfully!\n";
    }
    else
    {
        cout << "Employee with ID " << id << " not found.\n";
    }
}

// Search for employees by name, role, or ID
void searchEmployees()
{
    int choice;
    cout << "Search by: 1. Name  2. Role  3. ID\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        string name;
        cout << "Enter name to search: ";
        cin.ignore();
        getline(cin, name);
        for (const auto &emp : employees)
        {
            if (emp.name.find(name) != string::npos)
            {
                cout << "Found: ID=" << emp.id << ", Name=" << emp.name << ", Role=" << emp.role << "\n";
            }
        }
        break;
    }
    case 2:
    {
        string role;
        cout << "Enter role to search: ";
        cin.ignore();
        getline(cin, role);
        for (const auto &emp : employees)
        {
            if (emp.role.find(role) != string::npos)
            {
                cout << "Found: ID=" << emp.id << ", Name=" << emp.name << ", Role=" << emp.role << "\n";
            }
        }
        break;
    }
    case 3:
    {
        int id;
        cout << "Enter ID to search: ";
        cin >> id;
        for (const auto &emp : employees)
        {
            if (emp.id == id)
            {
                cout << "Found: ID=" << emp.id << ", Name=" << emp.name << ", Role=" << emp.role << "\n";
                return;
            }
        }
        cout << "No employee found with ID " << id << ".\n";
        break;
    }
    default:
        cout << "Invalid choice.\n";
    }
}
}
;

int main()
{
    Admin admin;
    EmployeeManagementSystem system;
    int choice;

    while (true)
    {
        cout << "\nEmployee Management System\n";
        cout << "1. Admin Login\n";
        cout << "2. Admin Logout\n";
        cout << "3. List All Employees\n";
        cout << "4. Insert Employee\n";
        cout << "5. Update Employee\n";
        cout << "6. Delete Employee\n";
        cout << "7. Search Employees\n";
        cout << "8. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            if (!admin.checkLoginStatus())
            {
                admin.login();
            }
            else
            {
                cout << "You are already logged in.\n";
            }
        }
        else if (choice == 2)
        {
            admin.logout();
        }
        else if (choice >= 3 && choice <= 7)
        {
            if (!admin.checkLoginStatus())
            {
                cout << "Please log in as admin first.\n";
                continue;
            }
            switch (choice)
            {
            case 3:
                system.listEmployees();
                break;
            case 4:
                system.insertEmployee();
                break;
            case 5:
                system.updateEmployee();
                break;
            case 6:
                system.deleteEmployee();
                break;
            case 7:
                system.searchEmployees();
                break;
            }
        }
        else if (choice == 8)
        {
            cout << "Exiting the system. Goodbye!\n";
            break;
        }
        else
        {
            cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
