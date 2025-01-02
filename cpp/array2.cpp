// >>student
// - id : int
// - name : string
// - math: int
// - endlish : int

#include <stdio.h>
#include <string.h>
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");

    int i, n = 5;
    int id, math, english, cpp, history;
    string name;
    float total, average;
    char grade;

    for (i = 0; i < n; i++)
    {
        cout << "\n ID :";
        cin >> id;
        cout << "\n Name :";
        cin >> name;
        cout << "\n Math score :";
        cin >> math;
        cout << "\n English score :";
        cin >> english;
        cout << "\n Cpp score :";
        cin >> cpp;
        cout << "\n history score :";
        cin >> history;

        cout << "id :" << setw(10) << id << endl;
        cout << "name :" << setw(5) << name << endl;
        cout << "Math :" << setw(5) << math << endl;
        cout << "English :" << setw(5) << english << endl;
        cout << "cpp :" << setw(5) << cpp << endl;
        cout << "history :" << setw(5) << history << endl;
        cout << "grade:" << setw(5) << grade << endl;
        cout << "average :" << setw(5) << average << endl;

        total = math + english + cpp + history;
        cout << "\n------------------------------------------------------";
        average = total / 4;
    }

    if (average > 50)
    {
        grade = 'F';
    }
    else if (average <= 50)
    {
        grade = 'E';
    }
    else if (average <= 65)
    {
        grade = 'D';
    }
    else if (average <= 75)
    {
        grade = 'C';
    }
    else if (average <= 85)
    {
        grade = 'B';
    }
    else if (average <= 95)
    {
        grade = 'A';
    }
    else
    {
        cout << "pass";
    }

    // cout << "id :" << setw(20) << id << endl;
    // cout << "name :" << setw(10) << name << endl;
    // cout << "Math :" << setw(10) << math << endl;
    // cout << "English :" << setw(10) << english << endl;
    // cout << "cpp :" << setw(10) << cpp << endl;
    // cout << "history :" << setw(10) << history << endl;
    // cout << "grade:" << setw(10) << grade << endl;
    // cout << "average :" << setw(10) << average << endl;

    return 0;
}
