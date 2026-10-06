#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;
    Node* left, * right;

    Node(int key) {
        data = key;
        left = nullptr;
        right = nullptr;
    }
};

int main(){
    // Initilize and allocate memory for tree nodes
    Node* firstNode = new Node(2);
    Node* secondNode = new Node(3);
    Node* thirdNode = new Node(4);
    Node* fourthNode = new Node(5);

    // Connect binary tree nodes
    firstNode->left = secondNode;
    firstNode->right = thirdNode;
    secondNode->left = fourthNode;

    //Display binary tree

    cout << "Root Node: " << firstNode->data << endl;
    cout << "Left Child of Root Node: " << firstNode->left->data << endl;
    cout << "Right Child of Root Node: " << firstNode->right->data << endl;
    cout << "Left Child of Left Child of Root Node: " << firstNode->left->left->data << endl;
    cout << "Right Child of Left Child of Root Node: " << firstNode->left->right << endl; // This will print nullptr since there is no right child for the second node
    return 0;
}