#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Person
{
private:
    int id;
    string name;
    float age;
    string email;

public:
    // constructor
    Person() {}

    // Getter and Setter Methods
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    float getAge()
    {
        return age;
    }
    string getEmail() const
    {
        return email;
    }
    void setName(int &newId) { id = newId; }
    void setName(string &newName) { name = newName; }
    void setAge(float newAge) { age = newAge; }
    void setGmail(string &newEmail) { email = newEmail; }
    // for displa
    void outputPerson()
    {
        cout << "+++++++++++++++++++++++++++++++" << endl;
        cout << "ID :" << id << endl;
        cout << "Name :" << name << endl;
        cout << "Age :" << age << endl;
        cout << "Email :" << email << endl;
        cout << "+++++++++++++++++++++++++++++++" << endl;
    }
};

class personManager
{
private:
    vector<Person> people;

public:
    // add
    void createPerson(int id, string name, float age, string email)
    {
        people.emplace_back(id, name, age, email);
        cout << "Person add successful^_^" << endl;
    }
    // read
    void readPerson()
    {
        if (people.empty())
        {
            cout << "No records found ." << endl;
        }
        for (auto person : people)
        {
            person.outputPerson();
        }
    }
    // update
    void updateBuId(int id)
    {
        // cout<<"Enter update id :";
        // cin>>id;
        for (auto &person : people)
        {
            if (person.getId() == id)
            {
                string newName, newEmail;
                float newAge;
                cout << "Enter new name :";
                cin >> newName;
                cout << "Enter new email:";
                cin >> newEmail;
                cout << "Enter new Age:";
                cin >> newAge;

                person.setName(newName);
                person.setAge(newAge);
                person.setGmail(newEmail);
            }
        }
        cout << "Person with id " << id << "Not found!" << endl;
    }
    // delete

    void deleteById(int id)
    {
        if (auto it = people.begin(); it != people.end(); ++it)
        {
            people.erase(it);
            cout << "Person deleted successfully" << endl;
            return;
        }
        cout << "Person withid " << id << "not found " << endl;
    }
};

int main()
{
    personManager manager;
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