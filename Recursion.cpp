// C++ program to demonstrate recursion
#include <iostream>
using namespace std;

void printNumbers(int n) {
    if (n > 5) {
        return;
    }
    cout << n << " ";
    printNumbers(n + 1);
}

int main() {
    printNumbers(1);
   cout <<"\nThis is a recursive function " << endl;
    return 0;
}