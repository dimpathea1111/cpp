#include<iostream>
#include<string.h>
#include<iomanip>

using namespace std;

class family{
    private: int code; 
    float money; float gender; char name[30]; char tel[30];
    public: void input();
     void output(); 
     void search();     
     float Getmoney();
    char *Getname();
    // void SetData(int id, const char *sl, float S);
    void SetMoney();
    void Setname();

};

void family::input(){
    cout<<"Enter code : "<<endl;
    cin>>code;
    cout<<"Enter name:"; 
    cin>>name;
    cout<<"Enter gender: "<<endl;
    cin>>gender;
    cout<<"Enter money:"; 
    cin>>money;
    cout<<"Enter tel:"; 
    cin>>tel;
}

void family::output(){
    cout<<"Code :"<<code<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Gender :"<<gender<<endl;
    cout<<"Money :"<<money<<endl;
    cout<<"Tel :"<<tel<<endl;
}

float family::Getmoney(){
    return money;
}

 char* family::Getname(){
    return name;
 }

 void family::SetMoney(){
    money ;
}
void family::Setname(){
    name;
}

int main(){
cout<<"++ Practice family class +++++++++++++++ "<<endl;



    return 0;
}