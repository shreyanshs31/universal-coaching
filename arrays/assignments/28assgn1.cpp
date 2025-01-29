#include <bits/stdc++.h>
using namespace std;
//Write a program to store and display the information of 5 students 
//using an array of structures. The structure should contain the 
//student's name, roll number, and marks.

struct Student
{
    string name;
    int roll_num;
    int marks;
};
Student arr[5];

void input() {
    for(int i = 0; i<5; i++) {
        cout<<"Enter the name: ";
        cin>>arr[i].name;
        cout<<"Enter the roll number: ";
        cin>>arr[i].roll_num;
        cout<<"Enter the marks: ";
        cin>>arr[i].marks;
        cout<<endl;
    }

}

void display() {
    for(int j = 0; j<5; j++) {
        cout<<"Name: "<<arr[j].name;
        cout<<"Roll number: "<<arr[j].roll_num;
        cout<<"Marks: "<<arr[j].marks;
        cout<<endl;
    }
}

int main() {
    input();
    display();
}


