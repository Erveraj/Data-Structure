//How to Change the Top Element in stack
#include <iostream>
#include <stack>
using namespace std;

int main() {
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
}