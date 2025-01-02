#include <iostream>
using namespace std;
int main()
{
    system("cls");
    string names[] = {"sok", "somnang", "koko"};
    cout << "All names: \n";
    for (string i : names)
    {
        cout << i << " ";
    }
    cout << "\n[+] Insert name to delete: ";
    string name;
    getline(cin, name);
    int size = sizeof(name) / sizeof(name[0]);
    for (int i = 0; i < size; i++)
    {
        if (names[i] == name)
        {
            names[i] = "";
            break;
        }
    }
    cout << "All names after deleted: \n";
    for (string i : names)
    {
        if (i != "")
        {
            cout << i << " ";
        }
    }
    return 0;
}