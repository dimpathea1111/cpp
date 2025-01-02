#include <iostream>

using namespace std;
// Assignment operator :
/*
=
+= , eg a+=b => a = a + b
-=, eg a-=b => a = a - b
/=, eg a/=b => a = a/b
%=, eg a%=b => a = a%b;
 */

int main()
{

    int oldValue = 2;
    int newValue = 4;
    // oldValue += newValue; // = oldvalue = oldvalue + newvalue;
    newValue /= oldValue;
    oldValue /= newValue;
    // oldValue *= newValue;
    cout << "\nNew value :" << oldValue;
    cout << "\nNew value :" << newValue;
    cout << "\nNew value :" << oldValue;
    cout << "\nNew value :" << newValue;

    int a;
    cin >> a;
    a %= 2 / 2;
    cout << "a :" << a;

    // double cashAmountPresent = 0.5;
    // double depositCashAmount;
    // cout << "+++++++++++++++++++++++ Welcome to ABA OR ++++++++++++++++++++++++++" << endl;
    // cout << "\n[:)] Enter amound of cash to transfer  :";
    // cin >> cashAmountPresent;
    // // input money
    // cashAmountPresent += depositCashAmount;
    // cout << "\ncash amount aftet transfered :" << cashAmountPresent << endl;
    // // ដកលុយ output money
    // cashAmountPresent -= depositCashAmount;
    // cout << "\ncash amount aftet transfered :" << cashAmountPresent << endl;

    return 0;
}