//Program No. 30: Program to Implement a Binary Search Tree
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* insert(Node* root, int value) {
    if (root == NULL) {
        Node* temp = new Node{value, NULL, NULL};
        return temp;
    }

    if (value < root->data)
        root->left = insert(root->left, value);
    else
        root->right = insert(root->right, value);

    return root;
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

int main() {
    Node* root = NULL;

    root = insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 10);
    insert(root, 25);

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}
