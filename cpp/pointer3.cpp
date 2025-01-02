#include <stdio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << "\n Practice with pointer";
    int x, *pt; // pt is pointer
    cout << "\n1. Create Dynamic with assign address";
    x = 15, pt = &x; // pt is Dynamic
    printf("\n Value x = %d", x);
    printf("\n Value address = %d", &x);
    printf("\n Value  address = %d", pt);
    printf("\n Address of pt = %d", *pt);
    *pt = 60;

    cout << "\n Value px = " << *pt;
    cout << "\n Value x = " << x;
    cout << "\n Address x = " << &x;
    cout << "\n Address pt = " << &pt;
    printf("\n2. Create Dynamic with function");

    float y, *ptr1, ptr2; // ptr is pointer
    y = 3.4725;
    ptr1 = (float *)malloc(sizeof(float));
    *ptr1 = 4.28563;
    cout << "\n Value ptr1 = " << *ptr1;
    // &ptr2 = new float;

    ptr2 = 8.629;
    cout << "\n Value ptr = " << ptr2;
    printf("\n Address y=%d", &y);
    printf("\n Address ptr1 =%p", ptr1);
    printf("\n Address ptr2 =%p", ptr2);

    return 0;
}