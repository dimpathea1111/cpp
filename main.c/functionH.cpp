// #include <iostream>
// #include <vector>

// using namespace std;

// struct User
// {
//     int id;
//     string name;
//     string email;
//     //
//     void getUserInfo()
//     {
//         cout << "ID: " << id << endl;
//         cout << "Name: " << name << endl;
//         cout << "Email: " << email << endl;
//         cout << "--------------------" << endl;
//     }
// };
// vector<User> users =
//     {
//         {1, "KoKo", "koko123@gmail.com"},
//         {2, "KaKa", "kaka123@gmail.com"}};

// User findUserById(int id)
// {
//     for (User u : users)
//     {
//         if (u.id == id)
//         {
//             return u;
//         }
//     }
//     return {};
// }

// void deleteUserById(int id)
// {
//     for (int i = 0; i < users.size(); i++)
//     {
//         if (users[i].id == id)
//         {
//             users.erase(users.begin() + i);
//             cout << "\n[+] User with ID " << id << " deleted successfully." << endl;
//             return;
//         }
//     }
// }
// void insertUser(int id, string name, string email)
// {
//     for (User u : users)
//     {
//         if (u.id == id)
//         {
//             cout << "Insert user with id  :" << id << endl;
//         }
//     }
//     users.push_back({id, name, email});
// }

// // update

// void updateUser(int id, string name, string email)
// {
//     for (User &u : users)
//     {
//         if (u.id == id)
//         {
//             cout << "Update user with id :" << id << endl;
//         }
//     }
//     // users.pop_back({id, name, email});
//     cout << "\nUser with id :" << id << "not found" << endl;
// }
// int main()
// {
//     system("cls");
//     cout << "[+] Insert User ID to search: ";
//     int id;
//     cin >> id;
//     User user = findUserById(id);
//     user.getUserInfo();
//     cout << "[+] Insert User ID to delete: ";
//     cin >> id;
//     deleteUserById(id);
//     cout << "[+] Insert User ID to search: ";
//     cin >> id;
//     User user1 = findUserById(id);
//     user1.getUserInfo();

//     // insert
//     insertUser(3, "rora", "rora@gmail.com");
//     cout << "\n[+] Insert new user details (ID, Name, Email): ";
//     int newId;
//     string newName, newEmail;
//     cin >> newId >> newName >> newEmail;
//     insertUser(newId, newName, newEmail);

//     // update
//     updateUser(4, "haju", "haju@gmailo.com");
//     cout << "\n[+] update new user details (ID, Name, Email): ";
//     int updateId;
//     string updateName, updateEmail;
//     cin >> updateId >> updateName >> updateEmail;
//     updateUser(updateId, updateName, updateEmail);

//     cout << "\n[+] Current Users: " << endl;
//     for (User u : users)
//     {
//         u.getUserInfo();
//     }

//     return 0;
// }

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
    cout << "\n[-] User with ID " << id << " not found." << endl;
}

void insertUser(int id, string name, string email)
{
    for (User u : users)
    {
        if (u.id == id)
        {
            cout << "\n[-] User with ID " << id << " already exists." << endl;
            return;
        }
    }
    users.push_back({id, name, email});
    cout << "\n[+] User with ID " << id << " added successfully." << endl;
}

void updateUserById(int id, string newName, string newEmail)
{
    for (User &u : users)
    {
        if (u.id == id)
        {
            u.name = newName;
            u.email = newEmail;
            cout << "\n[+] User with ID " << id << " updated successfully." << endl;
            return;
        }
    }
    cout << "\n[-] User with ID " << id << " not found." << endl;
}

int main()
{
    int id;
    string name, email;

    // Search user
    cout << "[+] Insert User ID to search: ";
    cin >> id;
    User user = findUserById(id);
    if (user.id != 0)
    {
        user.getUserInfo();
    }
    else
    {
        cout << "[-] User not found." << endl;
    }

    // Delete user
    cout << "[+] Insert User ID to delete: ";
    cin >> id;
    deleteUserById(id);

    // Insert user
    cout << "[+] Insert User ID, Name, and Email to add: ";
    cin >> id >> name >> email;
    insertUser(id, name, email);

    // Update user
    cout << "[+] Insert User ID to update: ";
    cin >> id;
    cout << "Enter new Name and Email: ";
    cin >> name >> email;
    updateUserById(id, name, email);

    // Display all users
    cout << "\n[+] Current Users:\n";
    for (User u : users)
    {
        u.getUserInfo();
    }

    return 0;
}
