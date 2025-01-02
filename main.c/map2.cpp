#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> name;
    name.insert({1, "KoKo"});
    name.insert({2, "roro"});
    name[3] = "bobo";
    name[4] = "bobo";
    name.insert({5, "nno"});
    cout << "value after insert" << endl;
    for (auto i : name)
    {
        cout << "key :" << i.first << ",valuev :" << i.second << endl;
    }
    int key;
    cout << "Enter key :";
    cin >> key;
    auto re = name.find(key);
    if (re != name.end())
    {
        string newName;
        cout << "insert new name" << endl;
        cout << "newName :";
        cin.ignore();
        getline(cin, newName);
        name[key] = newName;
    }
    cout << "Value after update :" << endl;
    for (auto i : name)
    {
        cout << "Key :" << i.first << ",Value :" << i.second << endl;
    }

    return 0;
}