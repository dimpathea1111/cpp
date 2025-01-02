#include <iostream>

using namespace std;

int main()
{
  int opt;
  string name;
  int i, id;
  cout << "+++++++++++++++ Homework ++++++++++++++++ " << endl;
  while (true)
  {
    cout << "\nInsert opt :";
    cin >> opt;
    switch (opt)
    {
    case 1:
      cout << "1. List all database" << endl;
      break;
    case 2:
      cout << "2. Create new database" << endl;
      cout << "Insert database name :";
      cin >> name;
      cout << " Name :" << name;
      break;
    case 3:
      cout << "3. Delete database" << endl;
      cout << "Insert database ID :";
      cin >> id;
      cout << "ID :" << id;
      break;
    case 4:
      cout << "4. Update database " << endl;
      cout << "Insert database ID :";
      cin >> id;
      cout << "ID :" << id;
      break;
    case 5:
      cout << "5. Exite" << endl;
      break;
    default:
      cout << "Resualt" << endl;
      cout << "--------++++++++++++++++++++++--------------" << endl;
    }
  }
  return 0;
}
