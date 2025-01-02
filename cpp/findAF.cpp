#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int id, total, math, english, history, electronic, computer, program;
    float averange, grade, result;
    string name, gender;

    cout << "Input number Id :";
    cin >> id;
    cout << "Input NAME :";
    cin >> name;
    cout << "\n Input gender :";
    cin >> gender;
    cout << "\n Input score math :";
    cin >> math;
    cout << "\n Input score endlish :";
    cin >> english;
    cout << "\n Input score electronic :";
    cin >> electronic;
    cout << "\n Input score computer :";
    cin >> computer;
    cout << "\n Input score program :";
    cin >> program;

    total = (math + english + electronic + computer + program);
    averange = total / 5;

    if (averange > 100)
    {
        grade = 'A';
        if (averange > 90)
        {
            grade = 'B';
            if (averange > 85)
            {
                grade = 'C';
                if (averange > 75)
                {
                    grade = 'D';
                    if (averange > 65)
                    {
                        grade = 'E';
                        if (averange < 50)
                            grade = 'F';
                    }
                }
            }
        }
    }
    else
    {
        grade = 'result';
    }

    cout << "============= Student information ===================";
    cout << "id :" << id << endl;
    cout << "name :" << name << endl;
    cout << "gender :" << gender << endl;
    cout << "score math :" << math << endl;
    cout << "score english :" << english << endl;
    cout << "score history :" << history << endl;
    cout << "score electronic :" << electronic << endl;
    cout << "score computer :" << computer << endl;
    cout << "score program :" << program << endl;
    cout << "Total :" << total << endl;
    cout << "Average :" << averange << endl;
    cout << "Grade :" << grade << endl;
    cout << "Result :" << result << endl;

    cout << "==========================================================";

    return 0;
}