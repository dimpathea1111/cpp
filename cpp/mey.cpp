#include <stdio.h>
#include <cmath>
#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
  int code;
  char Name[25];
  int Age;
  char Tel[18];
  float Salary;
  float PSalary;

public:
  void Input();
  void Output();
  friend void Sort(Employee a[100], int n);
  friend void Search(Employee a[100], int n);
  static void Header();
  float Income();
  Employee();
  Employee(int ID, char *n, int a, char *t, float s, float p);
};
void Employee::Input()
{
  cout << "\n Enter code=";
  cin >> code;
  cout << "\n Enter Name=";
  cin.sync();
  cin.get(Name, 25);
  cout << "\n Enter Age=";
  cin >> Age;
  cout << "\n Enter Tel=";
  cin.sync();
  cin.get(Tel, 18);
  cout << "\n Enter Salary=";
  cin >> Salary;
};
Employee::Employee(int ID, char *n, int a, char *t, float s, float p)
{
  code = ID;
  Age = a;
  strcpy(Name, n);
  strcpy(Tel, t);
  Salary = s;
  PSalary = p;
}
void Employee::Output()
{
  cout << "\n code:" << code << ",Name:" << Name << ",Age" << Age << ",Tel:" << Tel << ",Salary:" << Salary << ",PSalary:" << PSalary << ",Total Income:" << Employee::Income();
}
void Employee::Header()
{
  cout << "\n code \tName \tAge \tTel \tSalary \tPSalary" << endl;
}
void Sort(Employee a[100], int n)
{
  int i, j;
  Employee Temp;
  for (i = 0; i < n; i++)
    for (j = i + 1; j < n; j++)
      if (strcmpi(a[i].Name, a[j].Name) > 0)
      {
        Temp = a[i];
        a[i] = a[j];
        a[j] = Temp;
      }
  for (i = 0; i < n; i++)
    a[i].Output();
}

void Search(Employee a[100], int n)
{
  int i, found;
  char EName[25];
  cout << "\n Enter employee name for salary:";
  cin.sync();
  cin.get(EName, 25);
  found = 0;
  for (i = 0; i < n; i++)
    if (strcmpi(EName, a[i].Name) == 0)
    {
      cout << "\n code:" << a[i].code << "\t Name:" << a[i].Name;
      cout << "\t Salary:";
      a[i].Salary;
      found = 1;
    }
  if (found == 0)
    cout << "Not found";
}
float Employee::Income()
{
  return (Salary + PSalary);
}
int main()
{
  cout << "\n Assign & obj with pointer" << endl;
  int n;
  n = 3;
  Employee *obj[3] = {new Employee(1, " Tola", 25, "01275581", 444),
                      new Employee(2, "BOBO", 28, "09678275", 650),
                      new Employee(3, "Dola", 26, "017 856572", 200)};
  for (i = 0; i < n; i++)
  {
    cout << "\n obj [" << i + 1 << "]";
    Obj[i].Output();
  }
  cout << "\n Input on obj from Keyboard with Array";
  int n;
  cout << "\n Enter n = ";
  cin >> n.for (i = 0; i < n; i++)
  {
    cout << "\n obj [<<"i + 1 << "]";
    Obj[i].Input();
  }
  for (i = 0; i < n; i++)
  {
    Obj[i].Output;
  }
}

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <string.h>
using namespace std;
sturct Worker
{
  int code, char Name[25];
  char sex;
  char Age;
  char Tel[25];
  float Salary;
  int main()
  {
    cout << "\n 1.1 Assign & records and output on screen" sturct Worker W[3] = { {1, "Nita", "F", 25, "017182576", 500};
    {12, "Alice", "F", 28, "096 78265", 650};
    {
      3, "Tola", "M", 26, "012756376", 560
    }
  };
  cout << "\n. Output on screen";
  cout << "\n code \t Name It sex \t Age It Tel It Salary \n";
  for (i = 0; i < 3; ++)
  {
    {
      cout << "\t" < < < W[i].code < < < "\t" << W[i].Name << "\t" << W[i].sex << "\t" < W[i].Age < < < "\t" < W[i].Tel << "\t" << W[i].salary;
      cout << "\n Enter n record:";
      for (i = 0; i < n; i++)
      {
        cout << "\n Records [" << i + 1 << "]";
        cout << "In Enter code = ";
        cin >> code;
        cout << "In Enter Name = ";
        cin.sync();
        cin.get(Name, 25),
            cout << "\n Enter sex = ";
        cin >> sex;
        cout << "\n Enter Age = ";
        cin >> Age,
            cout << "\n Enter Salary = ";
        cin.sync;
        cin.get(Tel, 15);
        cout << "\n 1.1 Assign & records and cutput on a " Nila "," F ", 25." cout << "\n Enter Salary = ";
        cin >> salary;
      }
      cout << "\n Output after sort";
      int j;
      Worker Temp : for (i = 0; i < n; i++)
      {
        for (j = 0; j < n; j++)
        {
          if (stremp : (a[i].Name, a[j].Name) > 0)
          {
            Temp = W[i];
            W[i] = W[j];
            W[j] = Temp;
          }
        }
      }
      for (i = 0; i < n; i++)
      {
        cout << "\n code: " << code << "\t Name:"
             << Name << "\t sex: " << "\t Age:"
             << Age << "\t Tel: " << Tel << "\t Salary" : << salary;
      }
      return (0);
    }
  }
}