#include <bits/stdc++.h>
using namespace std;


class Node{
    public:
    int val;
    Node *next;
    Node(int val) {
        this->val = val;
        this->next = nullptr;
    }
};

class LL{
    private:
    Node *head;
    public:
    LL() {
        head = nullptr;
    }

    void insertAtHead(int data) {

        Node *newNode = new Node(data);

        if (head == NULL) {
            head = newNode;
            return;
        }

        newNode->next = this->head;
        this->head = newNode;
    }

    void insertAtLast(int data) {
        Node *newnode = new Node(data);
        if (head == NULL) {
            head = newnode;
            return;
        }

        Node *temp = head;

        while(temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newnode;
    }
    void remove(int data) {
        Node *pre = nullptr;
        Node *temp = head;
        while(temp->val != data) {
            pre = temp;
            temp = temp->next;
        }
        pre->next = temp->next;
        delete temp;
    }

    void print() {
        Node *temp = head;

        if(head == NULL) {
            cout<<"The list is empty"<<endl;
            return;
        }
        while(temp != NULL) {
            cout<<temp->val<<"->";
            temp = temp->next;
        }
        cout<<"END"<<endl;
    }
};

int main() {
    LL list;
    list.insertAtLast(3);
    list.insertAtLast(2);
    list.insertAtLast(1);
    list.print();
    list.remove(2);
    list.print();
    return 0;
}