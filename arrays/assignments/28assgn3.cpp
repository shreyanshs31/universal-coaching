/*Write a program to store the information of 10 employees using an 
array of structures. The structure should contain the employee's name, 
age, salary, and department. Display the details of all employees.*/
#include <bits/stdc++.h>
using namespace std;

struct Employee {
    string name;
    int age;
    int salary;
    string department;
};
Employee arr[10];

void input() {
    for(int i = 0; i<10; i++) {
        cout<<"Enter the name: ";
        cin>>arr[i].name;
        cout<<"Enter the age: ";
        cin>>arr[i].age;
        cout<<"Enter the salary: ";
        cin>>arr[i].salary;
        cout<<"Enter department: ";
        cin>>arr[i].department;
        cout<<endl;
    }

}

void display() {
    for(int j = 0; j<10; j++) {
        cout<<"Name: "<<arr[j].name;
        cout<<"Age: "<<arr[j].age;
        cout<<"Salary: "<<arr[j].salary;
        cout<<"Department: "<<arr[j].department;
        cout<<endl;
    }
}

int main() {
    input();
    display();
}
