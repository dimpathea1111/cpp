#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> info;
    //
    info.emplace(5, "Rotha");
    //
    info.insert({1, "KoKo"});
    info.insert(pair<int, string>{3, "Somnang"});
    info.insert(make_pair(2, "Socheat"));
    // insert multiple values of map
    info.insert({{7, "Sokpheng"}, {8, "SoPi"}});
    //
    info[6] = "Chorynai";
    cout << "Values after inserted\n";
    // search for any value by specifying key
    for (auto i : info)
    {
        cout << "Key: " << i.first << "-> Value: " << i.second << endl;
    }
    // Updated
    int key;
    cout << "[+] Insert key to update: ";
    cin >> key;
    auto re = info.find(key);
    if (re != info.end())
    {
        cout << "[+] Insert new name: ";
        string newName;
        cin.ignore();
        getline(cin, newName);
        info[key] = newName;
    }
    cout << "Value after updated: \n";
    for (auto i : info)
    {
        cout << "Key: " << i.first << "-> Value: " << i.second << endl;
    }

    return 0;
}