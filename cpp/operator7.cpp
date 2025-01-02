#include <fstream>
#include <iostream>
#include <cmath>
#include<string.h>

using namespace std;

class Student{
    private: int code;
        char Name[25];
        float Score;
        char Tel[30];
    public: void input(); void output();
        float GetScore();
        // char *GetName();
        Student();
        Student(int code, char *st, float Scoe, char Tel[30]);
          void SetScore(float Score);
    // void SetData(int id, const char *st, float S);
    // void SetName(const char st[25]);
};
void Student::input()
{

    cout << "Enter student Code :";
    cin >> code;
    cout << "Enter student Name :";
    cin >> Name;
    cout << "Enter student Score :";
    cin >> Score;
    cout << "Enter student Tel :";
    cin >> Tel;
}

void Student::output()
{
    cout << " Code :\t " << code << endl;
    cout << " Name :\t" << Name << endl;
    cout << " Score:\t" << Score << endl;
    cout << " Tel:\t" << Tel << endl;
}
float Student::GetScore()
{
    return (Score);
}

float Student::GetScore()
{
    return Score;
}

Student::Student(){
    code=23; strcpy(Name, "Unknow"); Score=55.34; strcpy(Tel, "09876231");
}
Student::Student(int code, char *st, float Scoe, char Tel[30]){
    this->code=code; strcpy(this->Name,st); this->Score=Score; strcpy(this->Tel, Tel);
}
int main(){
     int n=7, i, j;
    // cout<<"\n1. Write data to file Array.bin"<<endl;
    // ofstream fout;
    // fout.open("Array.bin", ios::binary);
    // if(fout.fail()){
    //     cout<<"\nError file operator for write"<<endl;
    //     return 0;
    // }
    // for(i=0; i<7; i++)
    // fout.write((char*)&a[i], sizeof(int));
    // fout.close();
    // cout<<"2. Read data form Array.bin and output on screen"<<endl;
    // int up[45];
    // ifstream fin;
    // fin.open("Array.bin", ios::binary);
    // if(fin.fail()){
    //     cout<<"Error open file for Read"<<endl;
    //     return 0;
    // }
    // // fin.read((char*)&)
    // fin.seekg(0, ios::end);
    // int size = fin.tellg();
    // int Num;
    // cout<<"\nNum="<<Num;
    cout<<"Practice write /read object to Binary file"<<endl;
    cout<<"\n1. Create list of student with initialize 7 object"<<endl;
    Student obj[n]={
        {11, "ggg", 55.4, "09985553"},
        {11, "ggg", 55.4, "09985553"},
        {11, "ggg", 55.4, "09985553"},
        {11, "ggg", 55.4, "09985553"},
        {11, "ggg", 55.4, "09985553"},
        {11, "ggg", 55.4, "09985553"},
        {11, "ggg", 55.4, "09985553"};
        
    };

     cout << "1. Write Array to file:" << endl;
    ofstream fout;
    // fout.open("FileName", ios::binary);
    fout.open("Student.bin", ios::binary);
    if (fout.fail())
    {
        cout << "\nError open file" << endl;
        return 0;
    }
    for (i = 0; i < n; i++)
        fout.write((char *)&a[i], sizeof(float));
    fout.close();
    cout << "2. Read data of array form file" << endl;
    float b[45];
    ifstream fin;
    // ofstream fout1;
    fin.open("Student.bin", ios::binary);
    if (fin.fail())
    {
        cout << "Error open file";
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        cout << b[i] << endl;
    }
    fin.read((char *)&obj[i], sizeof(float));
    fin.close();



    return 1;
}