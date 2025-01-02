

/////////////////////////////////////// vector ///////////////////////////////////////////////////////
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    ///////////////// the simple show for vector /////////////////////////////////
    vector<int> v = {12, 12, 23, 4445, 12345}; // វ៉ិចទ័រដើម
    cout << "this is the result :: ";
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    //     return 0;
    // }

    /// How to use assign() in vector ///////////////////////

    v.assign(5, 0); // ប្ដូរទាំងអស់ក្នុងវ៉ិចទ័រ v ជាមួយ 5 ធាតុ ដែលមានតម្លៃ 0
    // បង្ហាញលទ្ធផល
    cout << "\nthis is the result :: ";
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    return 0;
}

////////////////////  HOW TO use push_back with for loop  //////////////////////////////////////////////
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> vec ;
//     vec.push_back(12);

//     for (auto i : vec)
//     {
//         cout << i;
//     }

//     return 0;
// }

/////////////////////////// how can show by don`t use for_loop in vector ///////////////////////////////
// #include <iostream>
// #include <vector>
// #include <iterator>  // For ostream_iterator
// #include <algorithm> // For std::copy
// using namespace std;
// int main()
// {
//     vector<int> vec;
//     vec.push_back(12); // Add value to the vector

//     // Using std::copy and ostream_iterator to print vector elements
//     copy(vec.begin(), vec.end(), ostream_iterator<int>(cout, "\n"));

//     return 0;
// }
////////////////////////////////// how use push and pop by show with for_loop //////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {

//     ////// how to use push and pop with for_loop in vector /////////////////
//     vector<int> make;
//     for (int i = 1; i <= 12; i++)
//     {
//         make.push_back(i); // for insert element in to array follow by i (1 to 12)
//     }
//     make.pop_back(); // for remove last element only do this
//     for (auto j : make)
//     {
//         cout << j << ",";
//     }
//     return 0;
// }

//////////////////////////////////// how to use vector in string  //////////////////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<string> m = {" nae ", " nit ", " mom "};
//     for (auto i : m)
//     {
//         cout << i << endl;
//     }

//     return 0;
// }

/////////////////////////////// how to use insert in vector  ///////////////////////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> make = {1, 2, 3, 4, 5};
//     // make.insert(make.begin() + 1 , 12); // the result (1,12,3,4,5)
//     make.insert(make.begin() + 1, 2, 8); // 2 ជាចំនួនធាតុដែរយើងចង់នបន្ថែម​ // the result is (1,8,8,2,3,4,5)
//     for (auto i : make)
//     {
//         cout << i << ",";
//     }

//     return 0;
// }

/////////////////////////////// how to use erase in vector  ///////////////////////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v = {10, 20, 30, 40, 50}; // Initial vector
//     v.erase(v.begin() + 2);               // for - 20
//                                           // v.erase(v.begin() + 1, v.begin() + 4);  // for - 20 and 40
//     for (int i : v)
//     {
//         cout << i << " "; // Output: 10 50
//     }

//     return 0;
// }

/////////////////////////////// how to use swap in vector  ///////////////////////////////////////////

// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v1 = {1, 2, 3, 4};
//     vector<int> v2 = {5, 6, 7, 8};

//     // Print original vectors
//     cout << "Before swap:" << endl;
//     cout << "v1: ";
//     for (int i : v1)
//         cout << i << " ";
//     cout << endl;

//     cout << "v2: ";
//     for (int i : v2)
//         cout << i << " ";
//     cout << endl;

//     // Swap v1 and v2
//     v1.swap(v2);

//     // Print vectors after swap
//     cout << "After swap:" << endl;
//     cout << "v1: ";
//     for (int i : v1)
//         cout << i << " ";
//     cout << endl;

//     cout << "v2: ";
//     for (int i : v2)
//         cout << i << " ";
//     cout << endl;

//     return 0;
// }

/////////////////////// how to use .clear in vector for clear all element in vector ////////////

// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     vector<int> vec = {1, 2, 3, 4, 5};

//     // លុបទិន្នន័យទាំងអស់
//     vec.clear();

//     cout << "Vector size after clear: " << vec.size() << endl;
//     return 0;
// }

////////////////////////////////////////////////////////////////////////
///////////////////////////////// set ///////////////////////////////

// //////////////// how to use begin in set /////////////////////

// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> make = {10, 20, 30, 40, 50};
//     set<int>::iterator it = make.begin();
//     cout << "First element: " << *it << endl;
//     cout << "All elements: ";
//     for (auto i : make)
//     {
//         cout << i << ",";
//     }
//     return 0;
// }

///////////////// how to use end in set ////////////////////////////

// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> make = {12, 13, 14, 15, 17};
//     if (make.begin() != make.end())
//     {
//         set<int>::iterator it = make.end();
//         --it; // use for អោយវាទៅយកធាតុចុងក្រោយ​មកបង្ហាញ​ប្រសិនបើអត់ដាក់វាវានឹងទៅរាប់ចំនួនធាតុវិញមិនមេនចាប់ធាតុចុងក្រោយទេ
//         cout << "\n\tLast element  :: " << *it << endl;
//     }
//     return 0;
// }

///////////////// how to use size in set ///////////////////////////

// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> make = {1, 2, 3, 4, 5, 6, 7, 8};
//     cout << "\n\tThe size of this array :: " << make.size();
//     return 0;
// }

///////////////// how to use empty in set //////////////////////////

// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> make{1, 2, 3, 4, 5, 6, 7}; // true
//     // set<int> make; // fail
//     if (make.empty())
//     {
//         cout << "The set is empty!" << endl;
//     }
//     else
//     {
//         cout << "The set is not empty!" << endl;
//     }
//     return 0;
// }

