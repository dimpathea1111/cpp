#include <iostream>
#include <vector>

using namespace std;
// push_back(): update element
// eareae(): delete element

int main()
{
    system("cls");

    // vector<int> numbers;
    // // insert the element into vector
    // for (int i = 0; i < 5; i++)
    // {
    //     int num;
    //     cout << "Enter number " << i + 1 << ": ";
    //     cin >> num;
    //     numbers.push_back(num);
    // }
    // cout << "All numbers" << endl;
    // for (auto &i : numbers)
    // {
    //     cout << i << " | ";
    // }
    // cout << "\n[+] Insert element position to delete: ";
    // int pos;
    // cin >> pos;
    // // erase the element
    // numbers.erase(numbers.begin() + pos - 1);
    // cout << "Numbers after deleted: " << endl;
    // for (auto &i : numbers)
    // {
    //     cout << i << " | ";
    // }
    ///////////////////////////////////////////////////////////////////insert
    // vector<int> numbers;
    // numbers[0] = 1;

    // // Debug on 2023
    // numbers.insert(numbers.begin() + 1, 5);
    // numbers.push_back(2);
    // for (auto &i : numbers)
    // {
    //     cout << i << " ";
    // }
    /////////////////////////////////////////////////////////////////////UPDATE ELEMENT
    vector<int> numbers = {1, 2, 3, 4};
    for (auto &i : numbers)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "[+] Insert element positions to update: ";
    int pos;
    cin >> pos;
    for (auto &i : numbers)
    {
        if (numbers.at(pos - 1) == i)
        {
            numbers.erase(numbers.begin() + pos - 1);
            int n;
            cout << "[+] Insert new element to update: ";
            cin >> n;
            numbers.insert(numbers.begin() + pos - 1, n);
        }
    }
    for (auto &i : numbers)
    {
        cout << i << " ";
    }

    return 0;
}