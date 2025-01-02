#include <stdio.h>
#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    system("clear");
    // input/output
    int a = 234, b = 345;
    float x = 2.345, y = 3.453;
    char ch = 'f';
    char str[25] = "I CAN DO IT !!+-_-+!!%";
    // Sum =a + b;
    // Sub = a - b;
    // Mul = a*b;
    // Mod =a%b;
    // Div= b/a;

    cout << "Value of integer a =" << a << endl;
    cout << "Value of integer b =" << b;
    printf("\n===================\\\in-_-put//======================");
    printf("\n Value of integer a=%a", a);
    printf("\n Value of integer a=%d", b);
    cout << "\n Value of a + b:" << a + b << endl;
    cout << " Value of a - b:" << a - b << endl;
    cout << " Value of a / b:" << a / b << endl;
    cout << " Value of a % b:" << a % b << endl;
    cout << " Value of a * b:" << a * b << endl;
    printf("\n Value of float x=%f", x);
    printf("\n Value of float y=%f", y);
    printf("\n Value of Charecter ch=%c", ch);
    printf("\n Value of string= %s", str);

    int id;
    string name, gender;
    float score1, score2, score3;

    cout << "=========================== Input Student information ============================";
    cout << "\n Input student id :";
    cin >> id;
    cout << "\n Input student name :";
    cin >> name;
    cout << "\n Input student gender :";
    cin >> gender;
    cout << "\n Input student score1 :";
    cin >> score1;
    cout << "\n Input student score2 :";
    cin >> score2;
    cout << "\n Input student score3 :";
    cin >> score3;

    // selection statement
    float total_score, average;
    char grade, result;
    total_score = score1 + score2 + score3;
    average = total_score / 3;

    if (average < 50)
    {
        grade = 'F';
    }
    else if (average >= 50)
    {
        grade = 'E';
    }
    else if (average >= 65)
    {
        grade = 'D';
    }
    else if (average >= 75)
    {
        grade - 'C';
    }
    else if (average >= 85)
    {
        grade = 'B';
    }
    else if (average >= 95)
    {
        grade = 'A';
    }
    else
    {
        result = 'pass';
    }

    cout << "id" << setw(10) << id << endl;
    cout << "name" << setw(10) << name << endl;
    cout << "gender" << setw(10) << name << endl;
    cout << "score1" << setw(10) << score1 << endl;
    cout << "score2" << setw(10) << score2 << endl;
    cout << "score3" << setw(10) << score3 << endl;
    cout << "total_score" << setw(5) << total_score << endl;
    cout << "average" << setw(8) << average << endl;
    cout << "grade" << setw(10) << grade << endl;
    cout << "result" << setw(10) << result << endl;

    // int n,i,s;
    // int code;
    // cout <<"\n for loop";
    // cout <<"\n while loop";
    // cout <<"\n do/while  loop";
    // cout <<"\n label loop";
    // cout<<"\n============================";
    // cout<<"\n for: 1 + 2 + 3 +-------+n";
    // cout<<"\n============================";

    // about money month
    cout << left;
    cout << setw(30) << "name";
    cout << setw(15) << "gender";
    cout << "Age" << setw(15);
    cout << setw(15) << "position";
    cout << setw(15) << "salary" << endl;

    cout << left << "";
    cout << setw(30) << "Pathea";
    cout << setw(15) << "fomale";
    cout << setw(15) << "18";
    cout << setw(15) << "wed developer";
    cout << setw(15) << "1200$";

    for (int i = 0; i < 80; i++)
    {
        cout << "-";
    }

    cout << "\n";
    cout << left;
    cout << setw(30) << "vipha";
    cout << setw(15) << "fomale";
    cout << setw(15) << "21";
    cout << setw(15) << "design";
    cout << setw(15) << "15000$\n";

    int i = 0, j = 0;
    int n = 5;

    while (i < n)
    {
        cout << 5 - i << " ";
        i++;
    }

    // cout << "a[" << i << "][" << j << "]" << "*" << "b[" << j << "][" << j << "=]" << a[i][j] * b[j][i] << endl;

    return 0;
}