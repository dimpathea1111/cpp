// Semester2:Home Work:1
// Class M3:NHIM PEHSOMBATH
#include <iostream>
#include <cstring>
#include <math.h>
#include <stdio.h>
using namespace std;

class student
{
private:
    int code;
    char name[25];
    float score;

public:
    void Input();
    void Output();
    float GetScore();
    char *GetName();
    void SetData(int id, const char *st, float S);
    void SetScore(float S);
    void SetName(const char st[25]);
};
void student::Input()
{
    cout << "Enter Code  :";
    cin >> code;
    cout << "Enter Name  :";
    cin.ignore();
    cin.getline(name, 25);
    cout << "Enter Score :";
    cin >> score;
}
void student::Output()
{
    cout << "CODE  :" << code << endl;
    cout << "NAME  :" << name << endl;
    cout << "SCORE :" << score << endl;
}
float student::GetScore()
{
    return score;
}
char *student::GetName()
{
    return name;
}
void student::SetData(int id, const char *st, float S)
{
    code = id;
    strcpy(name, st);
    score = S;
}
void student::SetScore(float S)
{
    score = S;
}
void student::SetName(const char st[25])
{
    strcpy(name, st);
}
int main()
{
    student s;
    int choice;
    do
    {
        cout << "\nMENU:";
        cout << "\n1. Input And Output Student Data";
        cout << "\n2. Update Student Score By 15%";
        cout << "\n3. Modify Student Name";
        cout << "\n4. Output Data After Update And Modify";
        cout << "\n5. Use Implementor Function to Provide Information About Student";
        cout << "\n . Enter choice 1 to 5:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            s.Input();
            s.Output();
            break;
        case 2:
        {
            float newScore = s.GetScore() * 1.15;
            s.SetScore(newScore);
            cout << "Updated Score Of Student:" << newScore << endl;
        }
        break;
        case 3:
        {
            char newName[25];
            cout << "Enter New Name:";
            cin.ignore();
            cin.getline(newName, 25);
            s.SetName(newName);
            cout << "Updated Name Of Student:" << s.GetName() << endl;
        }
        break;
        case 4:
            s.Output();
            break;
        case 5:
            cout << "Use cFunction to Provide Information About Student" << endl;
            cout << "Exiting......";
            break;
        default:
            cout << "Invalid choice please enter 1 to 5" << endl;
            break;
        }
    } while (choice != 5);

    return 0;
}