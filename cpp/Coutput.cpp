#include <iostream>

using namespace std;
#define id 3.33;
int main()
{
    string Subjectname, SubjectTeacherName;
    int SubjectId, SubjectDuration;
    cout << "Create subject insertion program and printinf out" << endl;
    cout << "======================================================" << endl;
    cout << "Insert subject name :";
    cin >> Subjectname;
    cout << "This is your insert subject name :" << Subjectname << endl;
    cout << "Insert subject id :";
    cin >> SubjectId;
    cout << "This is your insert subject id " << SubjectId << endl;
    cout << "Insert subject teacher's name :";
    cin >> SubjectTeacherName;
    cout << "This is your insert subject teacher's name " << SubjectTeacherName << endl;
    cout << "Insert subject duration :";
    cin >> SubjectDuration;
    cout << "This is your insert subject duration" << SubjectDuration << endl;
    cout << "=======================================================" << endl;
    cout << "this is id :" << id + 2;
    return 0;
}