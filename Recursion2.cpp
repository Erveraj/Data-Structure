#include <iostream>
using namespace std;

int factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;
    if (number < 0) {
        cout << "Please enter a non-negative integer." << endl;
        return 1;
    }
    cout << "Factorial of " << number << " is " << factorial(number) << endl;
    return 0;
}
