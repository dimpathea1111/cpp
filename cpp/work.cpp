#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

#define strcmpi ;

class worker
{
private:
    int code;
    char name[25];
    static float salary;

public:
    static void Header();
    static float Getsalary();
    inline void Output();
    friend void Search(worker a[100], int n);
    worker();
    worker(int code, char *name);
    void Input();
};

float worker::salary = 120;
void worker::Header()
{
    cout << endl
         << "code\t name\t salary";
}
void Search(worker a[100], int n)
{
    int i, found;
    char Wname[25];
    cout << "\n Enter worker name for search==";
    cin.sync();
    cin.get(Wname, 25);
    found = 0;
    for (i = 0; i < n; i++)
        if (strcmpi(Wname, a[i].name) == 0)
        {
            cout << "\n code=" << a[i].code << "\t name=" << a[i].name;
            cout << "\n salary=" << worker::salary;
            found = 1;
        }
    if (found == 0)
        cout << "\n not found!";
}
worker::worker()
{
    this->code = 45;
    strcpy(this->name, "Unknown");
}
worker::worker(int code, char *name)
{
    this->code = code;
    strcpy(this->name, name);
}
void worker::Input()
{
    cout << "\n Enter name=";
    cin.sync();
    cin.get(name, 25);
}
void worker::Output()
{
    cout << "\t\t" << code << "\t\t" << name << "\t\t" << worker::salary << endl;
}
int main()
{
    cout << "\n practice with keyword this, inline, friend and static" << endl;
    cout << "\n1. create list 8 objects with assign of array" << endl;
    worker obj[8] = {worker(1, "go"), worker(2, "fo"), worker(3, "ko"), worker(4, "co") worker(5, "fp"), worker(6, "lo"), worker(7, "li"), worker(8, "so")};
    cout << "\n1.1. Output all objects on screen" << endl;
    int i, n = 8;
    worker::Header() for (i = 0; i < n; i++)
    {
        obj[i].Output();
    }
    cout << "\n1.2. Search worker in list" << endl;
    Search(obj, n);
    cout << "\n===========================================" << endl;
    return 0;
}
