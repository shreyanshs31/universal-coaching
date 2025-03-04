#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val) {
        this->data = val;
        this->next = nullptr;
    }
};
class CLL{
    Node *head;
    public:
    CLL() {
        head = nullptr;
    }
    void insert(int val) {
        Node *newNode = new Node(val);
        if(!head) {
            head = newNode;
            newNode->next = head;
            return;
        }
        Node *temp = head;
        while(temp->next!= head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = head;
    }
    void remove(int val) {
        if(!head) {
            cout<<"List is empty!!!";
            return;
        }
        Node *temp = head;
        Node *last = nullptr;
        while(temp->data != val) {
            last = temp;
            temp = temp->next;
        }
        if(temp == head) {
            head = head->next;
        }
        if(temp->next = head) {
            last->next = head;
        }
        last->next = temp->next;
        delete temp;
    }
    void display() {
        Node *temp = head;
        do
        {
            cout<<temp->data<<"->";
            temp = temp->next;
        } while (temp != head);
        cout<<"END"<<endl;
    }
};
int main() {
    CLL list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();
    return 0;
}