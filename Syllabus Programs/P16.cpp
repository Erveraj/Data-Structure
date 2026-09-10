// Program No. 16: Program to find the number of vowels, consonants, digits and white spaces in a string

#include <iostream>
using namespace std;

int main()
{
    string str;
    int vowels = 0;
    int consonants = 0;
    int digits = 0;
    int spaces = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == ' ')
        {
            spaces++;
        }
        else if (ch >= '0' && ch <= '9')
        {
            digits++;
        }
        else if (ch == 'a' || ch == 'e' || ch == 'i' ||
                 ch == 'o' || ch == 'u' ||
                 ch == 'A' || ch == 'E' || ch == 'I' ||
                 ch == 'O' || ch == 'U')
        {
            vowels++;
        }
        else
        {
            consonants++;
        }
    }

    cout << "Vowels = " << vowels << endl;
    cout << "Consonants = " << consonants << endl;
    cout << "Digits = " << digits << endl;
    cout << "White spaces = " << spaces << endl;

    return 0;
}