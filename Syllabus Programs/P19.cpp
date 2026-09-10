// Program No. 19: Program for implementing Stack using array

#include <iostream>
using namespace std;

int stackArray[5];
int top = -1;

void push(int value)
{
    if (top == 4)
    {
        cout << "Stack Overflow\n";
    }
    else
    {
        top++;
        stackArray[top] = value;
        cout << "Element inserted.\n";
    }
}

void pop()
{
    if (top == -1)
    {
        cout << "Stack Underflow\n";
    }
    else
    {
        cout << "Deleted element = " << stackArray[top] << endl;
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        cout << "Stack is empty.\n";
    }
    else
    {
        cout << "Stack elements: ";

        for (int i = top; i >= 0; i--)
            cout << stackArray[i] << " ";

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