#include <iostream>
#include <iomanip>
#include <string>

// #define strcpy;

using namespace std;
#define strcpy ;
#define strcmp ;

class person
{
private:
    int code;

protected:
    char Name[25];

public:
    person();
    person(int code, char Name[25]);
    void input();
    void output();
};
class Worker : protected person
{
private:
    int hour;
    float Salary;
    static float Rate;

public:
    void input();
    void output();
    float Income;
    Worker();
    Worker(int code, char Name[25], int hour);
    friend void Sort(Worker a[100], int n);
    friend void Search(Worker a[100], int n);
};

static float WorkerRate = 3.57;
person::person()
{
    code;
    strcpy(Name, "Unknow");
}
person::person(int code, char Name[25])
{
    this->code = code;
    strcpy(this->Name, Name);
}
void person::input()
{
    cout << "\nEnter code :";
    cin >> code;
    cout << "\nEnter Name:";
    cin >> Name;
}
void person::output()
{
    cout << "\t" << code;
    cout << "\t" << Name;
}

// float Worker::Income()
// {
//     float Tolat = Salary + (Rate * hour);
//     return 0;
// }
void Sort(Worker a[], int n)
{
    int i, j;
    Worker Temp;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (strcmp(a[i].Name, a[j].Name > 0))
            {
                Temp = a[i];
                a[i] = a[j];
                a[j] = Temp;
            }
    cout << "\nlist after sort" << endl;
    cout << "\n code\t thour\tRate\tSalary" << endl;
    for (i = 0; i < n; i++)
        a[i].output();
}
void Search(Worker a[100], int n)
{
    char newName[25];
    int i, found;
    cout << "\nEnter name for search=";
    // cin.sync();cin.get(Name; 25);
    found = 0;
    for (i = 0; i < n; i++)
        if (strcpy(newName, a[i].Name) == 0)
        {
            a[i].output();
            found == 1;
            if (found == 0)
                cout << "\nNot found";
        }
}
int main()
{
    cout << "\nPractice with anitailize" << endl;
    cout << "\n===================================" << endl;
    cout << "\n1.Initailize 5 object of worker" << endl;
    Worker obj[5] = {Worker(9, "wew", 34, 56, 65),
                     Worker(9, "wew", 34, 96, 95),
                     Worker(6, "rew", 54, 76, 65),
                     Worker(8, "dew", 24, 26, 75),
                     Worker(3, "gew", 36, 86, 90)};
    int i, n;
    n = 5;
    cout << "\n code\t thour\tRate\tSalary" << endl;
    for (i = 0; i < n; i++)
        obj[i].output();
    // getch();
    cout << "\n\t\tSearch" << "\n=================" << endl;
    Search(obj, n);
    Worker *ptr;
    cout << "\n2.Input n object of worker:" << endl;
    cout << "\nEnter n==";
    cin >> n;
    ptr = new Worker[n];
    for (i = 0; i < n; i++)
        // ptr[i].Input();
        cout << "\n Display information of worker" << endl;
    cout << "\n code\t thour\tRate\tSalary" << endl;
    // for(i=0; i<n; i++)
    // ptr[i].output();
    // getch();

    // search(ptr, n); //sort (ptr, n);

    return;
}