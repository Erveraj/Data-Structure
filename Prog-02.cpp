#include <iostream>
using namespace std;

int main()
{
    // Initial array
    int arr[20] = {10, 20, 30, 40, 50};
    int n = 5;

    // -------- Insertion --------
    int pos = 2;      // Position to insert (0-based index)
    int value = 25;   // Value to insert

    // Shift elements one position to the right
    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    // Insert the new value
    arr[pos] = value;
    n++;

    cout << "After Insertion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // -------- Deletion --------
    pos = 3;   // Position to delete

    // Shift elements one position to the left
    for (int i = pos; i < n - 1; i++)
    {
        arr[i] = arr[i + 1];
    }

    n--;

    cout << "\nAfter Deletion: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
