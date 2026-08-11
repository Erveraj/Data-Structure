//Program No 3: Program to merge two one dimensional array. 
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n1, n2;
    cout << "Enter size of first array: ";
    cin >> n1;
    vector<int> a(n1);
    cout << "Enter " << n1 << " elements for first array:\n";
    for (int i = 0; i < n1; ++i) {
            cin >> a[i];
    }

    cout << "Enter size of second array: ";
    cin >> n2;
    vector<int> b(n2);
    cout << "Enter " << n2 << " elements for second array:\n";
    for (int i = 0; i < n2; ++i) {
        cin >> b[i];
    }

    vector<int> merged;
    merged.reserve(n1 + n2);
    for (int x : a) {
        merged.push_back(x);
    }
    for (int x : b) {
        merged.push_back(x);
    }

    cout << "Merged array:\n";
    for (int x : merged) {
        cout << x << " ";
    }
    cout << '\n';
    return 0;
}