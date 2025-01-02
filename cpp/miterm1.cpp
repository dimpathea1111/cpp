#include <iostream>
#include <vector>    // For dynamic array
#include <algorithm> // For sorting

using namespace std;

// Define the structure for Worker
struct Worker
{
    int code;
    string name;
    string tel;
    double salary;
    char gender;
};

// Function to display a worker's details
void displayWorker(const Worker &w)
{
    cout << "Code: " << w.code
         << ", Name: " << w.name
         << ", Tel: " << w.tel
         << ", Salary: " << w.salary
         << ", Gender: " << w.gender << endl;
}

// Function to sort workers by salary (ascending)
bool compareBySalary(const Worker &a, const Worker &b)
{
    return a.salary < b.salary;
}

int main()
{
    // Part 1: Assign 3 records manually and display them
    Worker workers[3] = {
        {101, "Alice", "123-456-7890", 50000, 'F'},
        {102, "Bob", "987-654-3210", 60000, 'M'},
        {103, "Charlie", "555-555-5555", 45000, 'M'}};

    cout << "Initial 3 Workers:" << endl;
    for (int i = 0; i < 3; i++)
    {
        displayWorker(workers[i]);
    }

    // Part 2: Input n workers and display sorted by salary
    int n;
    cout << "\nHow many workers do you want to input? ";
    cin >> n;

    vector<Worker> workerList(n); // Vector to hold n workers

    // Input n workers
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for worker " << i + 1 << ": \n";
        cout << "Code: ";
        cin >> workerList[i].code;
        cout << "Name: ";
        cin >> workerList[i].name;
        cout << "Tel: ";
        cin >> workerList[i].tel;
        cout << "Salary: ";
        cin >> workerList[i].salary;
        cout << "Gender (M/F): ";
        cin >> workerList[i].gender;
    }

    // Sort workers by salary
    sort(workerList.begin(), workerList.end(), compareBySalary);

    // Display the sorted workers
    cout << "\nSorted Workers by Salary:" << endl;
    for (int i = 0; i < n; i++)
    {
        displayWorker(workerList[i]);
    }

    return 0;
}
