

// #include <iostream>
// #pragma once

// using namespace std;

// class IPhone
// {
// private:
//     int id;
//     string name;
//     double price;
//     string model;
//     string color;
//     string storage;
//     // fields

// public:
//     //
//         IPhone(int id, string name, double price, string model, string color, string storage)
//         : id(id), name(name), price(price), model(model), color(color), storage(storage) {}

//     // Default Constructor
//     IPhone() : id(0), name(""), price(0.0), model(""), color(""), storage("") {}

//     //
//     int getid() const
//     {
//         return id;
//     }

//     string getName()
//     {
//         return name;
//     }
//     void inputIphoneValue()
//     {
//         cout << "Input ID :";
//         cin >> id;
//         cout << "Input Name :";
//         cin >> name;
//         cout << "Input Model :";
//         cin >> model;
//         cout << "Input Storage :";
//         cin >> storage;
//         cout << "Input Color :";
//         cin >> color;
//         cout << "Input Price :";
//         cin >> price;
//     }

//     void getIphoineInfo()
//     {
//         cout << "ID :" << id << endl;
//         cout << "Name :" << name << endl;
//         cout << "Model :" << model << endl;
//         cout << "Storage :" << storage << endl;
//         cout << "Color :" << color << endl;
//         cout << "Price :" << price << endl;
//     }
//     // method
// };

#include <iostream>
#pragma once

using namespace std;

class IPhone
{
private:
    // fields
    int id;
    string model;
    double price;

public:
    // constructor
    int getid(){
        return id;
    }
    IPhone(int id, string model, double price)
    {
        this->id = id;
        this->model = model;
        this->price = price;
    }
    IPhone() {}
    int getId() { return id; }
    string getModel() { return model; }
    double getPrice() { return price; }
    // method
};