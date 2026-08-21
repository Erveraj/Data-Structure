#include <iostream>  // This heardfile use for innput and output funtion.
#include <stack>     // This headerfile use for the stack
using namespace std;    // This alow us to use i/p and o/p funx withou :: Soperesolution operator 
int main(){             // Main function
stack<string> StudentName;      //We are creating a stack
StudentName.push("Garima");     // We are storing an data into our stack
StudentName.push("Ridhima");
StudentName.push("Sahil");
StudentName.push("Dimpy");
cout<< "The size of stack: " <<StudentName.size()<<endl;
cout<< "Top element of Stack: " <<StudentName.top()<<endl;
StudentName.pop();  // pop dimpy from stack
StudentName.pop();  // pop sahil from stack
StudentName.pop();  // pop ridhima from stack
cout<< "Top element after pop(): " <<StudentName.top()<<endl;
cout<< "Size of stack after pop(): " <<StudentName.size()<<endl;
StudentName.push("Ridhima");  // push ridhima into stack
StudentName.push("Dimpy");    // push dimpy into stack
cout<< "Top element after push(): " <<StudentName.top()<<endl;
cout<< "Size of stack after push(): " <<StudentName.size()<<endl;
cout<< "Is Stack is Empty: " <<(StudentName.empty() ? "True" : "False") <<endl;

// Print all the elements of stack

while(!StudentName.empty()){  // check stack is empty or not
    cout<< StudentName.top()<<endl;  // print top element of stack
    StudentName.pop();  // pop top element from stack
}
cout<<"\n After printing all the elements of stack, size of stack is: " <<StudentName.size()<<endl;
StudentName.push("Krish");  // push krish into stack
StudentName.push("Sahil");  // push sahil into stack

while(!StudentName.empty()){  // check stack is empty or not
    cout<< "\n"<< StudentName.top()<<endl;  // print top element of stack
    StudentName.pop();  // pop top element from stack
}
}