#include <bits/stdc++.h>
using namespace std;
/*Define a structure called "Book" with members title, author, 
and price. Create an array of 5 Book structures and write a program to
display the details of all books.*/

struct Books{
    string title;
    string author;
    int price;
};
Books arr[5];

void input() {
    for(int i = 0; i<5; i++) {
        cout<<"Enter the title: ";
        cin>>arr[i].title;
        cout<<"Enter the author: ";
        cin>>arr[i].author;
        cout<<"Enter the price: ";
        cin>>arr[i].price;
        cout<<endl;
    }

}

void display() {
    for(int j = 0; j<5; j++) {
        cout<<"Title: "<<arr[j].title;
        cout<<"Author: "<<arr[j].author;
        cout<<"Price: "<<arr[j].price;
        cout<<endl;
    }
}

int main() {
    input();
    display();
}
