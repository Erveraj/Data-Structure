//Program to demonstrate stack operations in C++
#include <iostream>
#include <stack>
using namespace std;
int main() {
stack<int> rollno;
rollno.push(123);
rollno.push(456);
rollno.push(789);
// Displaying all elements in the stack
cout << "Elements in stack: ";
while (!rollno.empty()) {
cout << rollno.top() << " ";
rollno.pop();   
    }
}