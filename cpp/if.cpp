#include <iostream>
using namespace std;

int main()
{
    system("clear");

    int id;
    string name, gender;
    float score1, score2, score3;

    cout << "========= Input student Info ===========";
    cout << "\nInput student id :";
    cin >> id;
    cout << "\nInput student name :";
    cin >> name;
    cout << "\nInput student gender :";
    cin >> gender;
    cout << "\nInput student score1 :";
    cin >> score1;
    cout << "\nInput student score2 :";
    cin >> score2;
    cout << "\nInput student score3 :";
    cin >> score3;

    float total_score, average;
    char grade;
    string result;
    total_score = (score1 + score2 + score3);
    average = total_score / 3;

    if (average >= 90)
    {
        grade = 'A';
    }
    else if (average >= 80)
    {
        grade = 'B';
    }
    else if (average >= 70)
    {
        grade = 'C';
    }
    else if (average >= 60)
    {
        grade = 'D';
    }
    else if (average >= 50)
    {
        grade = 'E';
    }
    else if (average < 50)
    {
        grade = 'F';
    }
    else if (average < 50)
    {
        result = "fail";
    }
    else
    {
        result = "pass";
    }

    cout << "============= Student information ===================";
    cout << "id :" << id << endl;
    cout << "name :" << name << endl;
    cout << "gender :" << gender << endl;
    cout << "score1 :" << score1 << endl;
    cout << "score2 :" << score2 << endl;
    cout << "score3 :" << score3 << endl;
    cout << "Total :" << total_score << endl;
    cout << "Average :" << average << endl;
    cout << "Grade :" << grade << endl;
    cout << "Result :" << result << endl;

    cout << "==========================================================";

    return 0;
}