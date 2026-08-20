//Program to demonstrate stack operations in C++
#include <iostream>
#include <stack>
using namespace std;
int main() {
stack<int> rollno;
rollno.push(123);
rollno.push(456);
rollno.push(789);
cout << "Top element: " << rollno.top() << endl;
cout << "Size of stack: " << rollno.size() << endl;
rollno.pop();
cout << "Top element after pop: " << rollno.top() << endl;
cout << "Is stack empty? " << (rollno.empty() ? "Yes" : "No") << endl;

cout << "\n\nMethod 2 using a string data type.\n" << endl;

stack<string> car;
car.push("BMW");
car.push("Audi");
car.push("Mercedes");
cout << "Top element: " << car.top() << endl;
cout << "Size of Stack: "<< car.size() << endl;
cout << "Is stack empty? " << (car.empty() ? "Yes" : "No") << endl;
car.pop();
cout << "Top Element after pop: "<< car.top() << endl;

/*
  // Create a stack of strings called cars
  stack<string> cars;

  // Add elements to the stack
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");
  
  // Change the value of the top element
  cars.top() = "Tesla";

  // Access the top element
  cout << cars.top();
  return 0;

*/

}

/*

Function                    Purpose
#######################################################
push()	            Adds an element to the top
pop()	            Removes the top element
top()	            Returns/shows the top element
empty()	            Checks whether the stack is empty
size()	            Returns the number of elements

*/
