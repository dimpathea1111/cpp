// #include <string>
// #include <iostream>
// #include <vector>
// #include "../model/iphone.hpp"
// #include "../repository/iphone_repo.hpp"

// using namespace std;

// vector<IPhone> getAllIPhones()
// {
//     return iphoneRepositories;
// }

// IPhone getIPhoneById(int id)
// {
//     // your code here...
//     // iphoneRepositories.push_back();
//     for (IPhone iphone : iphoneRepositories)
//     {
//         if (iphone.getid() == id)
//         {
//             return iphone;
//         }
//     }
//     return {};
// }

// void addIPhone(IPhone iphone)
// {
//     iphoneRepositories.push_back(iphone);
//     cout << "Iphone " << iphone.getName() << "has been added successfully" << endl;
//     return;

//     // your code here...
// }

// bool deleteIPhoneById(int id)
// {
//     for (int i = 0; i < iphoneRepositories.size(); i++)
//     {
//         if (iphoneRepositories[i].getid() == id)
//         {
//             iphoneRepositories.erase(iphoneRepositories.begin() + i);
//             cout << "\n[-] Iphone with ID :" << id << "Delete successfully." << endl;
//             return 1;
//         }
//         return 0;
//     }
// }
//     // your code here...
// //     return 0;
// // }

#include <string>
#include <vector>
#include "../model/iphone.hpp"
#include "../repository/iphone_repo.hpp"

using namespace std;

vector<IPhone> getAllIPhones()
{
    return iphoneRepositories;
}

IPhone getIPhoneById(int id)
{
    // your code here...
    IPhone iphone;
    iphoneRepositories.push_back(iphone);
    for (IPhone iphone : iphoneRepositories)
    {
        if (iphone.getid() == id)
        {
            return iphone;
        }
    }
    return {};
}

void addIPhone(IPhone iphone)
{
    // your code here...
    iphoneRepositories.push_back(iphone);
    cout << "[+] New iPhone added successfully\n";
}

bool deleteIPhoneById(int id)
{
    for (int i = 0; i < iphoneRepositories.size(); i++)
    {
        if (iphoneRepositories[i].getid() == id)
        {
            iphoneRepositories.erase(iphoneRepositories.begin() + i);
            cout << "\n[-] Iphone with ID :" << id << "Delete successfully." << endl;
            return 1;
        }
        return 0;
    }
    // your code here...
};
