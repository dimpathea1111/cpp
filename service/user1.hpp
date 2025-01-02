#include<string>
#include<iostream>
using namespace std;
class User{
    private:
        int id;
        string name;
    public:
    // constructor with no parameter
        User(){}
        // constructor with parameters

        User(int id, string  name){
            this->id = id;
            this->name = name;
        }
        void getUserInfo(){
            cout<<"ID: "<<id<<endl;
            cout<<"Name: "<<name<<endl;
        }
}