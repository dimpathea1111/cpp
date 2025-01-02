#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    cout << "Practice with my sister";
    cout << "\n\tsister\tbrother\t mother\t father";
    int i, n = 100;
    for (i = 0; i <= n; i++)
    {
        cout << "\nKApov crazy " << i;
    }

    int id;
    float Averang, Gender;
    float Math, English, history, Khmer;
    float grade, Totle;
    char name[25];
    cout << "\nInput your list of student";
    cout << "\nEnter id:";
    cin >> id;
    //  cout<<"\nEnter Averang:"; cin>>Averang;
    cout << "\nEnter name:";
    cin >> name;
    // cout << "\nEnter gender:";
    // cin >> Gender;
    cout << "\nEnter Math:";
    cin >> Math;
    cout << "\nEnter English:";
    cin >> English;
    cout << "\nEnter History:";
    cin >> history;
    cout << "\nEnter Khmer";
    cin >> Khmer;
    Totle = Math + English + history + Khmer;

    // cout << "\nOutput your list of student";
    // cout << "\n ID:";
    // cout << "\n NAME:";
    // // cout << "\n GENDER:";
    // cout << "\n MATH:";
    // cout << "\n ENGLISH:";
    // cout << "\n HISTRORY:";
    // cout << "\n KHMER:";
    // cout << "\nTotle";
    string result;
    Totle = Math + English + history + Khmer;
    Averang = Totle / 4;

    if (Averang >= 95)
    {
        grade = 'A';
    }
    else if (Averang >= 85)
    {
        grade = 'B';
    }
    else if (Averang >= 75)
    {
        grade = 'C';
    }
    else if (Averang >= 65)
    {
        grade = 'E';
    }
    else if (Averang <= 49)
    {
        grade = 'F';
    }
    else
    {
        result = 'fail';
    }

    cout << "\nOutput your list of student";
    cout << "\n ID:" << id;
    cout << "\n NAME:" << name;
    // cout << "\n GENDER:";
    cout << "\n MATH:" << Math;
    cout << "\n ENGLISH:" << English;
    cout << "\n HISTRORY:" << history;
    cout << "\n KHMER:" << Khmer;
    cout << "\nTotle";
    cout << "Total :" << Totle << endl;
    cout << "Average :" << Averang << endl;
    cout << "Grade :" << grade << endl;
    cout << "Result :" << result << endl;
    return 0;
}
