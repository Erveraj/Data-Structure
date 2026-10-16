// Program No. 29: Program to Implement a Doubly Linked List
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

int main() {
    Node* first = new Node{10, NULL, NULL};
    Node* second = new Node{20, first, NULL};
    Node* third = new Node{30, second, NULL};

    first->next = second;
    second->next = third;

    Node* temp = first;

    cout << "Doubly Linked List: ";
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}
