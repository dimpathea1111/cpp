#include <iostream>
#include <string>

using namespace std;

int main()
{
    system("cls");
    // int a = 10;
    // int *ptr = &a;
    // // update value pointer
    // *ptr = 100;
    // cout << "value of A :" << a << endl;
    // cout << "Address of A :" << &a << endl;
    // cout << "Address of ptr :" << ptr << endl;
    // cout << "value of *ptr :" << *ptr << endl;

    ///////////////////////////////////////////////
    // string name = "koko";
    // string *ptr = &name;
    // cout << "Name :" << name << endl;
    // string *p = ptr;
    // //
    // *p = "kaka";
    // //
    // cout << "Name in ptr :" << name << endl;

    //////////////////////////////////////////////////
    int *n = new int[5];
    n[0] = 1;
    n[1] = 2;
    n[3] = 3;
    n[4] = 4;
    n[5] = 5;
    for (int i = 0; i < 6; i++)
    {
        cout << "Value :" << *(n + i) << endl;
    }

    return 0;
}