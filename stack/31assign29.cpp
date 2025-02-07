//29. How do you handle errors in a stack-based algorithm?
#include <bits/stdc++.h>
using namespace std;
#define MAX 5
class Stack{
    private:
    int arr[MAX];
    int top;

    public:
    Stack() {
        top = 0;
    }
    void push(int data) {
        try{
            if(top >= MAX-1) {
                throw overflow_error("Stack Overflow: Cannot push onto a full stack.");
            }
            arr[top++] = data;
            cout << "Pushed: " << data <<endl;
        }
        catch (const overflow_error &e) {
            cout<<e.what()<<endl;
        }
    }

    void pop() {
        try {
            if (top == 0) {
                throw underflow_error("Stack Underflow: Cannot pop from an empty stack.");
            }
            cout << "Popped: " << arr[top--] <<endl;
        } 
        catch (const underflow_error &e) {
            cout << e.what() <<endl;
        }
    }
};

int Main() {
    Stack s;
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(3);
    s.push(3);
    s.pop();
    s.pop();
    return 0;
}