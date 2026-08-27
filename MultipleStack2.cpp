#include <iostream>
using namespace std;

#define SIZE 8

int main()
{
    int arr[SIZE];

    int top1 = -1;      // Stack 1 starts from left
    int top2 = SIZE;    // Stack 2 starts from right

    // Push elements into Stack 1
    top1++;
    arr[top1] = 123;

    top1++;
    arr[top1] = 345;

    top1++;
    arr[top1] = 456;


    // Push elements into Stack 2
    top2--;
    arr[top2] = 654;

    top2--;
    arr[top2] = 543;

    top2--;
    arr[top2] = 321;


    // Display array
    cout << "Array elements are:\n";

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Index " << i << " = ";

        if (i <= top1 || i >= top2)
            cout << arr[i];
        else
            cout << "Empty";

        cout << endl;
    }

    cout << "\nTop of Stack 1 = " << arr[top1] << endl;
    cout << "Top of Stack 2 = " << arr[top2] << endl;

    return 0;
}