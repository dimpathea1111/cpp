#include <iostream>
#include <vector>

using namespace std;

struct Employee
{
    int id;
    string name;
    string role;
};

class EmployeeManagementSystem
{
private:
    int id;
    string name;
    string role;
    bool isAdminLogin;
    vector<Employee> employees;

public:
    void loginEmployee()
    {
        string admiNname;
        string adminPassword;
        cout << "Employee login adminName :";
        cin >> admiNname;
        cout << "Employee login adminPassword :";
        cin >> adminPassword;
        if (admiNname == "admin" && adminPassword == "password")
        {
            cout << "Login successfully!!" << endl;
        }
        else
        {
            cout << "login not successful 0_0" << endl;
        }
    }

    void logoutEmployee()
    {
        if (isAdminLogin)
        {
            isAdminLogin = false;
            cout << "logged out successful!" << endl;
        }
        else
        {
            cout << "you are not logged in!" << endl;
        }
    }

    void getAdmin()
    {
        if (isAdminLogin = loginEmployee)
        {
            isAdminLogin = true;
        }
        else if (isAdminLogin = logoutEmployee)
        {
            isAdminLogin = true;
        }
        else
        {
            cout << "Employee not found" << endl;
        }
    }
};
