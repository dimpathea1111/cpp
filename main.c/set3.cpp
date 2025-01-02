

#include <iostream>
#include <set>
using namespace std;

int main()
{
    // Declare a set of integers
    set<int> mySet;

    // Insert elements into the set
    mySet.insert(10);
    mySet.insert(20);
    mySet.insert(30);
    mySet.insert(40); // Duplicate, will not be added

    // Print elements of the set
    cout << "Elements in the set: \n";
    for (int num : mySet)
    {
        cout << num << " ";
    }
    cout << endl;

    // Check if an element exists
    int key = 20;
    if (mySet.find(key) != mySet.end())
    {
        cout << key << " exists in the set." << endl;
    }
    else
    {
        cout << key << " does not exist in the set." << endl;
    }

    // Erase an element
    mySet.erase(10);
    cout << "\nAfter erasing 10, set contains: ";
    for (int num : mySet)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// #include <iostream>
// #include <set>

// int main()
// {
//     std::set<int> numbers = {3, 1, 4, 1, 5}; // Initialize a set with some values

//     for (int num : numbers)
//     { // Loop through the set
//         std::cout << num << " ";
//     }

//     return 0;
// }