#include <iostream>
#include <vector>

using namespace std;

struct User
{
    int id;
    string name;
    string email;

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
    // cout << " User with ID " << id << " not found." << endl;
}

void insertUser(int id, string name, string email)
{
    for (User u : users)
    {
        if (u.id == id)
        {
            cout << "A user with ID " << id << " already exists." << endl;
            return;
        }
    }
    users.push_back({id, name, email});
    cout << "\nUser added successfully." << endl;
}

void updateUser(int id, string name, string email)
{
    for (User &u : users)
    {
        if (u.id == id)
        {
            u.name = name;
            u.email = email;
            cout << "\n[+] User with ID " << id << " updated successfully." << endl;
            return;
        }
    }
    cout << "User with ID " << id << " not found." << endl;
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

    cout << "\n[+] Insert new user (ID, Name, Email): ";
    // int newId;
    // string newName, newEmail;
    // cin >> newId >> newName >> newEmail;
    // insertUser(newId, newName, newEmail);
    int newId;
    string newName, newEmail;
    cout << "Insert id :";
    cin >> newId;
    cout << "Insert newName :";
    cin >> newName;
    cout << "Insert newEmail :";
    cin >> newEmail;
    insertUser(newId, newName, newEmail);

    cout << "\n[+] Update user  (ID, Name, Email): ";
    int updateId;
    string updateName, updateEmail;
    cin >> updateId >> updateName >> updateEmail;
    updateUser(updateId, updateName, updateEmail);

    cout << "\n[+] Current Users: " << endl;
    for (User u : users)
    {
        u.getUserInfo();
    }

    return 0;
}
