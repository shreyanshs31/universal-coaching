#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
    int val;
    Node *right;
    Node *left;
    int height;
    Node(int data) {
        this->val = data;
        this->right = nullptr;
        this->left = nullptr;
        this->height = 0;
    }
};

class AVL {
    Node *root;
    public:
    AVL() {
        root = nullptr;
    }

    int height(Node *node) {
        if(node == nullptr) {
            return -1;
        }
        return node->height;
    }

    bool isEmpty() {
        return root==nullptr;
    }

    void display() {
        display(root, "Root node: ");
    }

    void insert(int data) {
        root = insert(data, root);
    }

    bool isBalanced() {
        return isBalanced(root);
    }

    void preOrder() {
        preOrder(root);
    }

    void inOrder() {
        inOrder(root);
    }

    void postOrder() {
        postOrder(root);
    }

    private:
    void display(Node *node, string details) {
        if (node == nullptr) {
            return;
        }
        cout<<details<< node->val;
        display(node->left, "\nLeft child of " + to_string(node->val) + " : ");
        display(node->right, "\nRight child of " + to_string(node->val) + " : ");
    }

    Node* insert(int data,Node *node) {
        if(node == nullptr) {
            node = new Node(data);
            return node;
        }
        if(data<node->val) {
            node->left = insert(data, node->left);
        }

        if(data>node->val) {
            node->right = insert(data, node->right);
        }
        node->height = max(height(node->left), height(node->right)) + 1;
        return rotate(node);
    }

    Node* rotate(Node *node) {
        if(height(node->left)-height(node->right)>1) {
            //left heavy
            if(height(node->left->left)-height(node->left->right)>0) {
                //left left case
                return rightRotate(node);
            }
            if(height(node->left->left)-height(node->left->right)<0) {
                //left right case
                node->left= leftRotate(node->left);
                return rightRotate(node);
            }
        }

        if(height(node->left)-height(node->right)<-1) {
            //right heavy
            if(height(node->right->left)-height(node->right->right)<0) {
                //right right case
                return leftRotate(node);
            }
            if(height(node->right->left)-height(node->right->right)>0) {
                // right left case
                node->right= rightRotate(node->right);
                return leftRotate(node);
            }
        }
        return node;
    }

    Node* rightRotate(Node *p) {
        Node *c = p->left;
        Node *t = c->right;

        c->right= p;
        p->left = t;

        p->height = max(height(p->left), height(p->right) + 1);
        c->height = max(height(c->left), height(c->right) + 1);
        return c;
    }

    Node* leftRotate(Node *c) {
        Node *p = c->right;
        Node *t = p->left;

        p->left = c;
        c->right=t;

        p->height = max(height(p->left), height(p->right) + 1);
        c->height = max(height(c->left), height(c->right) + 1);
        return p;
    }

    bool isBalanced(Node *node) {
        if(node == nullptr) {
            return true;
        }
        return abs(height(node->left) - height(node->right)) <= 1 && isBalanced(node->left) && isBalanced(node->right);
    }

    void preOrder(Node *node) {
        if(node == nullptr) {
            return;
        }
        cout<<node->val<<" ";
        preOrder(node->left);
        preOrder(node->right);
    }

    void inOrder(Node *node) {
        if(node == nullptr) {
            return;
        }
        inOrder(node->left);
        cout<<node->val<<" ";
        inOrder(node->right);
    }

    void postOrder(Node *node) {
        if(node == nullptr) {
            return;
        }
        postOrder(node->left);
        postOrder(node->right);
        cout<<node->val<<" ";
    }
};

int main() {
    AVL tree;
    tree.insert(15);
    tree.insert(5);
    tree.insert(12);
    tree.insert(10);
    tree.inOrder();
    return 0;
}