#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void printTable(const vector<vector<string>> &data, const vector<string> &columnNames)
{

    const int colWidth = 30;

    // Print top border
    cout << "+";
    for (int i = 0; i < columnNames.size(); ++i)
        cout << string(colWidth, '-') << "+";
    cout << endl;

    // Print headers
    cout << "|";
    for (const string &header : columnNames)
    {
        cout << setw(colWidth) << left << header << "|";
    }
    cout << endl;

    // Print header-bottom border
    cout << "+";
    for (int i = 0; i < columnNames.size(); ++i)
        cout << string(colWidth, '-') << "+";
    cout << endl;

    // Print rows
    for (const auto &row : data)
    {
        cout << "|";
        for (const string &cell : row)
        {
            cout << setw(colWidth) << left << cell << "|";
        }
        cout << endl;

        // Print row border
        cout << "+";
        for (int i = 0; i < columnNames.size(); ++i)
            cout << string(colWidth, '-') << "+";
        cout << endl;
    }
}

//////
int main()
{
    vector<string> header = {"ID", "Model", "Price"};
    vector<vector<string>> rows = {
        {"1","15pro",  "2000$"},
        {"2", "14pro", "2100$"},
        {"3", "16pro", "2500$"},
    };
    return 0;
}