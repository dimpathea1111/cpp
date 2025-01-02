#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    system("clear");
    string name;
    //    cout <<"\\it\"s me" <<endl;
    cout << "Enter your name";
    cin >> name;
    getline(cin, name);
    cout << name << endl;

    int num1 = 22, num2 = 44, num3 = 54;
    int m;

    m = max(num1, num2);

    if (num1 > num2)
    {
        m = num1;
        if (num3 > m)
        {
            m = num3;
        }
    }
    else if (num1 < num2)
    {
        m = num2;
    }
    cout << m << endl;

    // if (!false)
    // {
    //     cout << "true" << endl;
    // }
    // else
    //     (true || false)
    //     {
    //         cout << "hello" << endl;
    //     }

    // cout <<floot

    return 0;
}
