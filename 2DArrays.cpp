#include <iostream>
using namespace std;
int main() {
   //int rows = 4, cols = 4;
    // Fill the array with non-random numbers (e.g., sequential numbers)
    cout << "2D Array with Non-Random Numbers:\n";
    //int value = 1; // Starting value
    int array[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4;  j++) {
            cout << array[i][j] << "\t";
        }
        cout << "\n";
    }
    return 0;
}
