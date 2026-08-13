// C++ program to demonstrate the use of pointers

#include<iostream>
using namespace std;
int main(){
	/*
	string food = "Pizza";
	cout << food << endl;
	cout << &food << endl;
	
// create a pointer variable that holds the address of food
	string* ptr = &food;
	cout << &ptr << endl;
	cout << ptr << endl;
	*/

	int i=10, j=40, k=10;
	cout<< "Sum of i, j, and k: " << i + j + k <<endl;
	cout<<"Address of i: " << &i << "\n" << "Address of j: " << &j << "\n" << "Address of k: " << &k <<endl;
	int* ptr = &j;
	cout << "Address stored in ptr: " << ptr << endl;
	cout << "Value pointed to by ptr: " << *ptr << endl;
	
}