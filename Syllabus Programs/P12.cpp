// Program No. 12: Program to concatenate and compare two strings using user-defined functions

#include <iostream>
using namespace std;

string concatenate(string a, string b)
{
    return a + b;
}

int compareString(string a, string b)
{
    if (a == b)
        return 0;
    else if (a > b)
        return 1;
    else
        return -1;
}

int main()
{
    string s1, s2;

    cout << "Enter first string: ";
    getline(cin, s1);

    cout << "Enter second string: ";
    getline(cin, s2);

    cout << "Concatenated string = ";
    cout << concatenate(s1, s2) << endl;

    int result = compareString(s1, s2);

    if (result == 0)
        cout << "Both strings are equal.";
    else if (result == 1)
        cout << "First string is greater.";
    else
        cout << "Second string is greater.";

    return 0;
}