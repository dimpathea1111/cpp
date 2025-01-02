#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;
vector<int> employee;
class employee
{
private:
    int id;
    string name;
    string position;

public:
    // void input()
    // {
    //     int id;
    //     string name;
    //     string position;
    //     cout << "Enter employee ID :";
    //     cin >> id;
    //     cout << "Enter employee Name :";
    //     cin >> name;
    //     cout << "Enter employee position :";
    //     cin >> position;
    //     cout << "Employee add successfully!" << endl;
    // }
    // void output()
    // {
    //     int id;
    //     string name;
    //     string position;

    //     cout << "Id :" << setw(10) << id << endl;
    //     cout << "Name :" << setw(10) << name << endl;
    //     cout << "Position :" << setw(10) << position << endl;
    // }

    // void addEmployee()
    // {
    //     string name;
    //     string position;
    //     cout << "Enter employee ID :";
    //     cin >> id;
    //     cout << "Enter employee Name :";
    //     cin >> name;
    //     cout << "Enter employee position :";
    //     cin >> position;
    //     cout << "Employee add successfully!" << endl;
    // }
};
void output()
{
    int id;
    string name;
    string position;

    cout << "Id :" << setw(10) << id << endl;
    cout << "Name :" << setw(10) << name << endl;
    cout << "Position :" << setw(10) << position << endl;
}

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
int main()
{
    system("cls");
    int choose;
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
        cout << "Select your choose :";
        cin >> choose;
        switch (choose)
        {
        case 1:
            addEmployee();
            break;
        case 2:
            output();
            break;
        }
    }
    (1);

    return 0;
}