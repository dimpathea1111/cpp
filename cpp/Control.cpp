#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    system("clear");
    char name[30], grade;
    int score1, score2, score3;
    double total, average;

    cout << "What is your name? :";
    cin >> name;

    cout << "Enter Score1 :";
    cin >> score1;
    cout << "Enter Score2 :";
    cin >> score2;
    cout << "Enter Score3 :";
    cin >> score3;

    total = score1 + score2 + score3;
    average = total / 3;

    if (average < 50)
    {
        grade = 'F';
    }
    else if (average < 65)
    {
        grade = 'E';
    }
    else if (average < 75)
    {
        grade = 'D';
    }
    else if (average < 85)
    {
        grade = 'C';
    }
    else if (average < 95)
    {
        grade = 'B';
    }
    else
    {
        grade = 'A';
    }

    cout << left;
    cout << setw(25) << "Name";
    cout << setw(10) << "grade";
    cout << setw(10) << "score1";
    cout << setw(10) << "score2";
    cout << setw(10) << "score3";
    cout << setw(10) << "total";
    cout << setw(10) << "average" << endl;

    for (int i = 0; i < 100; i++)
    {
        cout << "-";
    }
    cout << left;
    cout << "\n";
    cout << setw(25) << "pathea";
    cout << setw(10) << "B";
    cout << setw(10) << "90";
    cout << setw(10) << "90";
    cout << setw(10) << "100";
    cout << setw(10) << "280";
    cout << setw(10) << "93.33" << endl;

    cout << left;
    cout << "\n";
    cout << setw(25) << "pathea";
    cout << setw(10) << "B";
    cout << setw(10) << "90";
    cout << setw(10) << "90";
    cout << setw(10) << "100";
    cout << setw(10) << "280";
    cout << setw(10) << "93.33" << endl;

    return 0;
}