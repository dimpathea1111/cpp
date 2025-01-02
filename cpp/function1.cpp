#include <iostream>

using namespace std;
void hello()
{
    cout << "++++++------! Hello world !-----++++++" << endl;
}

void sum(int a, int b)
{
    cout << "sum = " << a + b << endl;
}

void sub(int x, int y)
{
    cout << "Sub = " << x - y << endl;
}

void Div(int s, int d)
{
    cout << "Div = " << s / d << endl;
}

void mol(int e, int r)
{
    cout << "Mol = " << e * r << endl;
}

void mod(int f, int g)
{
    cout << "Mod = " << f % g << endl;
}

int main()
{

    int a = 30, b = 15;
    int x = 20, y = 4;
    int s = 50, d = 5;
    int e = 30, r = 6;
    int f = 45, g = 9;

    hello();
    sum(a, b);
    sub(x, y);
    Div(s, d);
    mol(e, r);
    mod(f, g);

    return 0;
}