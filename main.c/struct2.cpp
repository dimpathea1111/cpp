#include <iostream>
#include <vector>

using namespace std;
struct Phone
{
    int id;
    string name;
    string company;
    string country;
    string model;
};

int main()
{
    vector<Phone> phones;
    Phone phones1 = {1, "android", "google", "usa", "oppo"};
    Phone phones2 = {2, "iphone", "google", "usa", "15pro"};
    Phone phones3 = {3, "samsung", "google", "usa", "Galaxy f05"};
    Phone phones4 = {4, "vivo", "google", "usa", "y28"};

    phones.push_back(phones1);
    phones.push_back(phones2);
    phones.push_back(phones3);
    phones.push_back(phones4);

    int id;
    cout << "\ninsert id :";
    cin >> id;
    for (Phone ph : phones)
    {
        if (ph.id == id)
        {
            cout << "\nId  :" << ph.id;
            cout << "\nName :" << ph.name;
        }
    }

    return 0;
}