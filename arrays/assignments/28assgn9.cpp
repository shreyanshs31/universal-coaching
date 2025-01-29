/*
Write a program to store and display the information of 5 orders using 
an array of structures. The structure should contain the order's number, 
date, and total cost. Display the details of all orders.
*/

#include <bits/stdc++.h>
using namespace std;
struct Order {
    int num;
    int date;
    int cost;
};
Order arr[5];

void input() {
    for(int i = 0; i<5; i++) {
        cout<<"Enter the num: ";
        cin>>arr[i].num;
        cout<<"Enter the date: ";
        cin>>arr[i].date;
        cout<<"Enter the cost: ";
        cin>>arr[i].cost;
        cout<<endl;
    }

}

void display() {
    for(int j = 0; j<5; j++) {
        cout<<"Num: "<<arr[j].num;
        cout<<"date: "<<arr[j].date;
        cout<<"cost: "<<arr[j].cost;
        cout<<endl;
    }
}

int main() {
    input();
    display();
}