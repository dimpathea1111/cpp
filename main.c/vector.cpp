#include <iostream>
#include <vector>

using namespace std;

struct User
{
    int id;
    string name;
    string email;
    //
    void getUserInfo()
    {
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Email: " << email << endl;
        cout << "--------------------" << endl;
    }
};
vector<User> users =
    {
        {1, "KoKo", "koko123@gmail.com"},
        {2, "KaKa", "kaka123@gmail.com"}};

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
    for (int i = 0; i < users.size(); i++)
    {
        if (users[i].id == id)
        {
            users.erase(users.begin() + i);
            cout << "\n[+] User with ID " << id << " deleted successfully." << endl;
            return;
        }
    }
}

int main()
{
    cout << "[+] Insert User ID to search: ";
    int id;
    cin >> id;
    User user = findUserById(id);
    user.getUserInfo();
    cout << "[+] Insert User ID to delete: ";
    cin >> id;
    deleteUserById(id);
    cout << "[+] Insert User ID to search: ";
    cin >> id;
    User user1 = findUserById(id);
    user1.getUserInfo();
    return 0;
}