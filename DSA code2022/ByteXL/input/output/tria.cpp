#include<iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    // Check if the sides form a valid triangle
    if (a + b > c && b + c > a && c + a > b) {
        // Check for Equilateral triangle
        if (a == b && b == c) {
            cout << "equilateral" << endl;
        }
        // Check for Isosceles triangle
        else if (a == b || a == c || b == c) {
            cout << "isosceles" << endl;
        }
        // If neither Equilateral nor Isosceles, it must be Scalene
        else {
            cout << "scalene" << endl;
        }
    } else {
        cout << "The given sides do not form a valid triangle." << endl;
    }

    return 0;
}