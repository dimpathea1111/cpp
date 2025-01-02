#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Test
{
private:
    int x;
    float y;

public:
    inline void Showdata();
    inline void input();
    inline void output();
    Test();
    Test(int x, float y);
    Test(const Test &other);
    ~Test();
};

Test::Test()
{
    this->x = 45;
    this->y = 7.90;
}

Test::Test(int x, float y)
{
    this->x = x;
    this->y = y;
}

Test::Test(const Test &other)
{
    x = other.x;
    y = other.y;
}

Test::~Test() {}

void Test::Showdata()
{
    cout << endl
         << "Value X=" << this->x << "\tValue y=" << this->y << "\t Address :" << this << endl;
}

void Test::input()
{
    cout << "\n Enter x=";
    cin >> x;
    cout << "\n Enter y=";
    cin >> y;
}

void Test::output()
{
    cout << endl
         << x << "\t" << y << "\t Address of object:" << this << endl;
}

int main()
{
    system("clear");
    cout << "t\nPractice with denamix memory allocation" << endl;
    Test *ptr1, *ptr2, *ptr3;
    int n, i;
    cout << "Create dynamic memory allocation" << endl;
    ptr1 = new Test();
    // cout<<"\n Input object of ptr1";
    ptr1->input();
    cout << "\n Output object of ptr1:" << endl;
    ptr1->Showdata();
    ptr2 = new Test(60, 4.58);
    cout << " Outobject of ptr2" << endl;
    cout << "Enter n 0bject =";
    cin >> n;
    ptr3 = new Test[n];
    cout << "Input n object ptr3 form keyboard " << endl;
    for (i = 1; i < n; i++)
        ptr3[i].input();
    cout << "Output a object of ptr3 on screen" << endl;
    for (i = 0; i <= n; i++)
        ptr3[i].Showdata();
    cout << "Release space memory allocation of(ptr1, ptr2, ptr3)" << endl;
    delete ptr1;
    delete ptr2;
    delete[] ptr3;
    // getch();
    cout << "1.Create list n object with pointer";
    n = 7;
    cout << "\nA.Initialize 7 object" << endl;
    Test *ptr[7] = {
        new Test(43, 3.5),
        new Test(),
        new Test(50, 9.5),
        new Test(120, 1.5),
        new Test(47, 13.5),
        new Test(30, 2.5),
        new Test(23, 5.47)};
    cout << "2. Output list of class Test with initialize" << endl;
    cout << "Value x \t Value y" << endl;
    for (i = 0; i <= n; i++)
        ptr[i]->output();
    cout << "...... please continue practice ......." << endl;
    //   getch();
    return 0;
}