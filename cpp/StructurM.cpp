// Dim pathea
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
struct Worker
{
    int code, Age;
    float salary;
    string name[25];
    char Tel[30];
    char gender;
};
int main()
{
    cout << "\n1. Assign 3 record and output on screen";
    Worker worker[3] = {
        {01, 'pathea', 18, "0987545", "3000", "F"},
        {01, 'yithea', 20, "0187545", "2000", "F"},
        {01, 'rathea', 19, "0287545", "4000", "M"}};
    cout << "\n Output 3 worker" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\n code :" << worker[i].code;
        cout << "\n Name :" << worker[i].name;
        cout << "\n Age :" << worker[i].Age;
        cout << "\n Tel :" << worker[i].Tel;
        cout << "\n Salary :" << worker[i].salary;
        cout << "\n Gender :" << worker[i].gender;
    }
    cout << "\n1.2  Input n recode and output after sort" << endl;
    int n;
    cout << "\n Enter n for worker record:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\n Detail n of worker[" << i + 1 << "]" << endl;
        cout << "\nEnter code:";
        cin >> worker[i].code;
        cout << "\nEnter Name:";
        cin >> worker[i].name;
        cout << "\nEnter Age:";
        cin >> worker[i].Age;
        cout << "\nEnter Tel:";
        cin >> worker[i].Tel;
        cout << "\nEnter salary:";
        cin >> worker[i].salary;
        cout << "\nEnter gender:";
        cin >> worker[i].gender;
    }
    cout << "\n output after sort by code of worker" << endl;
    int Temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (worker[i].code > worker[j].code)
            {
                worker Temp = worker[i];
                worker[i] = worker[j];
                worker[j] = Temp;
            }
        }
    }

    return 0;
}