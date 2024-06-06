#include<iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int array[n]; // Declare an array of size 'n'

    cout << "Enter " << n << " numbers: ";
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    // Element to add at the beginning
    int element_to_add;
    cout << "Enter the element to add at the beginning: ";
    cin >> element_to_add;

    // Shift all elements one position to the right
    for (int i = n; i > 0; --i) {
        array[i] = array[i - 1];
    }

    // Add the element at the beginning
    array[0] = element_to_add;

    cout << "Updated Array: ";
    for (int i = 0; i <= n; ++i) {
        cout << array[i] << " ";
    }

    return 0;
}
