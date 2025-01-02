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
void user()
{
    cout << "1. Add new user" << endl;
    cout << "2. View all user" << endl;
    cout << "3. Update user " << endl;
    cout << "4. Delete user " << endl;
    cout << "Exite" << endl;
}

int main()
{
    system("clear");
    // int n = 3;
    // User user[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cout << "Id : ";
    //     cin >> staff[i].id;

    //     cout << "Name :";
    //     cin >> staff[i].name;
    //     cout << "Email : ";
    //     cin >> staff[i].email;
    //     cout << "Salary : ";
    //     cin >> staff[i].salary;
    // }

    // system("clear");
    // cout << "ID\tName\tEmail\tSalary" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << staff[i].id << "\t";
    //     cout << staff[i].name << "\t";
    //     cout << staff[i].email << "\t";
    //     cout << staff[i].salary << "\t";
    // }

    int choose;
    do
    {
        user();
        cout << "Enter your choose == :";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            cout << endl;
        }
        }
    } while (choose);

    return 0;
}