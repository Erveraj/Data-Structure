
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

// Insert a new node
Node* insert(Node* root, int value) {
    if (root == NULL) {
        return new Node(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    }
    else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}

// Search and display position
bool search(Node* root, int key, int level, Node* parent) {
    if (root == NULL) {
        return false;
    }

    if (root->data == key) {
        cout << "\nElement found: " << key << endl;
        cout << "Level: " << level << endl;

        if (parent == NULL) {
            cout << key << " is the root node.";
        }
        else {
            cout << "Parent Node: " << parent->data << endl;

            if (key < parent->data) {
                cout << key << " is on the left side of "
                     << parent->data << ".";
            }
            else {
                cout << key << " is on the right side of "
                     << parent->data << ".";
            }
        }

        return true;
    }

    if (key < root->data) {
        return search(root->left, key, level + 1, root);
    }
    else {
        return search(root->right, key, level + 1, root);
    }
}

// Inorder traversal
void inorder(Node* root) {
    if (root == NULL) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 90);
    insert(root, 60);
    insert(root, 1);

    cout << "Inorder Traversal: ";
    inorder(root);

    int key;
    cout << "\n\nEnter element to search: ";
    cin >> key;

    if (!search(root, key, 1, NULL)) {
        cout << "Element not found in BST.";
    }

    cout << endl;
    return 0;
}

