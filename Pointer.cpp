#include<iostream>
using namespace std;
int main(){
	string food = "Pizza";
	cout << food << endl;
	cout << &food << endl;

	string* ptr = &food;
	cout << &ptr << endl;
	cout << ptr << endl;
	
}