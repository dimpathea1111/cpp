// #include <iostream>
// #include "service/product_service.hpp"
// // #include<model/product.hpp>
// using namespace std;

// int main()
// {
//   // call all functions in product service
//   Product p1={1, "coca", 20.00};
//   Product p2={2, "coffe", 20.00};
//   addProduct(p1);
//   addProduct(p2);
//   for (Product p : getAllProducts())
//   {
//   }
//   return 0;
// }

#include <iostream>
#include "service/product_service.hpp"
using namespace std;

int main()
{
  // call all functions in product service
  Product p1 = {1, "Coca", 12.3};
  Product p2 = {2, "Pepsi", 5.5};
  addProduct(p1);
  addProduct(p2);
  vector<Product> products = getAllProducts();
  cout << "All Product: \n";
  for (Product p : products)
  {
    p.getProductInfo();
    cout << "=========================\n";
  }
  cout << "[+] Insert Product id to delete: ";
  int id;
  cin >> id;
  deleteProductById(id);
  cout << "All Product after deleted: \n";
  for (Product p : productRepository)
  {
    p.getProductInfo();
    cout << "=========================\n";
  }

  return 0;
}