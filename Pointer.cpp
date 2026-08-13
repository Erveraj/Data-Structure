// C++ program to demonstrate the use of pointers

#include<iostream>
using namespace std;
int main(){
	string food = "Pizza";
	cout << food << endl;
	cout << &food << endl;
	
// create a pointer variable that holds the address of food
	string* ptr = &food;
	cout << &ptr << endl;
	cout << ptr << endl;
	
}