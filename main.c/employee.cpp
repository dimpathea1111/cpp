#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

class Employee
{
private:
    int id;
    string name;
    string position;

public:
    Employee(int id, string name, string position);
    int getId() const
    {
        return id;
    }
    string getName() const
    {
        return name;
    }
    string getPosition() const
    {
        return position;
    }
    void setName(const string newName)
    {
        name = newName;
    }
    void setPosition(const string newPosition)
    {
        position = newPosition;
    }
    void output() const
    {
        cout << "Id :" << setw(10) << id << endl;
        cout << "Name :" << setw(10) << name << endl;
        cout << "Position :" << setw(10) << position << endl;
    }
    // void Employee:: addEmployee(){
    //     cout<<"Enter employee ID :";
    //     cin>>id;
    //     cout<<"Enter employee Name :";
    //     cin>>name;
    //     cout<<"Enter employee position :";
    //     cin>>position;
    //     cout<<"Employee add successfully!"<<endl;
    // }
};
vector<Employee> employees;
void addEmployee()
{
    int id;
    string name;
    string position;
    cout << "Enter employee ID :";
    cin >> id;
    cout << "Enter employee Name :";
    cin >> name;
    cout << "Enter employee position :";
    cin >> position;
    cout << "Employee add successfully!" << endl;
}
/////////////
// void addEmployee() {
//     Employee newEmp;
//     cout << "Enter Employee ID: ";
//     cin >> newEmp.id;
//    cin.ignore(); // Clear input buffer
//     cout << "Enter Employee Name: ";
//     getline(std::cin, newEmp.name);
//     cout << "Enter Employee Position: ";
//     getline(cin, newEmp.position);
//     employees.push_back(newEmp);
//     cout << "Employee added successfully!" << endl;
// }

int main()
{
    system("cls");
    // Employee;
    int opt;
    while (true)
    {
        cout << "Employee Management System" << endl;
        cout << "==========================" << endl;
        cout << "1. Add Employee" << endl;
        cout << "2. View Employee" << endl;
        cout << "3. Update Employee" << endl;
        cout << "4. Delete Employee" << endl;
        cout << "5. Exit" << endl;
        cout << "==========================" << endl;
        cout << "Select your option :";
        cin >> opt;
        switch (opt)
        {
        case 1:
            addEmployee();
            break;
        case 2:
            int id;
            string name;
            string position;

            cout << "Id :" << setw(10) << id << endl;
            cout << "Name :" << setw(10) << name << endl;
            cout << "Position :" << setw(10) << position << endl;

            break;
        }
    }
    (1);

    return 0;
}