#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    system("cls");
    set<string> name;
    name.insert("palo");
    name.insert("vivy");
    name.insert("baby");
    // name[4]="hary";
    cout << "Value after update " << endl;
    for (auto i : name)
    {
        cout << i << endl;
    }
    // update
    // int up;
    // cout << "Enter update name :";
    // cin >> up;
    // auto re = name.find("nona");
    // if (re != name.find("nona"))
    // {
    //     cout << "[+] Insert new name: ";
    //     string newName;
    //     cin.ignore();
    //     getline(cin, newName);
    //     // name[up] = newName;
    // }
    // cout << "valeu after update : " << endl;
    // for (auto i : name)
    // {
    //     cout << "Value :" << i << endl;
    // }
    name.insert("Nang");
    //
    for (const auto &i : name)
    {
        cout << i << " ..///////";
    }
    return 0;
}