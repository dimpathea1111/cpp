#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    int oc, nc;
    // float con;
    int con, pay;

    cout << "Value oc :";
    cin >> oc;
    cout << "Value nc :";
    cin >> nc;

    con = nc - oc;

    if (con <= 50)
    {
        pay = 550 * con;
    }
    if (con <= 100)
    {
        pay = 610 * con;
    }
    if (con <= 200)
    {
        pay = 720 * con;
    }
    else
    {
        pay = 830 * con;
    }

    cout << "\n show value-============" << endl;
    cout << "Old counter :" << oc << endl;
    cout << "New counter :" << nc << endl;
    cout << "Consumption :" << con << endl;
    cout << "Payment :" << pay << endl;
    return 0;
}