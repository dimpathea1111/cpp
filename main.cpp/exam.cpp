#include <iostream>
#include <string>
#include <vector>

using namespace std;

// double convertToDollar(double khCurrency)
// {
//     return khCurrency / 4000;
// }
// double convertToKH(double dollar)
// {
//     return dollar * 4000;
// }

// int main()
// {
//     double myCash = convertToDollar(50000);
//     cout << "My cash in dollar: " << myCash;
//     double myMoney = convertToDollar(50000);
//     cout << "\nMy money in kh :" << myMoney;

//     return 0;
// }

///////////////////////////////

// int sum(vector<int> &numbers)
// {
//     int sum = 0;
//     for (int i : numbers)
//     {
//         sum += i; // sum = sum + i
//     }
//     return sum;
// }

//////////////////

using namespace std;

class Product
{
private:
    int id;
    string pName;

public:
    Product(int id, string pName)
    {
        this->id = id;
        this->pName = pName;
    }
    Product() {}
    //
    void getProductInfo()
    {
        cout << "ID: " << this->id << " Name: " << this->pName << endl;
    }
};

int main()
{
    Product p(1, "Coca");
    p.getProductInfo();
    return 0;
}