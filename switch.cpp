// C++ program to demonstrate the use of switch statement
#include <iostream>
using namespace std;

int main() {
    int age;
    
    cout << "Enter your age: ";
    cin >> age;
    switch(age >= 18) {
        case 1:  // age >= 18 is true
            cout << "You are an Adult" << endl;
            break;
        case 0:  // age >= 18 is false
            cout << "You are a Child" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
    }
    
    return 0;
}
