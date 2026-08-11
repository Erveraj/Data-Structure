//Program No 2: for using Array Traversal, Insertion and Deletion operations.

#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n;

    cout << "Enter initial number of elements: ";
    cin >> n;
    if (n < 0 || n > MAX_SIZE) {
        cout << "Invalid size\n";
        return 0;
    }

    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Traverse\n";
        cout << "2. Insert\n";
        cout << "3. Delete\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                if (n == 0) {
                    cout << "Array is empty\n";
                } else {
                    cout << "Array elements: ";
                    for (int i = 0; i < n; ++i) {
                        cout << arr[i] << " ";
                    }
                    cout << "\n";
                }
                break;

            case 2: {
                if (n >= MAX_SIZE) {
                    cout << "Array is full. Cannot insert.\n";
                    break;
                }
                int value, pos;
                cout << "Enter element to insert: ";
                cin >> value;
                cout << "Enter position (1 to " << n + 1 << "): ";
                cin >> pos;
                if (pos < 1 || pos > n + 1) {
                    cout << "Invalid position\n";
                } else {
                    int index = pos - 1;
                    for (int i = n; i > index; --i) {
                        arr[i] = arr[i - 1];
                    }
                    arr[index] = value;
                    n++;
                    cout << "Element inserted\n";
                }
                break;
            }

            case 3: {
                if (n == 0) {
                    cout << "Array is empty. Nothing to delete.\n";
                    break;
                }
                int pos;
                cout << "Enter position to delete (1 to " << n << "): ";
                cin >> pos;
                if (pos < 1 || pos > n) {
                    cout << "Invalid position\n";
                } else {
                    int index = pos - 1;
                    for (int i = index; i < n - 1; ++i) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                    cout << "Element deleted\n";
                }
                break;
            }

            case 4:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}