///////////////// how to use insert in set /////////////////////////

// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> make;
//     make.insert(1);
//     make.insert(2);
//     // note
//     // make.insert(1) // it not show cuz it has in this set
//     for (auto i : make)
//     {
//         cout << i << ",";
//     }

//     return 0;
// }

///////////////////////// how to use insert with string /////////////////////////////////////

// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<string> name;
//     name.insert("nea");
//     name.insert("nit");
//     // name.insert("nea");// it not show cuz it has in this set
//     for (auto i : name)
//     {
//         cout << i << ",";
//     }
//     return 0;
// }

/////////// if don`t want insert ////////////////////////////////////////////
// #include<iostream>
// #include<set>
// using namespace std;
// int main()
// {
//     set<int> make ={1,2,3,4,5,6};
//     //set<int> make ={1,2,2,3,4,5,6}; // the result (1,2,3,4,5,6) don`t has 2,2
//     //set<string> make = {"nea","nit"};
//     //set<string> make = {"nea","nit","nea"};// the result (nea , nit )
//     for (auto i : make)
//     {
//         cout <<i<<",";
//     }

//     return 0;
// }

//////////////////////////// about set /////////////////////////////////////

// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> make = {1, 2, 5, 4, 3, 7};
//     for (auto i : make)
//     {
//         cout << i << ",";
//     }

//     return 0;
// }
///////////////// how to use erase in set /////////////////////////

// #include <iostream>
// #include <set>
// using namespace std;
// int main()
// {
//     set<int> make = {1, 2, 3, 4, 5};
//     cout << "Element befor erase :: ";
//     for (auto i : make)
//     {
//         cout << i << ",";
//     }
//     make.erase(4);
//     cout << "\nElement after erase :: ";
//     for (auto i : make)
//     {
//         cout << i << ",";
//     }
//     return 0;
// }

///////////////// how to use find in set ///////////////////////////

// #include<iostream>
// #include<set>
// using namespace std;
// int main() {
//     set<int> make = {10, 20, 30, 40, 50};
//     set<int>::iterator it = make.find(30); // true
//    // set<int>::iterator it = make.find(3); // fail
//     if (it != make.end()) {
//         cout << "Found element: " << *it << endl;
//     } else {
//         cout << "Element not found!" << endl;
//     }
//     return 0;
// }

//////////////////////////////////////////////////////////////////////
///////////////////////////////  map ////////////////////////////////
////////////////////////// about insert(pair) ///////////////////////

// #include <iostream>
// #include <map>
// using namespace std;
// int main() {
//     map<int, string> make;
//     make.insert(pair<int, string>(1, "nea"));
//     make.insert(make_pair(3, "nit"));  // use make_pair
//     make[4] = "neng";  // use array
//     for (auto& pair : make) {
//         cout << "Student ID: " << pair.first << ", Name: " << pair.second << endl;
//     }
//     return 0;
// }

//////////////// if don`t want use insert(pair)  //////////////////

// #include<iostream>
// #include<map>
// using namespace std;
// int main()
// {
//     map<int , string > make = {{1 , " nea "} , {2 , "nit"}};
//     for (auto &item : make) {
//         cout << "name: " << item.first << ", Value: " << item.second << endl;
//     }
//     return 0;
// }
///////////////////////// how to use map [key] /////////////////////////

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> make;
//     make[1] = "Apple";
//     make[2] = "Banana";
//     make[3] = "Cherry";
//     for (auto i : make) {
//         cout << "Key: " << i.first << ", Value: " << i.second << endl;
//     }
//     // Updating the value for key 3
//     make[3] = "Blueberry";
//     cout << "Updated value for key 3: " << make[3] << endl;
//     return 0;
// }

///////////////////////// how to use map.empty() ///////////////

// #include <iostream>
// #include <map>
// using namespace std;

// int main() {
//     map<int, string> make;// true
//     //make[1] = "Apple"; // fail
//     if (make.empty()) {
//         cout << "The map is empty!" << endl;
//     } else {
//         cout << "The map is not empty!" << endl;
//     }
//     return 0;
// }

///////////////////////// how to use map.erase() ///////////////

// #include <iostream>
// #include <map>
// using namespace std;

// int main()
// {
//     map<int, string> myMap = {{1, "nea"}, {2, "nit"}, {3, "neng"}};

//     cout << "Before erasing name 2:" << endl;
//     for (auto &item : myMap)
//     {
//         cout << "Key: " << item.first << ", Value: " << item.second << endl;
//     }
//     myMap.erase(2); // 2 is location of element
//     cout << "\nAfter erasing name 2:" << endl;
//     for (auto &item : myMap)
//     {
//         cout << "name: " << item.first << ", Value: " << item.second << endl;
//     }
//     return 0;
// }

///////////////////////// how to use map.size() ///////////////

// #include<iostream>
// #include<map>
// using namespace std;
// int main()
// {
//     map<int , string > name = {{1,"apple "} , {2 , "banana"}};
//     cout <<" Size of this array :: "<<name.size();
//     return 0;
// }

///////////////////////// how to use map.find() ///////////////

// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     map<int, string> name = {{1, "nea "}, {2, "nit"}};
//     auto it = name.find(2); // ture
//     // auto it = name.find(3); // fail
//     if (it != name.end())
//     {
//         cout << "Found name: " << it->first << ", Value: " << it->second << endl;
//     }
//     else
//     {
//         cout << "Name not found!" << endl;
//     }
//     return 0;
// }