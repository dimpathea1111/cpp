#include <iostream>

using namespace std;

int main()
{
    // int num1=10;
    // int num2=20;
    cout << "\n++++++++++++++++++++++++++++++++++" << endl;
    int num1, num2;
    cout << " Insert num1 :";
    cin >> num1;
    cout << " Insert num2 :";
    cin >> num2;
    cout << " Insert Multiple :" << num1 * num2 << endl;
    cout << " Insert Div :" << num1 / num2 << endl;
    cout << " Insert Divider :" << num1 % num2 << endl;
    int sum = num1 + num2;
    int result = num1 - num2;
    cout << " Insert Sum :" << sum << endl;
    cout << "\nResult :" << result;
    cout << "\n++++++++++++++++++++++++++++" << endl;
    double div = (double)num1 / num2;
    int mul = num2 * num1;
    int sum1 = num2 + num1;
    // int div = num2 / num1;
    int sub = num2 - num1;
    cout << "\nSum :" << sum1;
    cout << "\nMultiplecation :" << mul;
    cout << "\ndivision :" << div;
    cout << "\nSub :" << sub;
    cout << "\nResult :" << result;
    cout << "\n++++++++++++++++++++++-+++++++++++++" << endl;

    return 0;
}