#include <iostream>
#include <set>

using namespace std;

int main()
{
    // set<int> n = {1, 3, 2, 4, 5};
    // n.insert(12);
    // n.insert(44);

    // for (auto i : n)
    // {
    //     cout << "Resoult :" << i << endl;
    // }

    set<string, int> str = {{"nama", 1}, {"bana", 2}, {"mame", 3}};
    // str.begin(2);
    for (auto i : str)
    {
        cout << "output value :" << i << " ,";
    }

    return 0;
}