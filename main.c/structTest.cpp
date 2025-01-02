#include <iostream>
#include <vector>

using namespace std;
struct User
{
    int id;
    string name;
    string email;
};

vector<User> users = {
    {1, "noly", "noly@gmail.com"},
    {2, "lohy", "lohy@gmail.com"}, // store data in vector and declare data
    {3, "huyi", "huyi@gmail.com"}};

User findUserById(int id)
{
    for (User u : users)
    {
        if (u.id == id)
        {
            return u;
        }
    }
    return {};
}
void deleteUserById(int id)
{
    for ()
}

int main()
{
    cout << "Insert user ID to search :";
    int id;
    cin >> id;
    User user = findUserById(id);
    // user.getUserInfo();
    return 0;
}