#include<stdio.h>
#include<iostream>
#include<cmath>
#include <malloc.h>
#include<string>

#define strncpy ;

using namespace std;

class Student{
    private: int code; char Name[25]; float Score;
    public: void input();
            void Output();
            float GetScore();
            char* GetName();
            void SetData(int id, char* sl, float S);
            void SetScore(float S);
            void SetName(char st[25]);
};
void Student::input(){
    int n;
    cout<<"Enter value n:: ";
    cin>>n;
    for(int i; i<n; i++){
    cout<<"Enter student Code :";
    cin>>code;
    cout<<"Enter student Name :";
    cin>>Name;
    cout<<"Enter student Score :";
    cin>>Score;
    }
}

void Student::Output(){
    cout << "ID\tName\tScore" << endl;
    cout << code << "\t" << Name << "\t" << Score << endl;
}
float Student::GetScore(){
    return (Score);
}

char* Student::GetName(){
    return (Name);
}

void Student::SetData(int id, char* st, float S){
    this->code = code;
    strncpy(this->Name, st, 25);
    this->Name[24] = '\0';
    this->Score = S;
}

 void Student::SetScore(float S){
    this->Score = S;

 }

 void Student::SetName( char st[25])
{
    strncpy(this->Name, st, 25);
    this->Name[24] = '\0';
}

void listMenu(){
        cout << "\t=============..*. Practice1: Assignment .*..===============  " << endl;
        cout << "1.Make Object By Keyboard And Output On Screen" << endl;
        cout << "2.Update Score By 15%" << endl;
        cout << "3.Modify Student Name" << endl;
        cout << "4.Show Information After Update and Modify" << endl;
        cout << "5.Use Implementor Function to Provide Information About Student" << endl;
}


int main(){
    system("clear");
    listMenu();
    Student stud;
    int i,j, choose;

    do{
        cout << "Select your choose ::  ";
        cin >> choose;
        switch (choose) {
            case 1:{            
            stud.input();
            stud.Output();
            }
            break;

             case 2: {
            cout << "Score updated by 15%" << endl;
            float updatedScore = stud.GetScore() * 1.15;
            stud.SetScore(updatedScore);
            stud.Output();
        }
        break;

        case 3: {
            char newName[25];
            cout << "Name updated" << endl;
            cout << "Enter new name: ";
            cin.ignore();
            cin.getline(newName, 25);
            stud.SetName(newName);
        }
        break;

        case 4:
        {
            stud.Output();
        }
        break;
        case 5:{
            cout << "Student about Information:" << endl;
            cout << "ID: " << stud.GetScore() << endl;
            cout << "Name: " << stud.GetName() << endl;
            cout << "Score: " << stud.GetScore() << endl;
        }
        break;

        default:
            cout<<"Thank you for watching my 'practice homework1..class..'"<<endl;
        exit(0);

        }
    }while(1);

    return 0;
}