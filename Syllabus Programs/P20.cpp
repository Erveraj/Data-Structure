// Program No. 20: Program for implementing Stack using pointer

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

Node *top = NULL;

void push(int value)
{
    Node *newNode = new Node;

    newNode->data = value;
    newNode->next = top;

    top = newNode;

    cout << "Element inserted.\n";
}

void pop()
{
    if (top == NULL)
    {
        cout << "Stack Underflow\n";
    }
    else
    {
        Node *temp = top;

        cout << "Deleted element = " << top->data << endl;

        top = top->next;

        delete temp;
    }
}

void display()
{
    if (top == NULL)
    {
        cout << "Stack is empty.\n";
    }
    else
    {
        Node *temp = top;

        cout << "Stack elements: ";

        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
}

int main()
{
    int choice, value;

    do
    {
        cout << "\n1. Push";
        cout << "\n2. Pop";
        cout << "\n3. Display";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "Program ended.";
                break;

            default:
                cout << "Invalid choice.";
        }

    } while (choice != 4);

    return 0;
}