// Program No. 11: Program to calculate length of a string using user-defined function

#include <iostream>
using namespace std;

int findLength(string str)
{
    int count = 0;

    while (str[count] != '\0')
    {
        count++;
    }

    return count;
}

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Length of string = " << findLength(str);

    return 0;
}