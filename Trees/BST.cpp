#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node *right;
    Node *left;
    Node(int data) {
        this->val = data;
        this->right = nullptr;
        this->left = nullptr;
    }
};

class BST {
    Node *root;
    public:
    BST() {
        root = nullptr;
    }
    void populate() {
        cout<<"Enter the value in root node: ";
        int data;
        cin>>data;
        root = new Node(data);
        populate(root);
    }
    private:
    void populate(Node *node) {
        cout<<"Do you want to enter the left of "<<node->val<<endl;
        bool left;
        cin>> left;
        if(left) {
            cout<<"Enter the value of the left of this node "<<node->val<<endl;
            int value;
            cin>> value;
            node->left = new Node(value);
            populate(node->left);
        }
        cout<<"Do you want to enter the right of "<<node->val<<endl;
        bool right;
        cin>>right;
        if(right) {
            cout<<"Enter the value of the right of this node "<<node->val<<endl;
            int value;
            cin>> value;
            node->right = new Node(value);
            populate(node->right);
        }
    }
    public: 
    void display() {
        display("", root, false);
    }
    private:
    void display(const string &prefix, const Node *node,bool isLeft) {
        if(node != nullptr) {
            cout<<prefix;
            cout<<(isLeft? "|(L)->" : "|(R)->");
            cout<<node->val<<endl;
            display(prefix + (isLeft ? "|   " : "   "), node->left, true);
            display(prefix + (isLeft ? "|   " : "   "), node->right, false);
        }
    }
};

int main () {
    BST tree;
    tree.populate();
    tree.display();
}