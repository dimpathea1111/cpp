// #include <iostream>
// #include <string>
// #include <vector>

// using namespace std;

// class People
// {
// private:
//     int id;
//     string name;
//     float age;
//     string email;

// public:
//     // constructo
//     // constructo with no parameter
//     People() {}
//     // constructor ith parameter

//     void peopleInput(int id, string name, float age, string email)
//     {
//         this->id = id;
//         this->name = name;
//         this->age = age;
//         this->email = email;
//     }

//     void Input()
//     {
//         cout << "Enter ID :";
//         cin >> id;
//         cout << "Enter Name :";
//         cin >> name;
//         cout << "Enter Age :";
//         cin >> age;
//         cout << "Enter Email :";
//         cin >> email;
//     }

//     void getOutput()
//     {
//         cout << "+++++++++++++++++++++++++++++++" << endl;
//         cout << "ID :" << id << endl;
//         cout << "Name :" << name << endl;
//         cout << "Age :" << age << endl;
//         cout << "Email :" << email << endl;
//         cout << "+++++++++++++++++++++++++++++++" << endl;
//     }
// };

// int main()
// {
//     system("cls");
//     People p1;
//     People p2;
//     p1.peopleInput(1, "nini", 17, "ni,ne123@gmail.com");
//     p1.getOutput();
//     p2.Input();
//     p2.getOutput();

//     return 0;
// }

///////////////////////////////////////////////////

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Define the Person class
class Person
{
private:
    int id;
    string name;
    int age;
    string gmail;

public:
    // Constructor
    Person(int id, string name, int age, string gmail) : id(id), name(name), age(age), gmail(gmail) {}

    // Getter and Setter Methods
    int getId() const { return id; }
    string getName() const { return name; }
    int getAge() const { return age; }
    string getGmail() const { return gmail; }

    void setName(const string &newName) { name = newName; }
    void setAge(int newAge) { age = newAge; }
    void setGmail(const string &newGmail) { gmail = newGmail; }

    // Display person details
    void display() const
    {
        cout << "ID: " << id << ", Name: " << name << ", Age: " << age << ", Gmail: " << gmail << endl;
    }
};

// CRUD operations class
class PersonManager
{
private:
    vector<Person> people;

public:
    // Create a new person
    void createPerson(int id, string name, int age, string gmail)
    {
        people.emplace_back(id, name, age, gmail);
        cout << "Person added successfully!" << endl;
    }

    // Read all persons
    void readAllPersons() const
    {
        if (people.empty())
        {
            cout << "No records found." << endl;
            return;
        }

        for (const auto &person : people)
        {
            person.display();
        }
    }

    // Update a person's details by ID
    void updatePerson(int id)
    {
        for (auto &person : people)
        {
            if (person.getId() == id)
            {
                string newName, newGmail;
                int newAge;
                cout << "Enter new name: ";
                cin.ignore();
                getline(cin, newName);
                cout << "Enter new age: ";
                cin >> newAge;
                cout << "Enter new Gmail: ";
                cin >> newGmail;

                person.setName(newName);
                person.setAge(newAge);
                person.setGmail(newGmail);
                cout << "Person updated successfully!" << endl;
                return;
            }
        }
        cout << "Person with ID " << id << " not found." << endl;
    }

    // Delete a person by ID
    void deletePerson(int id)
    {
        for (auto it = people.begin(); it != people.end(); ++it)
        {
            if (it->getId() == id)
            {
                people.erase(it);
                cout << "Person deleted successfully!" << endl;
                return;
            }
        }
        cout << "Person with ID " << id << " not found." << endl;
    }
};

int main()
{
    PersonManager manager;
    int choice;

    do
    {
        cout << "\n--- Person Manager ---" << endl;
        cout << "1. Add Person" << endl;
        cout << "2. View All Persons" << endl;
        cout << "3. Update Person" << endl;
        cout << "4. Delete Person" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int id, age;
            string name, gmail;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter Age: ";
            cin >> age;
            cout << "Enter Gmail: ";
            cin >> gmail;
            manager.createPerson(id, name, age, gmail);
            break;
        }
        case 2:
            manager.readAllPersons();
            break;
        case 3:
        {
            int id;
            cout << "Enter ID of the person to update: ";
            cin >> id;
            manager.updatePerson(id);
            break;
        }
        case 4:
        {
            int id;
            cout << "Enter ID of the person to delete: ";
            cin >> id;
            manager.deletePerson(id);
            break;
        }
        case 5:
            cout << "Exiting program. Goodbye!" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
