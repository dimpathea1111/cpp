#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    set<string> name = {"kok", "uipo", "bis", "eticy"};
    // insert new element
    name.insert("lopo");
    name.insert("voro");
    // Update
    name.erase("bis"); // DELETE old element and insert new
    name.erase("voro");
    name.insert("yiti");
    for (const auto &i : name)
    {
        cout << i << endl;
    }

    set<int> number = {1, 3, 4, 5};

    return 0;
}