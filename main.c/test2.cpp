// #include <iostream>
// using namespace std;
// struct Book
// {
//     string title;
//     int year;
//     double price;
// };
// int main()
// {
//     Book book1;
//     book1.title = "White Rose Novel";
//     book1.year = 2024;
//     book1.price = 10.5;
//     cout << "Insert litle :";
//     cin >> book1.title;
//     cout << "Book Title: " << book1.title << endl;
//     cout << "Book Year: " << book1.year << endl;
//     cout << "Book Price: $ " << book1.price << endl;

//     return 0;
// }

#include <iostream>
#include <set>
#include <string>
using namespace std;
struct Person
{
    string name;
    int age;
    Person(const string &name, int age) : name(name), age(age) {}
};
// Custom comparator for sorting Person objects
struct ComparePerson
{
    bool operator()(const Person &p1, const Person &p2) const
    {
        if (p1.age == p2.age)
        {
            return p1.name < p2.name;
        }
        return p1.age < p2.age;
    }
};
int main()
{
    // Create a set of Person structs using a custom comparator
    set<Person, ComparePerson> people;
    // Add some Person objects to the set
    people.insert(Person("Dong Dara", 30));
    people.insert(Person("Chan Mune", 25));
    people.insert(Person("Kong Socheata", 35));
    people.insert(Person("Chane Phanha", 28));
    people.insert(Person("Jit Tola", 25)); // Same age as Jane Smith
    // Iterate through the set and print the data
    for (const auto &person : people)
    {
        cout << "Name: " << person.name << ", Age: " << person.age << endl;
    }
    return 0;
}