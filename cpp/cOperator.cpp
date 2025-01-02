#include <iostream>

using namespace std;

// Arimathic. operator
//  +
//   -
//    *
//    %
//    /

int main()
{
    cout << "+++++++++++++++++++++++++++++" << endl;
    int id;
    string name;
    float score, tel;
    int i, n;
    cout << "\nEnter n :";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter Id :";
        cin >> id;
        cout << "\nEnter Name :";
        cin >> name;
        cout << "\nEnter Score :";
        cin >> score;
        cout << "\nEnter Tel :";
        cin >> tel;
    }
    for (i = 0; i < n; i++)
    {
        cout << "\n Id : " << id << endl;
        cout << "\n Name :" << name;
        cout << "\n Score :" << score;
        cout << "\n Tel :" << tel;
    }
    int a;
    cout << "\nEntet a:";
    cin >> a;
    a -= 100 / 100 % 100;
    cin >> a;

    return 0;
}