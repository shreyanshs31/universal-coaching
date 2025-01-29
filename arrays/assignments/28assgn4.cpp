/*
Create a structure called "Rectangle" with members length and width. 
Create an array of 5 Rectangle structures and write a program to calculate 
and display the area of each rectangle.
*/

#include <bits/stdc++.h>
using namespace std;

struct Rectangle {
    int length;
    int width;
    int area = length*width;
};
Rectangle arr[5];

void input() {
    for(int i = 0; i<5; i++) {
        cout<<"Enter the length: ";
        cin>>arr[i].length;
        cout<<"Enter the width: ";
        cin>>arr[i].width;
        cout<<endl;
    }

}

void display() {
    for(int j = 0; j<5; j++) {
        cout<<"Name: "<<arr[j].length;
        cout<<"Age: "<<arr[j].width;
        cout<<"Area: "<<arr[j].area;
        cout<<endl;
    }
}

int main() {
    input();
    display();
}