
#include <stdio.h>
#include <iostream>

using namespace std;

class student
{
private:
    int code, Tel;
    char Name[25];
    float Score;

public:
    void Input();
    void output();
    float GetScore();
    float GetName();
    void SetScore(float s);
    void SetName(const char st[25]);
    void Setdata(int id, const char *st, float s);
};
void student::Input()
{
    int i, n;
    cout << "Enter Value N:";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "Student code:";
        cin >> obj[i].code;
        cout << "Student name:";
        cin >> obj[i].Name;
        cout << "Student score:";
        cin >> obj[i].Score;
        cout << "Student tel:";
        cin >> obj[i].Tel;
    }
}

void student::output()
{
}

void MEnuLIst()
{
    cout << "1. Create N object form keyboard and output" << endl;
    cout << "2. Output list of student after sort" << endl;
    cout << "3. Search student have name Rutha in list" << endl;
    cout << "4. Update 15% on student have score than little 50" << endl;
}

int main()
{
    system("clear");
    MEnuLIst();
    student stud;
    student obj[100];
    int choose;

    do
    {
        cout << "Select your choose :";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            stud.Input();
        }
        break;

        case 2:
        {
        }
        break;

        case 3:
        {
        }
        break;

        case 4:
        {
        }
        break;

        default:
            cout << "Thanks love \.*(^)!(^)*./" << endl;
            exit(0);
        }
    } while (1);

    return 0;
}