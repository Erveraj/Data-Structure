#include <iostream>
#include <stdlib.h>

using namespace std;

class twoStacks
{
    int *arr;
    int size;
    int mid;
    int top1, top2;

  public:
    twoStacks(int n)
    {
        size = n;
        arr = new int[n];
        mid = n / 2;

        // top1 starts from 0
        top1 = -1;

        // top2 starts from mid
        top2 = mid - 1;
    }

    void push1(int x)
    {
        if (top1 == mid - 1)
        {
            // top1 reaches middle of the array
            // so stack1 is full
            return;
        }
        top1++;
        arr[top1] = x;
    }

    void push2(int x)
    {
        if (top2 == size - 1)
        {
            // top2 reaches end of the array
            // so stack2 is full
            return;
        }
        top2++;
        arr[top2] = x;
    }

    int pop1()
    {
        if (top1 == -1)
        {
            // that means stack1 in empty so return -1
            return -1;
        }
        int ele = arr[top1];
        top1--;
        return ele;
    }

    int pop2()
    {
        if (top2 == mid - 1)
        {
            // that means stack2 in empty so return -1
            return -1;
        }
        int ele = arr[top2];
        top2--;
        return ele;
    }
};

int main()
{
    twoStacks ts(5);
    ts.push1(2);
    ts.push1(3);
    ts.push2(4);
    cout << ts.pop1() << " ";
    cout << ts.pop2() << " ";
    cout << ts.pop2() << " ";
    return 0;
}