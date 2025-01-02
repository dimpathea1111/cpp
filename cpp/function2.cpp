#include <iostream>

using namespace std;

int sum(int a, int b)
{
    int total = a + b;
    return total;
}
int sum(int a);
int sum(int a, int b);
int sum(int a, float b);
int sum(int a, int b, int c);

int main()
{
    system("clear");
    int num1 = 20;
    int num2 = 45;

    int total = sum(num1, num2);
    float avg = total / 2;

    cout << total << endl;

    int a = 10;
    float b = 10.5;

    cout << sum(10) << endl;
    cout << sum(10, 20) << endl;
    cout << sum(10, (float)10) << endl;
    cout << sum(a, b) << endl;
    cout << sum(10, 20, 30) << endl;

    return 0;
}

int sum(int a)
{

    return a;
}

int sum(int a, float b)
{

    return a + b;
}
int sum(int a, int b, int c)
{

    return (a + b) + c;
}
