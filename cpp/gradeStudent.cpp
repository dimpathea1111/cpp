#include <iostream>

using namespace std;

int main()
{
    system("clear");
    float score;
    cout << "Enter Score :";
    cin >> score;
    if (score >= 90 && score < 100)
    {
        cout << "Greade A" << endl;
    }
    else if (score >= 80 && score < 90)
    {
        cout << "Grade B" << endl;
    }
    else if (score >= 70 && score < 80)
    {
        cout << "Grade C" << endl;
    }
    else if (score >= 60 && score < 70)
    {
        cout << "Grade D" << endl;
    }
    else if (score >= 50 && score < 60)
    {
        cout << "Grade E" << endl;
    }
    else if (score < 50)
    {
        cout << "Grade F" << endl;
    }
    else
    {
        cout << "Fail" << endl;
    }
    return 0;
}
// 1. input score
//     - score >=90 and <100 => grade A
//     - score >=80 and <90 => grade B
//     - score >=70 and <80 => grade C
//     - score >=60 and <70 => grade D
//     - score >=50 and <60 => grade E
//     - score <50 => grade F
// */