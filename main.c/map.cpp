#include <iostream>
#include <map>
using namespace std;
int main()
{
    system("cls");
    /////////////////////////Insert map ///////////////////
    map<int, string> info;
    // varaibleName.emplace(): insert element
    //  info.emplace(1, "bobmo");
    //  info.emplace(2, "Femmo");
    //  for (auto i : info)
    //  {
    //      cout << "keys :" << i.first << ", Value :" << i.second << endl;
    //  }
    /////////////////////////////////////////////////////////////////
    info.insert({3, "gojo"});
    info.insert(pair<int, string>{3, "gigkan"});
    info.insert(make_pair(3, "kendle"));
    // insert muliple value of map
    info.insert({{4, "boye"}, {5, "gyre"}});
    // for (auto i : info)
    // {
    //     cout << "keys :" << i.first << ", Value :" << i.second << endl;
    // }

    //
    info[6] = "bama";
    cout << "Vlue after inserted " << endl;
    // Search for any by specifying key
    cout << "\nThis is value of key 6 using function at :" << info.at(6);
    cout << "\nThis is value of key 6 using square braker :" << info[6];

    /////////////////////// delete map ///////////////////////////
    // int key;
    //  cout<<"Insert key to delete :";
    //  cin>>key;
    // info.erase(key);// using key to delete
    // cout<<"Value after deleted: \n";
    // for(auto i: info){
    //     cout<<"Key: "<<i.first<<"-> Value: "<<i.second<<endl;
    // }
    /////////////////////////update //////////////////////////////
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