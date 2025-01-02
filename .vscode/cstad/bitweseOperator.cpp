#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "\nEnter a :";
    cin >> a;
    cout << "\nEnter b :";
    cin >> b;
    int c = a / b;
    int d = c * a;
    int e = 100 % a;
    int f = a & b;
    cout << "This is value of div :" << c << endl;
    cout << "This is value of mul :" << d << endl;
    cout << "This is value of devider :" << e << endl;
    cout << "This is value of devider :" << f << endl;

    return 0;
}