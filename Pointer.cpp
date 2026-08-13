
#include <iostream>
using namespace std;

void swapWithPointers(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	// basic pointer usage
	int x = 10;
	int *p = &x; // p holds address of x
	cout << "Value of x: " << x << "\n";
	cout << "Address of x: " << &x << "\n";
	cout << "Pointer p: " << p << "\n";
	cout << "Dereferenced p: " << *p << "\n\n";

	// modifying value through pointer
	*p = 20;
	cout << "After *p = 20, x = " << x << "\n\n";

	// pointer to pointer
	int **pp = &p;
	cout << "Pointer to pointer pp: " << pp << "\n";
	cout << "Dereferenced pp (*pp): " << *pp << " (address of x)\n";
	cout << "Double dereference (**pp): " << **pp << " (value of x)\n\n";

	// swapping using pointers
	int a = 5, b = 7;
	cout << "Before swap: a=" << a << " b=" << b << "\n";
	swapWithPointers(&a, &b);
	cout << "After swap:  a=" << a << " b=" << b << "\n\n";

	// dynamic allocation
	int *arr = new int[3];
	for (int i = 0; i < 3; ++i) arr[i] = (i + 1) * 10;
	cout << "Dynamic array contents: ";
	for (int i = 0; i < 3; ++i) cout << arr[i] << (i+1<3?", ":"\n");
	delete[] arr;

	// pointer arithmetic example
	int nums[3] = {100, 200, 300};
	int *q = nums; // points to nums[0]
	cout << "nums[0] via q: " << *q << "\n";
	q++; // move to next element
	cout << "nums[1] via q after q++: " << *q << "\n";

	return 0;
}
