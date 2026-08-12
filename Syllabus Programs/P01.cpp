//Program No 1: for using Dynamic Functions  (malloc( ), calloc( ), realloc( ) and free( )) functions. 

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    // Allocate memory for 10 integers using malloc
    int *p = (int *)malloc(10 * sizeof(int));

    // Store values in allocated memory
    for (int i = 0; i <10; i++)
    {
        p[i] = i  * 2; // Store values 1, 2, 3
    }

    // Allocate memory for 3 integers using calloc
    // (All values are initialized to 0)
    int *q = (int *)calloc(3, sizeof(int));

    // Increase memory size from 3 integers to 5 integers
    /*p = (int *)realloc(p, 5 * sizeof(int));
    

    // Store new values in the extra memory
    p[3] = 4;
    p[4] = 5;*/

    cout << "malloc/realloc: ";

    // Print all 5 values
    for (int i = 0; i < 10; i++)
    {
        cout << p[i] << " ";
    }

    cout << "\ncalloc: ";

    // Print calloc values (all will be 0)
    for (int i = 0; i < 3; i++)
    {
        cout << q[i] << " ";
    }

    // Free dynamically allocated memory
    free(p);
    free(q);

    return 0;
}