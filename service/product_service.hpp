// #include "../repository/product_repo.hpp"
// #include <vector>

// vector<Product> getAllProducts()
// {
//     return productRepository;
// }

// Product addProduct(Product p)
// {
//     /** your code here*/
//     productRepository.push_back(p);
//     return p;
// }

// Product getProductById(int id)
// {
//     for(Product p: productRepository){
//         if(p.id=id){
//             return p;
//         }
//         return;
//     }
//     // productRepository.pop_back();
//     /** your code here */
// }

// bool deleteProductById(int id)
// {
//        for(int i=0; i<Product.size(); i++){
//         if(users[i].id==id){
//             users.erase(users.begin()+i);
//             cout<<"\n[+] User with ID "<<id<<" deleted successfully."<<endl;
//             return;
//         }
//     }

//     // productRepository.clear(id);
//     // productRepository.clear();
// }

#include "../repository/product_repo.hpp"

vector<Product> getAllProducts()
{
    return productRepository;
}

Product addProduct(Product p)
{
    productRepository.push_back(p);
    cout << "Product " << p.pName << " has been added successfully\n";
    return p;
    /** your code here */
}

Product getProductById(int id)
{
    for (Product p : productRepository)
    {
        if (p.id == id)
        {
            return p;
        }
    }
    return {};
}

bool deleteProductById(int id)
{
    for (int i = 0; i < productRepository.size(); i++)
    {
        if (productRepository[i].id == id)
        {
            productRepository.erase(productRepository.begin() + i);
            cout << "\n[+] Product with ID " << id << " deleted successfully." << endl;
            return true;
        }
    }
    return false;
    /** your code here */
}