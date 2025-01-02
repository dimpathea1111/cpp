// #include <iostream>
// #include <iomanip>
// #include <string>
// #include <cmath>
// using namespace std;

// int main()
// {
//     system("clear");
//     int num1 = 10, num2 = 10, num3 = 30;
//     int maximum, minimum;
//     int a = 23;

//     // maximum
//     if (num1 >= num2)
//     {
//         minimum = num2;
//         maximum = num1;
//         if (minimum > num3)
//         {
//             minimum = num3;
//         }
//         if (maximum < num3)
//         {
//             maximum = num3;
//         }
//     }
//     else if (num1 < num2)
//     {
//         minimum = num1;
//         maximum = num2;
//         if (minimum > num3)
//         {
//             minimum = num3;
//         }
//         if (maximum < num3)
//         {
//             maximum = num3;
//         }
//     }

//     cout << minimum << endl;

//     printf("\n dadsafadafdfdsffdsafdsafdsfa a :");
//     scanf("%d", &a);

//     return 0;
// }

// Name: Dim Pathea
// Class: M3 year1

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string>
#include <iomanip>
#define strcpy ;
using namespace std;
class Student
{
private:
    int code = 4;
    char tel[25];
    float Score;
    char Name[25];

public:
    void input();
    void output();
    char *GetName();
    float GetScore();
    float Getcode();
    void SetScore(float s);
    void SetName(const char Name[25]);
    Student();
    Student(const Student &other);
    Student(int id, const char *st[25], float s, char tt[15]);
    ~Student();
};
void Student::input()
{
    cout << "Enter student name :";
    cin.sync();
    cin.get(Name, 25);
    // cin>>Name;
    cout << "Enter student code:";
    cin >> code;
    cout << "Enter student score :";
    cin >> Score;
    cout << "Enter student Tel :";
    cin >> tel;
}

void Student::output()
{
    cout << "\nName \tCode \tScore \tTel" << endl;
    cout << "\t" << Name << "\t" << code << "\t" << Score << "\t" << tel << endl;
}

float Student::GetScore()
{
    return (Score);
}

char *Student::GetName()
{
    return (Name);
}

void Student::SetScore(float s)
{
    Score = s;
}

void Student::SetName(const char Name[25])
{
    strcpy(Name);
}

Student::Student()
{
    code = 9;
    strcpy(Name, "Ratha");
    Score = 3.8;
    strcpy(tel, "70495322");
}

Student::Student(const Student &other)
{
    code = other.code;
    strcpy(Name, other.Name);
    Score = other.Score;
    strcpy(tel, other.tel);
}

Student::Student(int id, const char *st[25], float s, char tt[15])
{
    code = id;
    strcpy(Name, st);
    Score = 3.8;
    strcpy(tel, tt);
}

Student::~Student()
{
    cout << "\nDeleted:" << code << "\t" << Name << "\t" << Score << "\t" << tel << endl;
}

void listMenu()
{
    cout << "1.Create list n object with Array" << endl;
    cout << "A.Initialize 9 object" << endl;
    cout << "B.Input n object from keyboard" << endl;
    cout << "2.Output list of Student on screen" << endl;
    cout << "3.Output list of Student on screen ofter sort" << endl;
    cout << "4.Search list of Student " << endl;
    cout << "5.Update list of Student 15% on student score under score 50" << endl;
}
int main()
{
    system("clear");
    int i, j, n = 9, choose;
    listMenu();
    Student obj[9] = {
        student(1, "Arianagrand", 4.3, "1111"),
        student(2, "Tayloswift", 4.0, "2122"),
        student(3, "Selenagomez", 4.6, "3133"),
        student(4, "Justin", 6.4, "4144"),
        student(5, "Yangyang", 3.9, "5155"),
        student(6, "Vannda", 4.0, "6166"),
        student(7, "Woonwo", 4.1, "7177"),
        student(8, "Mingyu", 4.5, "8188"),
        Student()};

    do
    {
        cout << "Select your choose :";
        cin >> choose;
        switch (choose)
        {
        case 1:
        {
            cout << "1. Inilialize 9 object" << endl;
            for (i = 0; i < n; i++)
            {
                cout << "\nStudent [" << i + 1 << "]" << endl;
                obj[i].output();
            }
            break;
        }
        case 2:
        {
            cout << "2.Output list of Student on screen" << endl;
            cout << "\nEnter n:";
            cin >> n;
            for (i = 0; i < n; i++)
            {
                obj[i].output();
            }
            for (i = 0; i < n; i++)
            {
                cout << "\nStudent [" << i + 1 << "]" << endl;
                obj[i].output();
            }
            break;
        }
        case 3:
        {
            cout << "3.Output list of Student on screen ofter sort" << endl;
            Student temp;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (obj[i].Getcode() < obj[j].Getcode())
                    {
                        temp = obj[i];
                        obj[i] = obj[j];
                        obj[j] = temp;
                    }
                }
            }
            for (i = 0; i < n; i++)
            {
                cout << "\nStudent [" << i + 1 << "]" << endl;
                obj[i].output();
            }
            break;
        }
        case 4:
        {
            cout << "4.Search list of Student " << endl;
            char search[25];
            cout << "\tSearch for:";
            cin.sync();
            cin.get(search, 25);
            for (i = 0; i < n; i++)
            {
                if (strcpy(search, obj[i].GetScore()) == 0)
                {
                    obj[i].output();
                }
            }
            break;
        }
        case 5:
        {
            cout << "5.Update list of Student (A or B ) 15% on student score than 50" << endl;
            for (i = 0; i < n; i++)
            {
                if (obj[i].GetScore() < 25)
                {
                    float news = obj[i].GetScore() * 1.15;
                    obj[i].SetScore(news);
                    obj[j].output();
                }
                else
                {
                    cout << "pass" << endl;
                }
            }
            break;
        }
            exit(0);
        }
    } while (1);

    return 0;
}