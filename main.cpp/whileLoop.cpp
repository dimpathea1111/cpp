#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    int i;
    // while(i=0)
    // {
    //     this_thread::sleep_for(chrono::seconds(2));
    //     cout<<"hello world"<<endl;
    // }
    // while (true)
    // {
    //     // system("clear");
    //     system("cls"); // windows OS
    //     cout << "============== Product Stock =================" << endl;
    //     cout << "1. List all products\n";
    //     cout << "2. Search Product by ID\n";
    //     cout << "3. Add new Product\n";
    //     cout << "4. Delete Product by\n";
    //     cout << "5. Exit" << endl;
    //     cout << "==============================================\n";
    //     int opt;
    //     cout << "[+] Insert new Option: ";
    //     cin >> opt;
    //     switch (opt)
    //     {
    //     case 1:
    //         cout << "List all products";
    //         break;
    //     case 2:
    //         cout << "Search product by ID";
    //         break;
    //     case 3:
    //         cout << "Add new Product" << endl;
    //         break;
    //     case 4:
    //         cout << "Delete product by ID" << endl;
    //         break;
    //     case 5:
    //         exit(0);
    //     default:
    //         cout << "Default";
    //     };
    // }
    char ch = 'A';
    while (ch = 'z')
    {
        this_thread::sleep_for(chrono::seconds(1));
        cout << ch << "|";
        // ch++;
    }
    return 0;
}
