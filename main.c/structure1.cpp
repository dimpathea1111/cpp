#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    set<string> names = {"aonga", "suiso", "pops"};
    names.insert("jakaa");
    names.insert("Zkaa");

    for (auto i : names)
    {
        cout << i << endl;
    }
    // for(auto & i= names.begin(); i!=names.end();){
    //     cout<<&i<<endl;
    //     break;//address memorey
    // }
    // names.begin();
    // names.end();
    // consr :te
    // for (const auto i : names)
    // {
    //     cout << i << endl;
    // }
    //   for (auto i : names)
    // {
    //     cout << i << endl;
    // }
    return 0;
}