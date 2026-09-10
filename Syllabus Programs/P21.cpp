// Program No. 21: Program for implementing Multiple Stack

#include <iostream>
using namespace std;

int arr[10];

int top1 = -1;
int top2 = 10;

void push1(int value)
{
    if (top1 + 1 == top2)
    {
        cout << "Stack is full.\n";
    }
    else
    {
        top1++;
        arr[top1] = value;
        cout << "Element inserted in Stack 1.\n";
    }
}

void push2(int value)
{
    if (top1 + 1 == top2)
    {
        cout << "Stack is full.\n";
    }
    else
    {
        top2--;
        arr[top2] = value;
        cout << "Element inserted in Stack 2.\n";
    }
}

void pop1()
{
    if (top1 == -1)
    {
        cout << "Stack 1 is empty.\n";
    }
    else
    {
        cout << "Deleted from Stack 1 = " << arr[top1] << endl;
        top1--;
    }
}

void pop2()
{
    if (top2 == 10)
    {
        cout << "Stack 2 is empty.\n";
    }
    else
    {
        cout << "Deleted from Stack 2 = " << arr[top2] << endl;
        top2++;
    }
}

void display()
{
    cout << "Stack 1: ";

    for (int i = top1; i >= 0; i--)
        cout << arr[i] << " ";

    cout << "\nStack 2: ";

    for (int i = top2; i < 10; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int choice, value;

    do
    {
        cout << "\n1. Push Stack 1";
        cout << "\n2. Pop Stack 1";
        cout << "\n3. Push Stack 2";
        cout << "\n4. Pop Stack 2";
        cout << "\n5. Display";
        cout << "\n6. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                push1(value);
                break;

            case 2:
                pop1();
                break;

            case 3:
                cout << "Enter value: ";
                cin >> value;
                push2(value);
                break;

            case 4:
                pop2();
                break;

            case 5:
                display();
                break;

            case 6:
                cout << "Program ended.";
                break;

            default:
                cout << "Invalid choice.";
        }

    } while (choice != 6);

    return 0;
}