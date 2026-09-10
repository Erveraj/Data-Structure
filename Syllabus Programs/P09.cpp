// Program No. 9: Program for implementing Quick Sort

#include <iostream>
using namespace std;

void quickSort(int a[], int low, int high)
{
    if (low < high)
    {
        int pivot = a[high];
        int i = low - 1;

        for (int j = low; j < high; j++)
        {
            if (a[j] < pivot)
            {
                i++;
                swap(a[i], a[j]);
            }
        }

        swap(a[i + 1], a[high]);

        int p = i + 1;

        quickSort(a, low, p - 1);
        quickSort(a, p + 1, high);
    }
}

int main()
{
    int a[50], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    quickSort(a, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}