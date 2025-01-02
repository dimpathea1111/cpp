/*
#include <iostream>
#include <set>

int main()
{
    // Declare and initialize a set
    std::set<int> s = {10, 20, 30, 20, 40};

    // Inserting elements
    s.insert(50);
    s.insert(20); // Duplicate, won't be added

    // Iterating through the set
    std::cout << "Set elements: ";
    for (int val : s)
    {
        std::cout << val << " "; // Output: 10 20 30 40 50 (sorted order)
    }
    std::cout << std::endl;

    // Checking if an element exists
    if (s.find(30) != s.end())
    {
        std::cout << "30 is present in the set." << std::endl;
    }

    // Removing an element
    s.erase(20);

    // Checking the size of the set
    std::cout << "Size after removing 20: " << s.size() << std::endl;

    // Erasing all elements
    s.clear();
    std::cout << "Size after clearing: " << s.size() << std::endl;

    return 0;
}*/

/*
// C++ program to Create a Set of Arrays
#include <array>
#include <iostream>
#include <set>
using namespace std;

// Driver Code
int main()
{
    // Declare a set containing arrays of 3 integers
    set<array<int, 3>> mySet;

    array<int, 3> array1 = {1, 2, 3};
    array<int, 3> array2 = {4, 5, 6};
    array<int, 3> array3 = {1, 2, 3};

    // Insert arrays into the set
    mySet.insert(array1);
    mySet.insert(array2);
    mySet.insert(array3);

    // Iterate over the set
    for (auto &arr : mySet)
    {
        // Iterate over each element of the array
        for (auto &element : arr)
        {
            // Output each element followed by a space
            cout << element << ' ';
        }

        // Output a newline after each array
        cout << endl;
    }
}
*/

// /*

#include <iostream>
#include <set>
using namespace std;
int main()
{

    set<char> a;
    a.insert('G');

    a.insert('F');

    a.insert('G');
    for (auto &tree : a)
    {

        cout << tree << ' ';
    }

    cout << '\n';

    return 0;
}

// */