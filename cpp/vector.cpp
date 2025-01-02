#include <iostream>
#include <vector>

using namespace std;

int main()
{
    system("cls");
    vector<int> number = {1, 2, 3, 4, 5, 6, 7};
    // for(auto & n: number){
    //     cout<<n<<endl;   //OUTPUT
    // }

    for (int i = 0; i < 5; i++)
    {
        int num;
        cout << "Insert num :";
        cin >> num;
        number.push_back(num);
    }
    cout << "all number" << endl;
    for (auto &i : number)
    {
        cout << i << "| ";
    }
    cout << "insert " << endl;
    int pos;
    cin >> pos;
    number.erase(number.begin() + pos - 1);
    cout << "number after delete " << endl;
    for (auto &i : number)
    {
        cout << i << "| ";
    }
    return 0;
}