#include <iostream>
#include <../model/product.hpp>
#include <vector>
#include "../model/product.hpp"

using namespace std;

vector<Product> productRepository;

int main()
{
    Product p;
    // cout<<"\nId :";
    // cin>>p.id;
    // cout<<"\nName :";
    // cin>>p.name;
    // cout<<"\nPrice :";
    // cin>>p.price;
    p.setID(1);
    p.setProductName("apple");
    p.setProductPrice(20000);
}
