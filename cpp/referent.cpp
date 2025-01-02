#include <iostream>
#include <string>

using namespace std;

struct Staff
{
    int id;
    char name[50];
    string position;
    double salary;
};

int main()
{
    system("clear");
    int n = 2;
    Staff staff[n];
    // cout<<"Enter number n :"; cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Staff #" << i + 1 << "Information " << endl;

        cout << "Id :";
        cin >> staff[i].id;

        cout << "Name :";
        cin >> staff[i].name;

        cout << "Position :";
        cin >> staff[i].position;

        cout << "Salary :";
        cin >> staff[i].salary;
        system("clear");
    }

    system("clear");
    cout << "ID\tName\tPosition\tSalary" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << staff[i].id << "\t";
        cout << staff[i].name << "\t";
        cout << staff[i].position << "\t";
        cout << staff[i].salary << "\t" << endl;
    }

    return 0;
}