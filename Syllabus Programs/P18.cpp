// Program No. 18: Program to find highest and lowest frequency character in a string

#include <iostream>
using namespace std;

int main()
{
    string str;
    int frequency[256] = {0};

    cout << "Enter a string: ";
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        frequency[(unsigned char)str[i]]++;
    }

    char highest, lowest;
    int max = 0;
    int min = 9999;

    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] > max)
        {
            max = frequency[i];
            highest = char(i);
        }
    }

    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] > 0 && frequency[i] < min)
        {
            min = frequency[i];
            lowest = char(i);
        }
    }

    cout << "Highest frequency character = " << highest << endl;
    cout << "Frequency = " << max << endl;

    cout << "Lowest frequency character = " << lowest << endl;
    cout << "Frequency = " << min << endl;

    return 0;
}