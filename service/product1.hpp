#include <iostream>

using namespace std;
class Product
{
private:
    int id;
    string name;
    double price;

public:
    Product() {}
    void product(int id, string name, double price)
    {
        this->id = id;
        this->name = name;
        this->price = price;
    }
    void getProduct()
    {
        cout << "-++++++++++++++++++++++-" << endl;
        cout << "Id :" << id << endl;
        cout << "Name :" << name << endl;
        cout << "Price :" << price << endl;
        // cout << "-++++++++++++++++++++++-" << endl;
    }
};