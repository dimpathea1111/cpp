#include <iostream>
#include <set>
#include <map>
#include <vector>

using namespace std;
struct student
{
    int id;
    string name;
    char gender;
    int age;
};
int main()
{
    set<string> name;
    student st;
    name.insert("viya");
    name.insert("tavi");
    name.insert("biba");

    st.name = "viyu";
    st.name = "botu";
    for (auto i : name)
    {
        cout << i << endl;
    }
    cout << "\n Enter name :";
    cin >> st.name;
    cout << "\nEnter age :";
    cin >> st.age;
    cout << "\n Enter id :";
    cin >> st.id;
    cout << "\n Enter gender :";
    cin >> st.gender;

    cout << "\n name :" << st.name;
    cout << "\n age :" << st.age;
    cout << "\n id  :" << st.id;
    cout << "\n gender :" << st.gender;

    return 0;
}