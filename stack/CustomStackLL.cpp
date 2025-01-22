#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int num) {
        this->data = num;
        this->next = nullptr;
    }
};

class Stackll {
    Node* head;
    public:
    Stackll() {
        this->head = nullptr;
    }
    bool isEmpty() {
        return head == nullptr;
    }
    void push(int num) {
        Node* new_node = new Node(num);
        if(!new_node) {
            cout<<"\nStack Overflow"<<endl;
        }
        new_node->next = head;
        head = new_node;
    }
    void pop() {
        if(isEmpty()){
            cout<<"\nStack Underflow"<<endl;
        }
        else {
            Node* temp;
            temp = head;
            head = head->next;
            cout<<"\nThe poped value is: "<<temp->data<<endl;
            delete temp;
        }  
    }
    int peek() {
        if(!isEmpty()) {
            return head->data;
        }
        else{
            cout<<"The stack is empty"<<endl;
            return -1; 
        }
    }
    void display() {
        Node* temp;
        temp = head;
        while(temp!= nullptr) {
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main() {
    Stackll st;
    st.push(44);
    st.push(3); 
    st.push(5); 
    st.push(96); 
    st.push(43); 
    st.push(22);
    st.pop();
    st.pop();
    cout<<"Top element is "<<st.peek()<<endl;
    st.display();
    st.pop();
    st.display();
    st.pop();
    st.pop();
    st.pop();
    // st.pop();
    cout<<st.peek()<<endl;
    // st.sizeofstack();
    return 0;
}