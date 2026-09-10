// Program No. 15: Program to delete all repeated words in string

#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string str, word;
    string words[50];
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, str);

    stringstream ss(str);

    while (ss >> word)
    {
        bool found = false;

        for (int i = 0; i < count; i++)
        {
            if (words[i] == word)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            words[count] = word;
            count++;
        }
    }

    cout << "String after removing repeated words: ";

    for (int i = 0; i < count; i++)
    {
        cout << words[i] << " ";
    }

    return 0;
}