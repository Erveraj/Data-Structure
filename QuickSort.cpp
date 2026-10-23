//Program to implement Quick Sort algorithm in C++    
#include <iostream>
using namespace std;

void quickSort(int a[], int low, int high) {
    if (low >= high)
        return;

    int pivot = a[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (a[j] < pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[high]);

    int p = i + 1;
    quickSort(a, low, p - 1);
    quickSort(a, p + 1, high);
}

int main() {
    int a[] = {5, 2, 8, 1, 3};
    int n = 5;

    quickSort(a, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}
