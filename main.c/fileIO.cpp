// #include <iostream>
// #include <fstream>

// using namespace std;

// class User
// {
// private:
//     int id;
//     string name;

// public:
//     // void getId(int id){
//     //     this->id =id;
//     // }
//     // int setID(int id){
//     //     return id;
//     // }

//     //  void getName(string name){
//     //     this->name =name;
//     // }
//     // int setName(string name){
//     //     return name;
//     // }

//     User(int id, string name)
//     {
//         this->id = id;
//         this->name = name;
//     }
// };

// int main()
// {
//     // write
//     // ofstream oft("map.cpp", ios::app);
//     // User user(2, "lolo");
//     // oft << "\n"<< user.id << "," << user.name;
//     // cout << "User has been created successfully." << endl;
//     // oft.close();
//     // read
//     ifstream ift("map.cpp");
//     string line;
//     while(gitline)
//     return 0;
// }

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

using namespace std;

class User
{
public:
    int id;
    string name;
    User(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
};
std::vector<std::string> splitString(const std::string &str, char delimiter)
{
    std::vector<std::string> result;
    stringstream ss(str);
    std::string token;

    while (getline(ss, token, delimiter))
    {
        result.push_back(token);
    }

    return result;
}
int main()
{
    ifstream ift("map.cpp");
    string line;

    while (getline(ift, line))
    {
        vector<string> data = splitString(line, ',');
        User user(stoi(data[0]), data[1]);
        cout << "ID: " << user.id << ", Name: " << user.name << endl;
    }
    ift.close();
    return 0;
}