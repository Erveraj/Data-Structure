#include <iostream>
using namespace std;

int main() {
    int a[20] = {10, 20, 30, 40, 50}, n = 5, pos = 2, value = 25;

    // Insertion
    for (int i = n; i > pos; i--)
        a[i] = a[i - 1];

    a[pos] = value;
    n++;

    cout << "After insertion: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    // Deletion
    pos = 3;
    for (int i = pos; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    cout << "\nAfter deletion: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
