#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");
    string names[5] = {"pathea", "turi", "hana", "bilu", "woning"};
    for (string name : names)
    {
        cout << name << endl;
    }

    string names[2][3] = {
        {"pathea", "pola", "mosy"},
        {"pathea", "pola", "kalai"},
    };
    cout << names[1][0] << endl;
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 3; j++)
        {
            cout << names[i][j] << " ,";
        }
        cout << endl;
    }

    string names[2][3][2] = {
        {"tealy", "yuri"},
        {"rewe", "fagi"},
        {"kopy", "kigi"},
    };
    cout << names[1][0][1] << endl;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int s = 0; s < 3; s++)
            {
                cout << names[i][j][s] << " ,";
            }
            cout << endl;
        }
        cout << endl;
    }
    cout << "\nyes.................!!!";

    return 0;
}