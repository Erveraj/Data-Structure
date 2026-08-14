#include <iostream>
using namespace std;

int main()
{
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos, value;

    // Display original array
    cout << "Original Array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Insertion
    pos = 2;
    value = 25;

    for (int i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = value;
    n++;

    cout << "\nAfter Insertion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    // Deletion
    pos = 3;

    for (int i = pos; i < n - 1; i++)
        arr[i] = arr[i + 1];

    n--;

    cout << "\nAfter Deletion: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}