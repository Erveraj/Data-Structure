// Program No. 13: Program for using the concept of pointer to string

#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string *ptr = &str;

    cout << "String = " << *ptr << endl;
    cout << "Address of string = " << ptr;

    return 0;
}