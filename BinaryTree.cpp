
#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int key) {
        data = key;
        left = nullptr;
        right = nullptr;
    }
};

int main() {
    // Create tree nodes
    Node* firstNode = new Node(6);
    Node* secondNode = new Node(3);
    Node* thirdNode = new Node(8);
    Node* fourthNode = new Node(5);

    // Connect nodes according to BST rules
    firstNode->left = secondNode;
    firstNode->right = thirdNode;
    secondNode->right = fourthNode;

    // Display tree structure
    cout << "Root Node: "
         << firstNode->data << endl;

    cout << "Left Child of Root: "
         << firstNode->left->data << endl;

    cout << "Right Child of Root: "
         << firstNode->right->data << endl;

    cout << "Right Child of Left Child of Root: "
         << firstNode->left->right->data << endl;

    return 0;
}
