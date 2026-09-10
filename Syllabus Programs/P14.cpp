// Program No. 14: Program to reverse a sentence by recursion

#include <iostream>
using namespace std;

void reverseString(string str, int index)
{
    if (index < 0)
        return;

    cout << str[index];

    reverseString(str, index - 1);
}

int main()
{
    string str;

    cout << "Enter a sentence: ";
    getline(cin, str);

    cout << "Reverse sentence = ";
    reverseString(str, str.length() - 1);

    return 0;
}