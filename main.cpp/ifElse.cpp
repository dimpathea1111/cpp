#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    system("clear");

    // int score;
    // cout << "Enter score :";
    // cin >> score;
    // if (score >= 90)
    // {
    //     cout << "You got grade A " << endl;
    // }
    // else if (score >= 80)
    // {
    //     cout << "You got grade B " << endl;
    // }
    // else if (score >= 70)
    // {
    //     cout << "You got grade C " << endl;
    // }
    // else if (score >= 60)
    // {
    //     cout << "You got grade D " << endl;
    // }
    // else if (score >= 50)
    // {
    //     cout << "You got grade E " << endl;
    // }
    // else if (score <= 49)
    // {
    //     cout << "You got grade F " << endl;
    // }
    // else
    // {
    //     cout << "You are fail" << endl;
    // }

    // cout << "2.-Uppercase and lowercase letter is in chrecter" << endl;

    // int n1, n2, n3;
    // cout << "\nEnter three integer number :" << endl;
    // cout << "\nEnter number n1 :";
    // cin >> n1;
    // cout << "\nEnter number n2 :";
    // cin >> n2;
    // cout << "\nEnter number n3 :";
    // cin >> n3;
    // if (n1 >= n2 && n1 >= n3)
    // {
    //     cout << n1 << "\nis the biggest number" << endl;
    // }
    // else if (n2 >= n1 && n2 >= n3)
    // {
    //     cout << n2 << "\nis the biggest number" << endl;
    // }
    // else if (n3 >= n1 && n3 >= n1)
    // {
    //     cout << n3 << "\nis the biggest number" << endl;
    // }
    // else
    // {
    //     cout << "is the big less number" << endl;
    // }
    cout << "3" << endl;
    char ch;
    int n;
    cout << "\nEnter charecter ch :";
    cin >> ch;
    // cout << "\nEnter integer n :";
    // cin >> n;
    if (n >= 32 && n >= 48)
    {
        cout << "It is a number ." << endl;
    }
    else if (n >= 63 && n >= 80)
    {
        cout << "It is uppercase letter " << endl;
    }
    else if (n >= 96 && n >= 127)
    {
        cout << "It is lowercase letter" << endl;
    }
    else
    {
        cout << "That is not a number or a letter" << endl;
    }

    return 0;
}