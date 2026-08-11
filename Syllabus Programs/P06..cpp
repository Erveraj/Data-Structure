//Program No 6: Program to perform linear search in 1D and 2D arrays.
#include <iostream>
using namespace std;

// Linear search in 1D array
int linearSearch1D(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

// Linear search in 2D array
bool linearSearch2D(int arr[][4], int rows, int cols, int target, int &row, int &col) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] == target) {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}

int main() {
    // 1D Array Linear Search
    cout << "===== Linear Search in 1D Array =====" << endl;
    int arr1D[] = {10, 23, 45, 70, 11, 15, 82, 90};
    int size1D = 8;
    int target1D = 70;
    
    int result1D = linearSearch1D(arr1D, size1D, target1D);
    if (result1D != -1) {
        cout << "Element " << target1D << " found at index: " << result1D << endl;
    } else {
        cout << "Element " << target1D << " not found in array" << endl;
    }
    
    // 2D Array Linear Search
    cout << "\n===== Linear Search in 2D Array =====" << endl;
    int arr2D[][4] = {
        {10, 23, 45, 70},
        {11, 15, 82, 90},
        {5, 8, 12, 20},
        {35, 40, 50, 60}
    };
    int rows = 4, cols = 4;
    int target2D = 82;
    int foundRow = -1, foundCol = -1;
    
    if (linearSearch2D(arr2D, rows, cols, target2D, foundRow, foundCol)) {
        cout << "Element " << target2D << " found at position: (" 
             << foundRow << ", " << foundCol << ")" << endl;
    } else {
        cout << "Element " << target2D << " not found in 2D array" << endl;
    }
    
    return 0;
}