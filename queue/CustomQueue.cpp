#include <bits/stdc++.h>
using namespace std;
#define len 5
int que[len];
int front = 0;
int rear = 0;
int siz = 0;
//Push takes O(1) and pop takes O(n)
class Que{
    public:
    bool isFull() {
        if(siz == len) {
            return true;
        }
        return false;
    }
    bool isEmpty() {
        if(siz == 0) {
            return true;
        }
        return false;
    }
    void push(int value) {
        if(isFull()){
            cout<<"The queue is full can't push!!"<<endl;
        }
        que[rear++] = value;
        siz++;
    }
    void pop_front() {
        if(isEmpty()) {
            cout<<"The Queue is empty can't pop!!"<<endl;
            return;
        }
        int poped_value = que[0];
        for(int i = 0; i<rear; i++) {
            que[i] = que[i+1];
        }
        rear--;
        siz--;
        cout<<poped_value<<endl;
    }
    void displayQueue() {
        for(int i = front; i<rear; i++) {
            cout<<que[i]<<"->";
        }
        cout<<"END"<<endl;
    }
    
};

int main() {
    Que q1;
    q1.push(3);
    q1.push(42);
    q1.push(29);
    q1.push(57);
    q1.push(27);
    q1.displayQueue();
    // q1.push(22);

    q1.pop_front();
    q1.pop_front();
    q1.pop_front();
    q1.displayQueue();
    return 0;
}