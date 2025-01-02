#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n1 = 20, n2 = 30, n3 = 35, n4 = 50;
    int maximum, minimum;

    maximum = max(n1, n2);
    maximum = max(maximum, n3);
    maximum = max(maximum, n4);

    minimum = min(n3, n4);
    minimum = min(minimum, n2);
    minimum = min(minimum, n1);

    int maxNumaber = max(n1, max(n2, max(n3, n4)));
    int miniNumber = min(n4, max(n3, min(n2, n1)));

    cout << maximum << endl;
    cout << minimum << endl;

    int pig = 23;
    string price;

    if (pig >= 18)
    {
        price = "can price";
        if (pig == 18)
        {
            price = "can price";
        }
    }
    else
    {
        price = "can't price";
    }
    cout << price << endl;

    return 0;
}