
// #include<iostream>
// #include<cctype>
// using namespace std;
// struct Product{
//     int id;
//     string name;
//     float price;

//     void setID(int id){
//         this->id=id;
//     }
//     int getID(int id){
//         return this->id;
//     }
//     void setProductName(string name){
//         this->name=name;
//     }

//     string getProductName(string name){
//         return  this->name;
//     }
//     void setProductPrice(float price){
//         this->price=price;
//     }
//     float getProductPrice(float price){
//         return this->price;
//     }

//     void getProductInfo(){
//         cout << "ID: " << id << endl;
//         cout<<"Name :"<<name<<endl;
//         cout<<"Price :"<<price<<endl;
//     }
// };

// /**
//  * Try to analyze what the field in Product struct & functions by yourselt
//  */

#include <string>
using namespace std;
struct Product
{
    int id;
    string pName;
    double price;
    //* your code
    void getProductInfo()
    {
        cout << "Product ID: " << id << endl;
        cout << "Product Name: " << pName << endl;
        cout << "Product Price: $" << price << endl;
    }
};

/**
 * Try to analyze what the field in Product struct & functions by yourselt
 */