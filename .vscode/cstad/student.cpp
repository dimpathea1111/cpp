#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    int id;
    string name, gender;
    float average, total, grade;
    float history, khmer, math;

    cout << "========= Input student Info ===========";
    cout << "\nInput student id :";
    cin >> id;
    cout << "\nInput student name :";
    cin >> name;
    cout << "\nInput student gender :";
    cin >> gender;
    cout << "\nInput student khmer :";
    cin >> khmer;
    cout << "\nInput student math :";
    cin >> math;
    cout << "\nInput student history :";
    cin >> history;

    total = history + khmer + math;
    average = total / 3;

    if (average >= 50)
    {
        grade = 'E';
    }
    else if (average >= 65)
    {
        grade = 'D';
    }
    else if (average >= 75)
    {
        grade = 'C';
    }
    else if (average >= 85)
    {
        grade = 'B';
    }
    else if (average >= 95)
    {
        grade = 'A';
    }
    else if (average <= 49)
    {
        grade = 'F';
    }
    else
    {
        cout << "fail" << endl;
    }
    cout << "============= Student information ===================";
    cout << "id :" << id << endl;
    cout << "name :" << name << endl;
    cout << "gender :" << gender << endl;
    cout << "Khmer :" << khmer << endl;
    cout << "Math :" << math << endl;
    cout << "History :" << history << endl;
    cout << "Total :" << total << endl;
    cout << "Average :" << average << endl;
    cout << "Grade :" << grade << endl;
    // cout << "Result :" << result << endl;
    return 0;
}