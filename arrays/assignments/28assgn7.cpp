/*
Write a program to store the information of 10 customers using an array 
of structures. The structure should contain the customer's name, address, 
and phone number. Display the details of all customers.
*/

#include <bits/stdc++.h>
using namespace std;

struct Customer {
    string name;
    string address;
    int phn_no;
};
Customer arr[10];

void input() {
    for(int i = 0; i<10; i++) {
        cout<<"Enter name: ";
        cin>>arr[i].name;
        cout<<"Enter address: ";
        cin>>arr[i].address;
        cout<<"Enter phn_no: ";
        cin>>arr[i].phn_no;
        cout<<endl;
    }
}

void display() {
    for(int j = 0; j<10; j++) {
        cout<<"Name: "<<arr[j].name;
        cout<<"Address: "<<arr[j].address;
        cout<<"Phn_no: "<<arr[j].phn_no;
        cout<<endl;
    }
}

int main() {
    input();
    display();
}