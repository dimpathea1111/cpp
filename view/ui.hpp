// #include <iostream>
// // #include "../service/iphone_service.hpp"
// #include "service/iphone_sever.hpp"
// using namespace std;
// // #define iphone;
// class UI
// {
// private:
//     static int insertOption()
//     {
//         int choice;
//         cout << "[+] Enter your choice: ";
//         cin >> choice;
//         return choice;
//     }
//     static void option()
//     {
//         cout << "-------------------------------------------\n";
//         cout << "   Welcome to IPhone Management System     \n";
//         cout << "-------------------------------------------\n";
//         cout << "1. Add a new iPhone\n";
//         cout << "2. Delete an iPhone\n";
//         cout << "3. View all iPhones\n";
//         cout << "4. Exit\n";
//         cout << "-------------------------------------------\n";
//     }

// public:
//     static void home()
//     {
//         while (true)
//         {
//             option();
//             // UI iphone;
//             switch (insertOption())
//             {
//             case 1:
//                 cout << "[+] Add a new iPhone\n";
//                 // iphoneRepositories.push_back(iphone);

//                 // iphoneRepositories.push_back(iphone);
//                 // cout << "Iphone " << iphone.iphoneName << "has been add successfully." << endl;

//                 //**your code here */
//                 addIPhone({});
//                 break;
//             case 2:
//                 cout << "[+] Delete an iPhone\n";
//                 int id;
//                 int i;
//                 for (i = 0; i < iphoneRepositories.size(); i++)
//                 {
//                     if (iphoneRepositories[i].id == id)
//                     {
//                         iphoneRepositories.erase(iphoneRepositories.begin() + i);
//                         cout << "\n[-] Iphone with ID :" << id << "Delete successfully." << endl;
//                         return ;
//                     }
//                     return ;
//                 }
//                 //**your code here */
//                 deleteIPhoneById(id);
//                 break;
//             case 3:
//                 cout << "[+] View all iPhones\n";
//                 /** your code here.. */
//                 if (iphone.empty())
//                 {
//                     cout << "No iphone available." << endl;
//                     return ;
//                 }
//                 cout << "List of Iphone ." << endl;
//                 for (const auto &iphone : iphone)
//                 {
//                     iphone.getIpnoneInfo();
//                 }
//                 getAllIPhones();
//                 break;
//             case 4:
//                 cout << "[+] Exiting...\n";
//                 exit(0);
//             default:
//                 cout << "[-] Invalid choice. Please try again.\n";
//             }
//         }
//     }
// };

//////////////////////////////////

#include <iostream>
#include "../service/iphone_sever.hpp"
#include "table.hpp"

using namespace std;

class UI
{
private:
    static int insertOption()
    {
        int choice;
        cout << "[+] Enter your choice: ";
        cin >> choice;
        return choice;
    }
    static void welcome()
    {
        cout << "-------------------------------------------\n";
        cout << "   Welcome to IPhone Management System     \n";
        cout << "-------------------------------------------\n";
    }
    static void option()
    {
        cout << "1. Add a new iPhone\n";
        cout << "2. Delete an iPhone\n";
        cout << "3. View all iPhones\n";
        cout << "4. Exit\n";
        cout << "-------------------------------------------\n";
    }

public:
    static void home()
    {
        welcome();
        while (true)
        {
            option();
            switch (insertOption())
            {
            case 1:
            {
                IPhone iphone;
                cout << "[+] Add a new iPhone\n";
                int id;
                string model;
                double price;
                cout << "Insert ID :";
                cin >> id;
                cout << "Insert Model :";
                cin >> model;
                cout << "Insert Price :";
                cin >> price;

                IPhone iphone(id, model, price);
                iphoneRepositories.push_back(iphone);
                cout << "+ Iphone added successful" << endl;
                //**your code here */
                addIPhone({});
                break;
            }
            case 2:
            {
                cout << "[+] Delete an iPhone\n";
                int id;
                cout << "Enter ID to delete :";

                // **your code here */
                for (int i = 0; i < iphoneRepositories.size(); i++)
                {
                    if (iphoneRepositories[i].getid() == id)
                    {
                        iphoneRepositories.erase(iphoneRepositories.begin() + i);
                        cout << "\n[-] Iphone with ID :" << id << "Delete successfully." << endl;
                        return;
                    }
                    return;
                }
                ////
                // cout<<"Enter ID to delete :";
                // cin>>id;
                // auto it=find_if(iphoneRepositories.begin(),iphoneRepositories.end(),[id](const IPhone &iphone){return iphone.getId()==id;});
                // if(it!=iphoneRepositories.end()){
                //     iphoneRepositories.erase(it);
                //     cout<<"+ Iphone with id "<<id<<"delete successfully."<<endl;
                // }
                // else{
                //     cout<<"- Iphone with id "<<id<<"not found."<<endl;
                // }
                deleteIPhoneById(id);
                break;
            }

            case 3:
            {
                cout << "[+] View all iPhones\n";
                vector<vector<string>> iphones;
                // columns
                vector<string> columns = {"ID", "Model", "Price"};
                for (IPhone p : getAllIPhones())
                {
                    vector<string> data = {to_string(p.getId()), p.getModel(), to_string(p.getPrice())};
                    iphones.push_back(data);
                }
                printTable(iphones, columns);
                break;
            }
            case 4:
            {
                cout << "[+] Exiting...\n";
                exit(0);
            }
            default:
            {
                cout << "[-] Invalid choice. Please try again.\n";
            }
            }
        }
    }
};
