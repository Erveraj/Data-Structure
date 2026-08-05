// C++ program to demonstrate dynamic memory allocation

#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    int *marks = new int[n];

    cout << "Enter Marks:\n";

    for(int i=0; i<n; i++)
    {
        cin >> marks[i];
    }

    cout << "\nMarks are:\n";

    for(int i=0; i<n; i++)
    {
        cout << marks[i] << " ";
    }

    delete[] marks;

    return 0;
}