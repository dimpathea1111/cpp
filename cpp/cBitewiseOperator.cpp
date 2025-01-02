#include <iostream>

using namespace std;

// bitewise operator= binary code
//  |
//  &
//  ^
//  ~
//  <<
//  >>
int main()
{
    // binary
    // 1=001
    // 2=010
    system("clear");
    int a;
    int b;
    cout << "Enter two integer :";
    cin >> a >> b;
    // cout << "\nEntet a :";
    // cin >> a;
    // cout << "\nEntet b :";
    // cin >> b;

    int c = a & b;
    int d = a | b;

    cout << "\nThis is the result of Wid]twise AND :" << c;
    cout << "\nThis is the result of Wid]twise OR :" << d;
    // cout << "\nThis is the result of Wid]twise OR :" << d;

    return 0;
}