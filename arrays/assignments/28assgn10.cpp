/*
Define a structure called "Person" with members name, age, and occupation. 
Create an array of 5 Person structures and write a program to display the 
details of all persons.
*/

#include <bits/stdc++.h>
using namespace std;
struct Person {
    string name;
    int age;
    string occupation;
};
Person arr[5];

void input() {
    for(int i = 0; i<5; i++) {
        cout<<"Enter the name: ";
        cin>>arr[i].name;
        cout<<"Enter the age: ";
        cin>>arr[i].age;
        cout<<"Enter the occupation: ";
        cin>>arr[i].occupation;
        cout<<endl;
    }

}

void display() {
    for(int j = 0; j<5; j++) {
        cout<<"name: "<<arr[j].name;
        cout<<"age: "<<arr[j].age;
        cout<<"occupation: "<<arr[j].occupation;
        cout<<endl;
    }
}

int main() {
    input();
    display();
}