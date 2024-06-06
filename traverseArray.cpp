#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int a[n]; // Declare an array of size 'n'

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    cout << "The array elements are: ";
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }

    return 0;
}
