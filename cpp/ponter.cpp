#include <iostream>

using namespace std;

int main()
{
    system("clear");
    int num1 = 10;
    int num2 = 20;

    int *ptr1 = &num1;
    int *ptr2 = &num2;

    *ptr1 = num1;
    *ptr2 = num2;

    ptr2 = &num2;
    ptr1 = &num1;

    cout << *ptr1 << " " << ptr2 << "\t" << ptr1 << " " << *ptr2 << endl;
    cout << num1 << " " << &num1 << " " << *ptr2 << endl;

    int num3 = 10;
    int num4 = 30;
    int *ptr;

    ptr = &num3;
    *ptr = 300;

    ptr = &num4;
    *ptr = 400;

    cout << num3 << "\t" << ptr << "\t" << &num4 << "\t" << *ptr << endl;

    int b = 10;
    int *p;
    p = &b;
    int a[b] = {2, 3, 4, 5, 55, 66, 77, 33, 22, 6};
    cout << "\n Value " << a;
    cout << "\n Value " << b;
    cout << "\n Value " << &a;
    cout << "\n Value " << &b;

    int n = 20, r = 40, h = 50;
    *ptr = n;
    *ptr = r;
    *ptr = h;

    ptr = &n;
    ptr = &r;
    ptr = &h;

    ptr = &n;
    *ptr = 340;
    ptr = &r;
    *ptr = 310;
    ptr = &h;
    *ptr = 350;

    cout << " \n Value n =" << n;
    cout << " \n Value r =" << r;
    cout << " \n Value h =" << h;
    cout << " \n Address n =" << &n;
    cout << " \n Address r =" << &r;
    cout << " \n Address h =" << &h;
    cout << " \n Address ptr =" << ptr;
    cout << " \n Value ptr =" << *ptr;
    // cout<< " \n Value n ="<< n;
    // cout<< " \n Value n ="<< n;
    // cout<< " \n Value n ="<< n;
    // cout<< " \n Value n ="<< n;

    return 0;
}