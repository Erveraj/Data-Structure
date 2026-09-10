// Program No. 23: Program for implementing Queue using array

#include <iostream>
using namespace std;

int queueArray[5];

int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == 4)
    {
        cout << "Queue Overflow\n";
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queueArray[rear] = value;

        cout << "Element inserted.\n";
    }
}

void dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue Underflow\n";
    }
    else
    {
        cout << "Deleted element = "
             << queueArray[front] << endl;

        front++;

        if (front > rear)
        {
            front = -1;
            rear = -1;
        }
    }
}

void display()
{
    if (front == -1)
    {
        cout << "Queue is empty.\n";
    }
    else
    {
        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++)
            cout << queueArray[i] << " ";

        cout << endl;
    }
}

int main()
{
    int choice, value;

    do
    {
        cout << "\n1. Enqueue";
        cout << "\n2. Dequeue";
        cout << "\n3. Display";
        cout << "\n4. Exit";

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
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