
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");
    int n = 2;
    int id[n], math[n], cpp[n], history[n], english[n], total[n];
    string name[n];
    float average[n];
    char grade[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter Id[]" << setw(20) << i + 1 << "]:";
        cin >> id[i];
        cout << "Enter Name[" << setw(20) << i + 1 << "]:";
        cin >> name[i];
        cout << "Enter Math score" << setw(15) << i + 1 << ":";
        cin >> math[i];
        cout << "Enter cpp score" << setw(15) << i + 1 << ":";
        cin >> cpp[i];
        cout << "Enter history score" << setw(15) << i + 1 << ":";
        cin >> history[i];
        cout << "Enter english score" << "\t<< i + 1 << " : ";
                                                            cin >>
            english[i];

        // cout << "Average  :";
        // cin >> average;
        // cout << "Total  :" << i + 1;
        // cin >> total[i];

        total[i] = math[i] + cpp[i] + history[i] + english[i];
        average[i] = total[i] / 4;

        if (average[i] < 50)
        {
            grade[i] = 'F';
        }
        else if (average[i] < 65)
        {
            grade[i] = 'E';
        }
        else if (average[i] < 75)
        {
            grade[i] = 'D';
        }
        else if (average[i] < 85)
        {
            grade[i] = 'C';
        }
        else if (average[i] < 95)
        {
            grade[i] = 'B';
        }
        else
        {
            grade[i] = 'A';
        }
        system("clear");
    }

    cout << "ID\tName\tcpp\thistory\tEnglish\tTotal" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << id[i] << setw(20) << name[i] << setw(15) << math[i] << setw(15) << cpp[i] << setw(15);
        cout << history[i] << setw(15) << english[i] << setw(15) << average[i] << setw(15) << total[i] << setw(15) << grade[i] << endl;
    }

    return 0;
}