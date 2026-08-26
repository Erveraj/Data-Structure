#include <iostream>
using namespace std;

class TwoStacks
{
    int *arr;
    int size;
    int top1;
    int top2;

public:

    // Constructor
    TwoStacks(int n)
    {
        size = n;
        arr = new int[size];

        // S1 starts from left
        top1 = -1;

        // S2 starts from right
        top2 = size;
    }

    // Push element into Stack 1
    void push1(int value)
    {
        // Check overflow
        if (top1 + 1 == top2)
        {
            cout << "Stack Overflow!" << endl;
            return;
        }

        top1++;
        arr[top1] = value;
    }

    // Push element into Stack 2
    void push2(int value)
    {
        // Check overflow
        if (top1 + 1 == top2)
        {
            cout << "Stack Overflow!" << endl;
            return;
        }

        top2--;
        arr[top2] = value;
    }

    // Pop from Stack 1
    int pop1()
    {
        if (top1 == -1)
        {
            cout << "Stack 1 Underflow!" << endl;
            return -1;
        }

        int value = arr[top1];
        top1--;

        return value;
    }

    // Pop from Stack 2
    int pop2()
    {
        if (top2 == size)
        {
            cout << "Stack 2 Underflow!" << endl;
            return -1;
        }

        int value = arr[top2];
        top2++;

        return value;
    }

    // Display entire array
    void display()
    {
        cout << "\nArray: ";

        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }

        cout << endl;

        cout << "Top1 = " << top1 << endl;
        cout << "Top2 = " << top2 << endl;
    }
};

int main()
{
    TwoStacks s(8);

    // Stack 1
    s.push1(123);
    s.push1(345);
    s.push1(456);

    // Stack 2
    s.push2(654);
    s.push2(543);
    s.push2(321);

    s.display();

    return 0;
}