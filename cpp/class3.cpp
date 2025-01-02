
// // Name: Dim Pathea
// // Class: M3 year1

// #include <stdio.h>
// #include <iostream>
// #include <math.h>
// #include <string>
// #include <iomanip>
// #define strcpy ;
// using namespace std;
// class Student
// {
// private:
//     int code = 4;
//     char tel[25];
//     float Score;
//     char Name[25];

// public:
//     void input();
//     void output();
//     char *GetName();
//     float GetScore();
//     float Getcode();
//     void SetScore(float s);
//     void SetName(const char Name[25]);
//     Student();
//     Student(const Student &other);
//     Student(int id, const char *st[25], float s, char tt[15]);
//     ~Student();
// };
// void Student::input()
// {
//     cout << "Enter student name :";
//     cin.sync();
//     cin.get(Name, 25);
//     // cin>>Name;
//     cout << "Enter student code:";
//     cin >> code;
//     cout << "Enter student score :";
//     cin >> Score;
//     cout << "Enter student Tel :";
//     cin >> tel;
// }

// void Student::output()
// {
//     cout << "\nName \tCode \tScore \tTel" << endl;
//     cout << "\t" << Name << "\t" << code << "\t" << Score << "\t" << tel << endl;
// }

// float Student::GetScore()
// {
//     return (Score);
// }

// char *Student::GetName()
// {
//     return (Name);
// }

// void Student::SetScore(float s)
// {
//     Score = s;
// }

// void Student::SetName(const char Name[25])
// {
//     strcpy(Name);
// }

// Student::Student()
// {
//     code = 9;
//     strcpy(Name, "Ratha");
//     Score = 3.8;
//     strcpy(tel, "70495322");
// }

// Student::Student(const Student &other)
// {
//     code = other.code;
//     strcpy(Name, other.Name);
//     Score = other.Score;
//     strcpy(tel, other.tel);
// }

// Student::Student(int id, const char *st[25], float s, char tt[15])
// {
//     code = id;
//     strcpy(Name, st);
//     Score = 3.8;
//     strcpy(tel, tt);
// }

// Student::~Student()
// {
//     cout << "\nDeleted:" << code << "\t" << Name << "\t" << Score << "\t" << tel << endl;
// }

// void listMenu()
// {
//     cout << "1.Create list n object with Array" << endl;
//     cout << "A.Initialize 9 object" << endl;
//     cout << "B.Input n object from keyboard" << endl;
//     cout << "2.Output list of Student on screen" << endl;
//     cout << "3.Output list of Student on screen ofter sort" << endl;
//     cout << "4.Search list of Student " << endl;
//     cout << "5.Update list of Student 15% on student score under score 50" << endl;
// }
// int main()
// {
//     system("clear");
//     int i, j, n = 9, choose;
//     listMenu();
//     Student obj[9] = {
//         Student(1, "Arianagrand", 4.3, "1111"),
//         Student(2, "Tayloswift", 4.0, "2122"),
//         Student(3, "Selenagomez", 4.6, "3133"),
//         Student(4, "Justin", 6.4, "4144"),
//         Student(5, "Yangyang", 3.9, "5155"),
//         Student(6, "Vannda", 4.0, "6166"),
//         Student(7, "Woonwo", 4.1, "7177"),
//         Student(8, "Mingyu", 4.5, "8188"),
//         Student()};

//     do
//     {
//         cout << "Select your choose :";
//         cin >> choose;
//         switch (choose)
//         {
//         case 1:
//         {
//             cout << "1. Inilialize 9 object" << endl;
//             for (i = 0; i < n; i++)
//             {
//                 cout << "\nStudent [" << i + 1 << "]" << endl;
//                 obj[i].output();
//             }
//             break;
//         }
//         case 2:
//         {
//             cout << "2.Output list of Student on screen" << endl;
//             cout << "\nEnter n:";
//             cin >> n;
//             for (i = 0; i < n; i++)
//             {
//                 obj[i].output();
//             }
//             for (i = 0; i < n; i++)
//             {
//                 cout << "\nStudent [" << i + 1 << "]" << endl;
//                 obj[i].output();
//             }
//             break;
//         }
//         case 3:
//         {
//             cout << "3.Output list of Student on screen ofter sort" << endl;
//             Student temp;
//             for (i = 0; i < n; i++)
//             {
//                 for (j = 0; j < n; j++)
//                 {
//                     if (obj[i].Getcode() < obj[j].Getcode())
//                     {
//                         temp = obj[i];
//                         obj[i] = obj[j];
//                         obj[j] = temp;
//                     }
//                 }
//             }
//             for (i = 0; i < n; i++)
//             {
//                 cout << "\nStudent [" << i + 1 << "]" << endl;
//                 obj[i].output();
//             }
//             break;
//         }
//         case 4:
//         {
//             cout << "4.Search list of Student " << endl;
//             char search[25];
//             cout << "\tSearch for:";
//             cin.sync();
//             cin.get(search, 25);
//             for (i = 0; i < n; i++)
//             {
//                 if (strcpy(search, obj[i].GetScore()) == 0)
//                 {
//                     obj[i].output();
//                 }
//             }
//             break;
//         }
//         case 5:
//         {
//             cout << "5.Update list of Student (A or B ) 15% on student score than 50" << endl;
//             for (i = 0; i < n; i++)
//             {
//                 if (obj[i].GetScore() < 25)
//                 {
//                     float news = obj[i].GetScore() * 1.15;
//                     obj[i].SetScore(news);
//                     obj[j].output();
//                 }
//                 else
//                 {
//                     cout << "pass" << endl;
//                 }
//             }
//             break;
//         }
//             exit(0);
//         }
//     } while (1);

//     return 0;
// }

#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

struct Worker
{
    int code, Age;
    float salary;
    string name[25];
    char Tel[30];
    char gender;
};

int main()
{
    cout << "\n1. Assign 3 record and output on screen";
    Worker worker[3] = {
        {01, 'pathea', 18, "0987545", "3000", "F"},
        {01, 'yithea', 20, "0187545", "2000", "F"},
        {01, 'rathea', 19, "0287545", "4000", "M"}};

    cout << "\n Output 3 worker" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "\n code :" << worker[i].code;
        cout << "\n Name :" << worker[i].name;
        cout << "\n Age :" << worker[i].Age;
        cout << "\n Tel :" << worker[i].Tel;
        cout << "\n Salary :" << worker[i].salary;
        cout << "\n Gender :" << worker[i].gender;
    }

    cout << "\n1.2  Input n recode and output after sort" << endl;

    int n;
    cout << "\n Enter n for worker record:";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "\n Detail n of worker[" << i + 1 << "]" << endl;
        cout << "\nEnter code:";
        cin >> worker[i].code;
        cout << "\nEnter Name:";
        cin >> worker[i].name;
        cout << "\nEnter Age:";
        cin >> worker[i].Age;
        cout << "\nEnter Tel:";
        cin >> worker[i].Tel;
        cout << "\nEnter salary:";
        cin >> worker[i].salary;
        cout << "\nEnter gender:";
        cin >> worker[i].gender;
    }

    cout << "\n output after sort by code of worker" << endl;
    int Temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (worker[i].code > worker[j].code)
            {
                worker Temp = worker[i];
                worker[i] = worker[j];
                worker[j] = Temp;
            }
        }
    }

    return 0;
}