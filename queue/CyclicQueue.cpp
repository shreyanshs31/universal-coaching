#include <bits/stdc++.h>
#define len 5
using namespace std;
int front = 0;
int rear = 0;
int siz = 0;
int Queue[len];

bool isFull() {
    return siz == len;
}

bool isEmpty() {
    return siz == 0;
}

void push(int data) {
    if(isFull()) {
        cout<<"Queue is full"<<endl;
    }
    Queue[rear++] = data;
    rear = rear%len;
    siz++;
}

int pop() {
    if(isEmpty()) {
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    int removed = Queue[front++];
    front = front%len;
    siz--;
    return removed;
}

void peek() {
    if(isEmpty()) {
        cout<<"Queue is empty"<<endl;
    }
    cout<<Queue[front]<<endl;
}

void display() {
    if(isEmpty()) {
        cout<<"Queue is empty"<<endl;
        return;
    }
    int i = front;
    do {
        cout<<Queue[i++]<<" ";
        i%=len;
    }
    while (i!=rear);
}

int main() {
    push(10);
    push(320);
    push(50);
    push(130);
    push(160);
    cout<<pop()<<endl;
    push(133);
    cout<<pop()<<endl;
    display();
    return 0;
}