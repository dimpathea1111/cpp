#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    system("clear");
    int operation;
    int id[100] , n =0, i;
    string name[100], gender [100];
    double salary [100];

    do{
        cout<<"\n1. Input sraff"<<endl;
        cout<<"\n2. Out staff"<<endl;
        cout<<"\n3. Search sraff"<<endl;
        cout<<"\n4. Exit"<<endl;
        cout<<"Input your choice :"; cin>>operation;
        switch(operation){
            case 1:
            cout <<"=========Input Staff Information==============="<<endl;
            cout <<"Input staff id :"; cin>>id[n];
            cout <<"Input staff name :"; cin>>name[n];
            cout <<"Input staff gender :"; cin>>gender[n];
            cout <<"Input staff salary :"; cin>>salary[n];
            n++;
             break;
            case 2:
            cout <<"========= List Staff ================"<<endl;
            for(i =0; i <n; i++){
            cout << id[i] << "\t";
            cout <<name[i] << "\t";
            cout << gender [i] << "\t";
            cout << salary [i] << "\t";
            }
            
             break;
            case 3: break;
            // case 4: Exit(0); break;
        }
    }while(operation !=0);

    return 0;
}