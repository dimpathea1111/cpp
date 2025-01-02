#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    // int n = 5;

    // cout << "Enter N:";
    // cin >> n;
    // while (i <= 7)
    // {
    //     cout << i << "\n number one until seven number  ";
    //     i++;
    // }
    // system("clear");
    // // int day = 1, day = 2, day = 3, day = 7;
    // int day;

    // switch (day)
    // {
    // case 1:
    //     cout << "Monday";
    //     break;
    // case 2:
    //     cout << "Tuesday";
    //     break;
    // case 3:
    //     cout << "Wednesday";
    //     break;
    // case 4:
    //     cout << "Thursday";
    //     break;
    // case 5:
    //     cout << "Friday";
    //     break;
    // case 6:
    //     cout << "Saturday";
    //     break;
    // case 7:
    //     cout << "Sunday";
    //     break;
    // }

    int num;
    cout << "Enter number :";
    cin >> num;
    switch (num)
    {
    case 1:
    {
        cout << "You Inputed number 1.";
        break;
    }
    case 2:
    {
        cout << "You Inputed number 2:";
        break;
    }
    case 3:
    {
        cout << "You Inputed number 3:";
        break;
    }
    case 4:
    {
        cout << "You Inputed number 4:";
    }
    case 5:
    {
        cout << "You Input number 5 :";
        break;
    }
    case 6:
    {
        cout << "You Inputed number 6:";
        break;
    }
    case 7:
    {
        cout << "You Inputed number 7:";
    }
    default:
        cout << "\n number 1 2 3 4 5 6 7";
    }
    return 0;
}