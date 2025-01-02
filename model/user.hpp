#include <iostream>

using namespace std;

struct User
{
    int id;
    string name;
    string email;
    string password;
    //
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return this->id;
    }
    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return this->name;
    }
    void setEmail(string email)
    {
        this->email = email;
    }
    string getEmail()
    {
        return this->email;
    }
    void setPassword(string password)
    {
        this->password = password;
    }
    string getPassowrd()
    {
        return this->password;
    }
    //
    void getUserInfo()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << this->email << endl;
        cout << "Password: " << this->password << endl;
    }
};