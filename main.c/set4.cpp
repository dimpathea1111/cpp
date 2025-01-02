#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    system("cls");
    set<string> name = {"kojo", "kora", "lopo", "nupai"};
    name.insert("voyi");
    name.insert("zare");
    name.insert("haiyi");
    cout << "Read name in set " << endl;
    for (const auto &i : name)
    {
        cout << "Name Create :" << i << endl;
    }
    cout << "delete name in set " << endl;
    name.erase("kora");
    name.erase("nupai");
    for (auto i : name)
    {
        cout << "Name delet :" << i << endl;
    }
    cout << "Update name in set " << endl;
    for (auto i : name)
    {
        string pos;
        cout << "update name :";
        cin >> pos;
        name.begin();
        cout << " name update :" << pos << endl;
    }

    return 0;
}