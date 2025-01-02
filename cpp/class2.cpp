
// class M3 year1
// Name : Dim Pathea

#include <stdio.h>
#include <iostream>
#include <cmath>
#include <malloc.h>
#include <string>

#define strcpy ;

using namespace std;

class Student
{
private:
    int code;
    char Name[25];
    float Score;

public:
    void input();
    void Output();
    float GetScore();
    char *GetName();
    void SetData(int id, const char *sl, float S);
    void SetScore(float S);
    void SetName(const char st[25]);
};
void Student::input()
{

    cout << "Enter student Code :";
    cin >> code;
    cout << "Enter student Name :";
    cin >> Name;
    cout << "Enter student Score :";
    cin >> Score;
}

void Student::Output()
{
    cout << " Code :\t " << code << endl;
    cout << " Name :\t" << Name << endl;
    cout << " Score:\t" << Score << endl;
}
float Student::GetScore()
{
    return (Score);
}

char *Student::GetName()
{
    return (Name);
}

void Student::SetData(int id, const char *st, float S)
{
    code = id;
    strcpy(Name, st);
    Score = S;
}

void Student::SetScore(float S)
{
    Score = S;
}

void Student::SetName(const char st[25])
{
    strcpy(Name, st, 25);
}

void listMenu()
{
    cout << "\t=============..*. Practice1: Assignment .*..===============  " << endl;
    cout << "1.Make Object By Keyboard And Output On Screen" << endl;
    cout << "2.Update Score By 15%" << endl;
    cout << "3.Modify Student Name" << endl;
    cout << "4.Show Information After Update and Modify" << endl;
    cout << "5.Use Implementor Function to Provide Information About Student" << endl;
}

int main()
{
    system("clear");
    listMenu();
    Student stud;
    int i, choose;

    do
    {
        cout << "Select your choose :: ";
        cin >> choose;

        switch (choose)
        {
        case 1:
        {
            cout << "Make Object By Keyboard And Output On Screen" << endl;

            stud.input();
            stud.Output();
        }
        break;

        case 2:
        {
            float newScore = stud.GetScore() * 1.15;
            stud.SetScore(newScore);
            cout << "Updated Score Of Student:" << newScore << endl;
        }
        break;

        case 3:
        {
            char newName[30];
            cout << "Enter Student New Name:";
            cin >> newName;
            stud.SetName(newName);
            cout << "Updated name student:" << stud.GetName() << endl;
        }
        break;

        case 4:
        {
            cout << " Information after update and Modify" << endl;
            stud.Output();
        }
        break;

        case 5:
        {
            cout << "Use implementor function to provide information about student" << endl;
            // stud.SetData(56, "raby", 23.5);
        }
        break;
        default:
            cout << "Thank you !";
            exit(0);
        }

    } while (1);

    return 0;
}