#include <iostream>

using namespace std;
// globale variable
int x, y;
void hello() // no returntype no parameter function
{
    cout << "Hello a" << endl;
}

// no returntype with parameter
void sum(int r, int l)
{
    // r = 13;
    // l = 34;
    cout << r + l << endl;
}
void go()
{
    cout << "fffffffffff";
}

int sub()
{
    int a = 4;
    int b = 23;

    return a + b;
}

int main()
{
    system("clear");
    int a, b, c; //  declaration varaible a , b
    a = 2;
    b = 4;

    // x = 23;
    // y = 4;int r, int l
    // cout << x << y << endl;

    //  call function
    hello();
    sum(a, b);
    go();
    // sum(13, 34);

    return 0;
}