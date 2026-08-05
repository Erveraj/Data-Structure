// C++ Program to illustrate the 3D Array
#include <iostream>
using namespace std;

int main() {
    // 3D array declaration
    int arr[2][2][2] = {
        {
            {10, 20},
            {30, 40}
        },
        {
            {50, 60},
            {0, 0}   // Remaining elements are initialized to 0
        }
    };

    // Printing elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}