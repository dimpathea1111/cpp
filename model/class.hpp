#include <string>
#include <iostream>

using namespace std;
class Class
{
private:
    int id;
    string name;
    string nicktName;
    string email;
    string password;
    unsigned phoneNumber;
    // string profile;
    // string cover;
    string profile = "https://www.shutterstock.com/image-vector/vector-flat-illustration-grayscale-avatar-600nw-2264922221.jpg";
    string cover = "https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTZGdAIgQ1bOI1RT5ha6LYIpT5e4J72qTvB5Q&s";

public:
    void inputClassValue()
    {
        cout << "Input Id :";
        cin >> id;
        cout << "Input Name :";
        // cin>>name;
        cin.ignore();
        getline(cin, name);
        cout << "Input email :";
        cin >> email;
        cout << "Input nickName :";
        cin.ignore();
        cin >> nicktName;
        cout << "Input  password :";
        cin >> password;
        cout << "Input Phone number :";
        cin >> phoneNumber;
        cout << "+++++++++++++++++++++++++++++" << endl;
    }

    void getClassInfo()
    {
        cout << "Input id :" << id << endl;
        cout << "Input name :" << name << endl;
        cout << "Input nickName :" << nicktName << endl;
        cout << "Input email :" << email << endl;
        cout << "Input Password :" << password << endl;
        cout << "Input Phone Number :" << phoneNumber << endl;
        cout << "Input Profile :" << profile << endl;
        cout << "Input cover :" << cover << endl;
        cout << "++++++++++++++++++++++++++++++++" << endl;
    }
};
