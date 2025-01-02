#include <iostream>

using namespace std;

int main()
{
    system("clear");
    // int a = 2;

    // // int a;
    // switch (a)
    // {
    // case 1:
    //     cout << "Number one " << endl;
    //     break;
    // case 2:
    //     cout << "Number two" << endl;
    //     break;
    // default:
    //     cout << "Default" << endl;
    // }
    cout << "+++++++++++++ Product stock +++++++++++++++++++++" << endl;
    int opt;
    cout << "Insert new option :";
    cin >> opt;
    switch (opt)
    {
    case 1:
        cout << "1. list all products" << endl;
        break;
    case 2:
        cout << "2. Search product by ID" << endl;
    case 3:
        cout << "3. Add new product" << endl;
        break;
    case 4:
        cout << "4. Delete product by";
        break;
    case 5:
        cout << "Exit" << endl;
        break;
    default:
        cout << "=================================" << endl;
    }
    return 0;
}