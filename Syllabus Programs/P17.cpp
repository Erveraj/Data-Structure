// Program No. 17: Program to find the length of the longest repeating sequence in a string

#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    if (str.length() == 0)
    {
        cout << "String is empty.";
        return 0;
    }

    int current = 1;
    int longest = 1;

    for (int i = 1; i < str.length(); i++)
    {
        if (str[i] == str[i - 1])
        {
            current++;
        }
        else
        {
            current = 1;
        }

        if (current > longest)
            longest = current;
    }

    cout << "Length of longest repeating sequence = "
         << longest;

    return 0;
}