// C++ Program to illustrate 2D Array
#include <iostream>
using namespace std;

int main() {

    // Declaring and initializing a 2D array
    int arr[2][3] = {
        {10, 20, 30},
        {40, 50, 60}
    };

    cout << "2D Array:" << endl;

    // Printing the 2D array
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}