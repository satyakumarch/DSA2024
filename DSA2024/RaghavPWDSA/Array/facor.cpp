#include <iostream>
//#include <vector>

using namespace std;

int main() {
    int number;
    
    // Prompt user to input a number
    cout << "Enter a number: ";
    cin >> number;

    // Find factors of the number
    //vector<int> factors;
    cout << "Factors of " << number << ": ";
    for (int i = 1; i <= number; ++i) {
        if (number % i == 0) {						
            factors.push_back(i);
            cout << i << " ";
        }
    }
    cout << endl;

    // Count the number of digits in the input
    int numDigits = 0;
    int tempNumber = number;
    while (tempNumber != 0) {
        tempNumber /= 10;
        numDigits++;
    }

    // Output the number of digits
    cout << "Number of digits in " << number << ": " << numDigits << endl;

    return 0;
}

