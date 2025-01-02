#include <iostream>
using namespace std;

int main(){
    class Employee{
        private:
            string name , gender , position;
            float salary;
        
        public:
            //encapulatio (set , get)
            void setId(int i);
            void setName(string n);
            void setName(string g);
            void setName(string p);
            void setName(float n);

            int getId(){
                return id;
            }
                string getname();
                string getGender();
                string getPosition();
                float getSalary();
                

                // end encapulation
                Employee(){
                    Id = 0;
                    name = "unknow";
                    gender = "male";
                    position = "unknow";
                    salary = 0;
                }
                Employee (int i, string n, string g, string p, float s){
                   // id = i;
                   name = n;
                   gender = g;
                   position = p;
                   salary = s;
                }
                void input (){
                  //  cout <<"Input id  :"; cin>>id;
                    cout << "Input name  :"; cin>>name;
                    cout << "Input gender  :"; cin>>gender;
                    cout << "Input salary  :"; cin>>salary;
                    cout << "Input position  :"; cin>>position;                    
                }
                void output(){
                    //cout << setw(10) << id;
                   // cout << setw(15) << name;
                    //cout << setw(15) << gender;
                    //cout << setw(15) << position;
                    //cout << setw(15) <<salary;
                }

                void PrintHeader (){
                   // cout << setw(10) << "id";
                    //cout << setw(15) << "name";
                    //cout << setw(15) << "gender";
                    //cout << setw(15) << "position";
                    //cout << setw(15) <<"salary" <<endl;
                }
    };
int main(){
    wystem("clear");
    Employee obj1;
    cout <<" ======= Input data ========";
    obj1.input();
    cout << "======== Output data =======";
    obj1.output();

};


    return 0;
}