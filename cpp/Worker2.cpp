
#include <iostream>
#include <cmath>
#include <malloc.h>
#include <string>

#define strcpy ;

using namespace std;

class Worker
{
private:
    int code;
    char Name[25];
    float salary, gender, time;

public:
    void input();
    void Output();
    float Getsalary();
    char *GetName();
    void SetData(int id, const char *sl, float S);
    void Setsalary(float S);
    void SetName(const char st[25]);
};
void Worker::input()
{

    cout << "Enter Code :";
    cin >> code;
    cout << "Enter Name :";
    cin >> Name;
    cout<<"Enter gender :"; cin>>gender;
    cout<<"Enter time :"; cin>>time;
    cout << "Enter salary :";
    cin >> salary;
}

void Worker::Output()
{
    cout << " Code :\t " << code << endl;
    cout << " Name :\t" << Name << endl;
    cout << " gender:\t" << gender<< endl;
    cout << " time:\t" << time<< endl;
    cout << " salary:\t" << salary<< endl;
}
float Worker::Getsalary()
{
    return (salary);
}

char *Worker::GetName()
{
    return (Name);
}

void Worker::SetData(int id, const char *st, float S)
{
    code = id;
    strcpy(Name, st);
    salary = S;
}

void Worker::Setsalary(float S)
{
    salary = S;
}

void Worker::SetName(const char st[25])
{
    strcpy(Name, st, 25);
}

int main(){

    cout<<"Practice about Worker++++++++++ <^0_0^> ++++++++++"<<endl;
    int i,j, n;

    cout<<"initialize n worker "<<endl;
    // int a[7]={
    // (11, 'wew', 'femal' '12, 300)
    // };
    cout<<"input n 0bject on screen"<<endl;
    Worker obj[8];
    cout<<"Enter value of n:"; cin>>n;
    for (i=0; i<n; i++){
        obj[i].input();
    }

    return 0;
}
