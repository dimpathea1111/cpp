#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n = 3;
    int id[n], math[n], english[n], total[n];
    string name[n];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter ID[" << i + 1 << "]:";
        cin >> id[i];
        cout << "Enter Name[" << i + 1 << "]:";
        cin >> id[i];
        cout << "Enter Math score[" << i + 1 << "]:";
        cin >> math[i];
        cout << "Enter English score[" << i + 1 << "]:";
        cin >> english[i];

        total[i] = math[i] + english[i];
        cout << "\n---------------------------------" << endl;
    }
    system("clear");
    cout << "ID\tName\tMath\tEnglish\tTotal" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << id[i] << "\t" << name[i] << "\t" << math[i] << "\t" << english[i] << "\t" << total[i] << endl;
    }

    return 0;
}