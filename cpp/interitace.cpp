#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

class Test
{
private:
    int ch;

protected:
    int y, x;

public:
    void Input()
    {
        cout << "\nEnter ch=";
        cin >> ch;
        cout << "\nEnter y=";
        cin >> y;
    };

    void output()
    {
        cout << "\nValue charecter=" << ch << "\ty=" << y;
    }
};

class Sample : protected Test
{
private:
    char st[25];

public:
    void inputAll();
    void outputAll();
    void getdata();
    void Showdata();
    // void Display;
    void inputAll()
    {
        cout << "\nEnter string =";
        cin.sync();
        cin.get(st, 25);
    }

    void outputAll()
    {
        cout << "\noutput all data " << endl;
        // output();
        cout << "\t string =" << st << endl;
    }

    void Getdata()
    {
        cout << "\nEnter y=";
        cin.sync();
        cin.get(st, 25);
    }

    void Display()
    {
        cout << "\n Value y=" << y << "\t String=" << st << endl;
        cout << "\t String =" << st << endl;
    }
};
// };

int main()
{
    system("clear");
    Test obj1;
    cout << "\n\nUse object of Base class ";
    obj1.Input();
    obj1.output();
    Sample obj2;
    cout << "\n\nUSe object of Derived class" << endl;
    obj2.inputAll();
    obj2.outputAll();
    obj2.getdata();
    obj2.Showdata();
    // obj2.output();
    // obj2.output();
    return 0;
}