#include <iostream>

using namespace std;
class Product
{
private:
    int id;
    string pName;
    float pPrice;
    float pQty;

public:
    void setId(int id)
    {
        this->id = id;
    }
    int getId()
    {
        return this->id;
    }
    void setPName(string pName)
    {
        this->pName = pName;
    }
    string getPName()
    {
        return this->pName;
    }
    void setPPrice(float pPrice)
    {
        this->pPrice = pPrice;
    }
    float getPPrice()
    {
        return pPrice = pPrice;
    }
    void setPQty(float pQty)
    {
        this->pQty = pQty;
    }
    float getPQty()
    {
        return pQty;
    }

    // constructor
    // Product(int id, string pName, float pPrice, float pQty)
    // {
    //     this->id = id;
    //     this->pName = pName;
    //     this->pPrice = pPrice;
    //     this->pQty = pQty;
    // }
};

int main()
{
    Product product1;
    Product product2;
    product1.setId(1);
    product1.setPName("coca");
    product1.setPPrice(3.1);
    product1.setPQty(9.1);
    cout << "Product ID :" << product1.getId() << endl;
    cout << "Product Name :" << product1.getPName() << endl;
    cout << "Product Price $:" << product1.getPPrice() << endl;
    cout << "Product Qty :" << product1.getPQty() << endl;
    cout << "--------------------------------" << endl;
    product2.setId(2);
    product2.setPName("fanta");
    product2.setPPrice(2.1);
    product2.setPQty(8.9);
    cout << "Product ID :" << product2.getId() << endl;
    cout << "Product Name :" << product2.getPName() << endl;
    cout << "Product Price $:" << product2.getPPrice() << endl;
    cout << "Product Qty :" << product2.getPQty() << endl;
    cout << "--------------------------------" << endl;
    return 0;
}