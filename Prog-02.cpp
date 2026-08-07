//Prog-2: INSERT, DELETE AND TRAVERSE AN ELEMENT FROM AN ARRAY

#include <iostream>
// Easy explanation: Loads input/output tools. Real life: like bringing a microphone and screen before teaching.
using namespace std;
// Easy explanation: Allows us to write cout, cin and string directly without std::.
int main() {
// Easy explanation: Program execution starts from main(). Think of it as the main gate of the program.
    int a[20]= {
    // Easy explanation: Stores a value in an array or table position. Think of putting an item in a numbered locker.
        10,20,30,40,50
        // Easy explanation: This line supports the program logic.
    }
    // Easy explanation: Ends the current block of statements.
    ,n=5,pos=2,value=25;
    // Easy explanation: Creates or updates a value used by the program.
    for(int i=n;
    // Easy explanation: Starts a loop to repeat the same work a fixed number of times. Real life: checking every student in a row.
    i>pos;
    // Easy explanation: Executes this C++ statement.
    i--) a[i]=a[i-1];
    // Easy explanation: Decreases a counter/index by 1.
    a[pos]=value;
    // Easy explanation: Stores a value in an array or table position. Think of putting an item in a numbered locker.
    n++;
    // Easy explanation: Increases a counter/index by 1 so the program can move to the next position.
    cout<<"After insertion: ";
    // Easy explanation: Displays the result on the screen.
    for(int i=0;
    // Easy explanation: Starts a loop to repeat the same work a fixed number of times. Real life: checking every student in a row.
    i<n;
    // Easy explanation: Executes this C++ statement.
    i++) cout<<a[i]<<" ";
    // Easy explanation: Increases a counter/index by 1 so the program can move to the next position.
    pos=3;
    // Easy explanation: Creates or updates a value used by the program.
    for(int i=pos;
    // Easy explanation: Starts a loop to repeat the same work a fixed number of times. Real life: checking every student in a row.
    i<n-1;
    // Easy explanation: Executes this C++ statement.
    i++) a[i]=a[i+1];
    // Easy explanation: Increases a counter/index by 1 so the program can move to the next position.
    n--;
    // Easy explanation: Decreases a counter/index by 1.
    cout<<"
    // Easy explanation: Displays the result on the screen.
    After deletion: ";
    // Easy explanation: Executes this C++ statement.
    for(int i=0;
    // Easy explanation: Starts a loop to repeat the same work a fixed number of times. Real life: checking every student in a row.
    i<n;
    // Easy explanation: Executes this C++ statement.
    i++) cout<<a[i]<<" ";
    // Easy explanation: Increases a counter/index by 1 so the program can move to the next position.
    return 0;
    // Easy explanation: Ends the program successfully.
}
// Easy explanation: Ends the current block of statements.
