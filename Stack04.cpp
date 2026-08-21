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
  cout << "The name of Student is:"<< Students.top();
  

  stack<int> rollno;
  rollno.push(123);
  rollno.push(321);
  rollno.push(456);
  rollno.push(987);
  
  cout<<"\nThe roll no of Diksha is a: "<< rollno.top();

  
  return 0;
}