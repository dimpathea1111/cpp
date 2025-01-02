#include <iostream>
#include "../service/product1.hpp"

using namespace std;
// class Product
// {
// private:
//     int id;
//     string name;
//     double price;

// public:
//     Product() {}
//     void product(int id, string name, double price)
//     {
//         this->id = id;
//         this->name = name;
//         this->price = price;
//     }
//     void getProduct()
//     {
//         cout << "Id :" << id << endl;
//         cout << "Name :" << name << endl;
//         cout << "Price :" << price << endl;
//     }
// };

int main()
{
    system("cls");
    Product pro1;
    Product pro2;

    pro1.product(1, "tomato", 30.00);
    pro2.product(2, "papaya", 50.00);
    pro1.getProduct();
    pro2.getProduct();
    return 0;
}