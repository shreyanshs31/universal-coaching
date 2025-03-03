#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node *next;
    Node *prev;
    Node(int data) {
        this->value = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class DLL{
    Node *head;
    public:
    DLL(){
        head = nullptr;
    }
    void insert(int data) {
        Node *newNode = new Node(data);
        if(!head) {
            head = newNode;
            newNode->prev = head;
            return;
        }
        Node *temp = head;
        while(temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    void display() {
        Node *temp = head;
        if(!head) {
            cout<<"list is empty"<<endl;
            return;
        }
        while(temp != nullptr) {
            cout<<temp->value<<"->";
            temp = temp->next;
        }
        cout<<"END"<<endl;
    }
    void remove(int data) {
        Node *temp = head;
        Node *last = nullptr;
        while (temp->value != data) {
            last = temp;
            temp = temp->next;
        }
        if(temp==head) {
            head = temp->next;
            return;
        }
        if(temp->next == nullptr) {
            last->next = nullptr;
            return;
        }
        last->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }
};

int main() {
    DLL list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();
    list.remove(30);
    list.display();
    return 0;
}