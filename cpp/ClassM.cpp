// dim pathra
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
class Employee
{
private:
    int code, Age;
    float salary, bonus;
    string name[25];
    char Tel[30];

public:
    void Ouput();
    void input();
    friend float income();
    Employee(int id, int old, string st[25], float s, float b, char ph[30]);
};
void Employee::input()
{
    // cout<<"\n2.1 Definition Method : constructor with parameter have input , output and income"<<endl;
    cout << "\nEnter code:";
    cin >> code;
    cout << "\nEnter Name:";
    // cin >> name;
    cin.syn();
    cin.get(name);
    cout << "\nEnter Age:";
    cin >> Age;
    cout << "\nEnter Tel:";
    cin >> Tel;
    cout << "\nEnter salary:";
    cin >> salary;
    cout << "\nEnter bonus:";
    cin >> bonus;
}
float Employee::income()
{
    salary + bunus;
}

void Employee::Ouput()
{
    cout << "\n code" << code;
    cout << "\n Name" << name;
    cout << "\n Age" << Age;
    cout << "\nTel:" << Tel;
    cout << "\n salary" << salary;
    cout << "\nbonus:" << bonus;
}
Employee::Employee(int id, int old, string st[25], float s, float b, char ph[30])
{
    code = id;
    Age = old;
    strcpy(n, st);
    salary = s;
    bonus = b;
}
int main()
{
    // cout << "\n2.1 Definition Method : constructor with parameter have input , output and income" << endl;
    cout << "\n2.2 Assign 3 object with pointer" << endl;
    Employee *emp1 = new employee(001, "pathea", 18, "232312", 2000, 3000);
    Employee *emp2 = new employee(001, "pathea", 18, "232312", 2000, 3000);
    Employee *emp3 = new employee(001, "pathea", 18, "232312", 2000, 3000);

    emp1->Ouput();
    emp2->Ouput();
    emp3->Ouput();

    cout << "\n2.3 Input 3 object form keybord with array" << endl;
    int n;
    cout << "\n Enter n object of Employee :";
    cin >> n;
    Employee *Employee = new Employee[n];
    int code, Age;
    float salary, bonus;
    string name[25];
    char Tel[30];
    for (int i = 0; i < n; i++)
    {
        cout << "\nDetail for Employee" << i + 1 << endl;
        Employee[i].input();
        cout << "\nEnter code:";
        cin >> code;
        cout << "\nEnter Name:";
        cin >> name;
        // cin.syn();cin.get(name);
        cout << "\nEnter Age:";
        cin >> Age;
        cout << "\nEnter Tel:";
        cin >> Tel;
        cout << "\nEnter salary:";
        cin >> salary;
        cout << "\nEnter bonus:";
        cin >> bonus;
    }
    return 0;
}