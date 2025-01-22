#include <bits/stdc++.h>
#define size 5
using namespace std;
int front = -1, rear = -1;
int Queue[size];
bool isEmpty() {
    if((front == -1 && rear == -1) || (front<size)) {
        return true;
    }
    return false;
}

string pushData(int data) {
    if(!isEmpty()) {
        return "Queue is full";
    }
    Queue[++front] = data;
    return " ";
}
void display() {
    if(rear==(size-1)) {
        cout<<"Rear"<<endl;
        return;
    }
    if(front == rear) {
        cout<<Queue[rear];
        return;
    }
    cout<<Queue[++rear]<<"->";
    display();
}

int main() {
    pushData(10);
    pushData(2);
    pushData(1);
    pushData(3);
    pushData(9);
    display();
}