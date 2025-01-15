// #include<iostream>
#include<vector>
#include<model/employee.hpp>
#include"../repository/employee_repo.hpp"

// using namespace std;

vector<Employee>getAllEmployee(){
    return employeeRepositories;
}

Employee addEmployee(Employee emp){
    employeeRepositories.push_back(emp);
    cout<<"Employee :"<<emp.name<<"has been succesfully"<<endl;
    return emp;
}

Employee updateEmployeeById(int id){
    for(Employee emp:employeeRepositories){
        if(emp.id==id){
            return emp;
        }
    }
    return {};
}

bool deleteEmployeeById(int id){
    for(int i=0; i<employeeRepositories.size(); i++){
        employeeRepositories.erase(employeeRepositories.begin()+i){
            cout<<"Employee with ID :"<<id <<"delete succesfullyyyy"<<endl;
        }
    }
    return false;
}





