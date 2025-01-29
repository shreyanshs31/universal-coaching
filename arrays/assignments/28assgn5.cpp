/* Write a program to store and display the information of 5 products 
using an array of structures. The structure should contain the product's 
name, price, and quantity. Display the total cost of all products.
*/
#include <bits/stdc++.h>
using namespace std;

struct Product {
    string name;
    int price;
    int quantity;
    int cost = price*quantity;
};

Product arr[5];

void input() {
    for(int i = 0; i<5; i++) {
        cout<<"Enter the name: ";
        cin>>arr[i].name;
        cout<<"Enter the price: ";
        cin>>arr[i].price;
        cout<<"Enter the quantity: ";
        cin>>arr[i].quantity;
        cout<<endl;
    }

}

void display() {
    for(int j = 0; j<5; j++) {
        cout<<"Name: "<<arr[j].name;
        cout<<"price: "<<arr[j].price;
        cout<<"quantity: "<<arr[j].quantity;
        cout<<"cost: "<<arr[j].cost;
        cout<<endl;
    }
}

int main() {
    input();
    display();
}