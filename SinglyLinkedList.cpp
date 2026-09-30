#include <iostream>              // Includes the iostream library for input and output operations

using namespace std;             // Allows us to use cout, cin, etc. without writing std::

// Singly Linked List Node Structure
class Node {                     // Defines a class named Node
public:                          // Makes the following members accessible from outside the class

    int data;                    // Stores the data/value of the node

    Node* next;                  // Stores the address of the next node

    // Constructor to initialize a new node
    Node(int new_data) {         // Constructor receives the data for the new node

        this->data = new_data;   // Stores the given data in the current node

        this->next = nullptr;    // Initially, the node does not point to any other node
    }                            // End of constructor
};                               // End of Node class

int main() {                     // Main function where program execution begins

    // Create the first node
    Node* head = new Node(10);   // Creates a new node containing 10 and stores its address in head

    // Link the second node
    head->next = new Node(20);   // Creates a new node containing 20 and connects it to the first node

    // Link the third node
    head->next->next = new Node(30); // Creates a new node containing 30 and connects it to the second node

    // Link the fourth node
    head->next->next->next = new Node(40); // Creates a new node containing 40 and connects it to the third node
    
    // Link the fifth node
    head->next->next->next->next = new Node(50); // Creates a new node containing 50 and connects it to the fourth node

    // Create a temporary pointer for traversing the linked list
    Node* temp = head;           // temp starts from the first node (head)

    // Traverse the linked list until the end
    while (temp != nullptr) {    // Continue the loop as long as temp points to a valid node

        cout << temp->data << " "; // Print the data stored in the current node

        temp = temp->next;       // Move temp to the next node
    }                            // End of while loop

    return 0;                    // Indicates that the program executed successfully
}                                // End of main function