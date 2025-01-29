/*
Create a structure called "Time" with members hours, minutes, and seconds.
 Create an array of 5 Time structures and write a program to display the 
 time in the format "HH:MM:SS".
*/


#include <bits/stdc++.h>
using namespace std;

struct Date {
    int hrs;
    int min;
    int sec;
};
Date arr[5];

void input() {
    for(int i = 0; i<5; i++) {
        cout<<"Enter the hrs: ";
        cin>>arr[i].hrs;
        cout<<"Enter the min: ";
        cin>>arr[i].min;
        cout<<"Enter the sec: ";
        cin>>arr[i].sec;
        cout<<endl;
    }

}

void display() {
    cout<<"HH/MM/SS"<<endl;
    for(int j = 0; j<5; j++) {
        cout<<arr[j].hrs<<arr[j].min<<arr[j].sec;
        cout<<endl;
    }
}

int main() {
    input();
    display();
}
