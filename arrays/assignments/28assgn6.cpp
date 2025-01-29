/*
Define a structure called "Date" with members day, month, and year. 
Create an array of 5 Date structures and write a program to display 
the dates in the format "DD/MM/YYYY".
*/

#include <bits/stdc++.h>
using namespace std;

struct Date {
    int day;
    int month;
    int year;
};
Date arr[5];

void input() {
    for(int i = 0; i<5; i++) {
        cout<<"Enter the day: ";
        cin>>arr[i].day;
        cout<<"Enter the month ";
        cin>>arr[i].month;
        cout<<"Enter the year: ";
        cin>>arr[i].year;
        cout<<endl;
    }

}

void display() {
    cout<<"DD/MM/YY"<<endl;
    for(int j = 0; j<5; j++) {
        cout<<arr[j].day<<arr[j].month<<arr[j].month;
        cout<<endl;
    }
}

int main() {
    input();
    display();
}
