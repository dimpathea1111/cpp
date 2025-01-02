#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> n = {10, 22, 33, 44, 5, 55, 22};
    n.insert(11);
    n.insert(54);
    cout << "Set element :";
    for (int val : n)
    {
        cout << val << " ";
        ;
    }
    n.erase(22);
    cout << "\nSize after remove 22 :" << n.size() << endl;
    n.clear();
    cout << "Size after clearing :" << n.size() << endl;
    return 0;
}
