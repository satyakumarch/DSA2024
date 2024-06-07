#include <iostream>
using namespace std;

int main() {
    int array[10], size, temp;
    cout << "Enter the size of an array: ";
    cin >> size;
    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {  // Corrected the loop variable
            if (array[i] > array[j]) {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    cout << "Sorted array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    return 0;
}
