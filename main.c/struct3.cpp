// #include<iostream>
// #include<vector>

// using namespace std;
// struct Person{
//      int id;
//     string name;
//     int age;
// };
// int main(){
//     vector<string,int> person;
//     Person person1;
//     //  int id;
//     // string name;
//     // int age;
//     cout<<"Insert person id :";
//     cin>>person1.id;
//      cout<<"Insert person Name:";
//     cin>>person1.name;
//     cout<<"Insert person Age :";
//     cin>>person1.age;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

struct Person
{
    int id;
    string name;
    int age;
    string email;
    string password;
    string phoneNumber;
};

int main()
{
    vector<Person> persons;
    Person person1 = {1, "John Doe", 30, "johndoe@example.com", "password123", "1234567890"};
    Person person2 = {2, "Jane Smith", 28, "janesmith@example.com", "password456", "9876543210"};
    persons.push_back(person1);
    persons.push_back(person2);

    cout << "[+] Insert person ID: ";
    int id;
    cin >> id;
    for (Person per : persons)
    {
        if (per.id == id)
        {
            // print out all of the person info
            cout << "ID: " << per.id << endl;
            cout << "Name: " << per.name << endl;
        }
    }
    return 0;
}