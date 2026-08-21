//How to Change the Top Element in stack
#include <iostream>
#include <stack>
using namespace std;

int main() {
  // Create a stack of strings called Students
  stack<string> Students;

  // Add elements to the stack
    Students.push("Disha");
    Students.push("Diya");
    Students.push("Dhiren");
    Students.push("Diksha");

    cout<< "The size of the stack is: " << Students.size() << endl;
  cout << Students.top();
  return 0;

  //stack<int> model;

  
  
}