//Static Memory Allocation in C++

#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {80, 85, 90, 95, 100};

    cout << "Student Marks:\n";

    for(int i=0; i<5; i++)
    {
        cout << marks[i] << " ";
    }

    return 0;
}