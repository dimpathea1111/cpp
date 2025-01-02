#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    char subject[100];
    int computer, program, english, math, electronic;
    double average, total;
    char grade;

    cout << "\n Enter your subject :";
    cin >> subject;

    cout << "\n Enter your computer score :";
    cin >> computer;

    cout << "\nEnter your program score :";
    cin >> program;

    cout << "\nEnter your english score :";
    cin >> english;

    cout << "\nEnter your math score : ";
    cin >> math;

    cout << "\n Enter your electronic score :";
    cin >> electronic;

    cout << "\n Enter your total score : ";
    cin >> total;

    cout << "\n Enter your average score : ";
    cin >> average;

    total = computer + program + english + math + electronic;
    average = total / 5.0;

    if (average >= 49)
    {
        grade = 'F';
    }
    else if (average == 50)
    {
        grade = 'E';
    }
    else if (average >= 63)
    {
        grade = 'D';
    }
    else if (average >= 73)
    {
        grade = 'C';
    }
    else if (average >= 83)
    {
        grade = 'B';
    }
    else if (average >= 93)
    {
        grade = 'A';
    }

    cout << setw(10) << "subject" << setfill(' ');
    cout << setw(10) << "computer" << setfill(' ');
    cout << setw(10) << "program" << setfill(' ');
    cout << setw(10) << "english" << setfill(' ');
    cout << setw(10) << "math" << setfill(' ');
    cout << setw(10) << "electronic" << setfill(' ');
    cout << setw(10) << "total" << setfill(' ');
    cout << setw(10) << "average" << setfill(' ');
    cout << "\n----------------------------------------------------------------------------";

    cout << setw(10) << "\nsubject" << setfill(' ');
    cout << setw(10) << "computer" << setfill(' ');
    cout << setw(10) << "program" << setfill(' ');
    cout << setw(10) << "english" << setfill(' ');
    cout << setw(10) << "math" << setfill(' ');
    cout << setw(10) << "electronic" << setfill(' ');
    cout << setw(10) << "total" << setfill(' ');
    cout << setw(10) << "average" << setfill(' ');

    return 0;
}