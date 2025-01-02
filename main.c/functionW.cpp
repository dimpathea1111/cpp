
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
}

void insertUserById(int id, string name, string email)
{
    for (User u : users)
    {
        if (u.id == id)
        {
            cout << "Insert user by id :" << id << "successfully ." << endl;
        }
    }
    users.pop_back();
    cout << "insert user id successful" << endl;
}

void updateUserById(int id, string name, string email)
{
    for (User u : users)
    {
        if (u.id == id)
        {
            u.name = name;
            u.email = email;
            cout << "User by id " << id << "Successful." << endl;
            return;
        }
    }
    cout << "Inset with id <<" << id << " >>: Not found" << endl;
}

int main()
{
    // search
    cout << "[+] Insert User ID to search: ";
    int id;
    cin >> id;
    User user = findUserById(id);
    user.getUserInfo();
    cout << "[+] Insert User ID to delete: ";
    cin >> id;

    // delete
    deleteUserById(id);
    cout << "[+] Insert User ID to search: ";
    cin >> id;
    User user1 = findUserById(id);
    user1.getUserInfo();

    // insert
    cout << "[+] Insert new user by (id name email). " << endl;
    // int newId;
    // string newName, newEmail;
    // cout << "Insert id :";
    // cin >> newId;
    // cout << "Insert newName :";
    // cin >> newName;
    // cout << "Insert newEmail :";
    // cin >> newEmail;
    // insertUserById(newId, newName, newEmail);
    // insertUserById(id);
    int newId;
    string newName, newEmail;
    cin >> newId >> newName >> newEmail;
    insertUserById(newId, newName, newEmail);

    //  Update
    cout << "Update user by (id name email)." << endl;
    // int updateID;
    // string updateName;
    // string UpdateEmail;
    // cout << " update id :";
    // cin >> updateID;
    // cout << "update name :";
    // cin >> updateName;
    // cout << "update email :";
    // cin >> UpdateEmail;
    int updateId;
    string updateName, updateEmail;
    cin >> updateId >> updateName >> updateEmail;
    updateUserById(updateId, updateName, updateEmail);
    // updateUserById(updateID, updateName, UpdateEmail);

    cout << "\n[+] Current Users: " << endl;
    for (User u : users)
    {
        u.getUserInfo();
    }
    return 0;
}