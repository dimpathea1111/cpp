#include <iostream>
// #include "../service/user1.hpp"
#include <user1.hpp>
using namespace std;

// class User
// {
// private:
//     int id;
//     string name;

// public:
//     // constructor with no parameter
//     User() {}
//     // constructor with parameters

//     void user(int id, string name)
//     {
//         this->id = id;
//         this->name = name;
//     }
//     void getUserInfo()
//     {
//         cout << "ID: " << id << endl;
//         cout << "Name: " << name << endl;
//     }
// };

int main()
{
    User user(1, "we");
    user.getUserInfo();
    return 0;
}