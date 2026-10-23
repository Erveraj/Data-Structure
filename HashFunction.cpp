//Program to demonstrate a simple hash function
#include <iostream>
using namespace std;

int main() {
    int size = 10;
    int key;

    cout << "Enter a key: ";
    cin >> key;

    int index = key % size;

    cout << "Hash index = " << index;

    return 0;
}
