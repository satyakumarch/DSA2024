#include<iostream>
using namespace std;

const double PI = 3.1416;

class RadiusOfCircle {
    private:
        int radius;

    public:
        RadiusOfCircle(int radius): radius(radius) {}  // Constructor to initialize radius

        double calculateArea() {
            return PI * radius * radius;
        }

        double calculateCircumference() {
            return 2 * PI * radius;
        }

        double calculateDiameter() {
            return 2 * radius;
        }
};

int main() {
    int r;
    cout << "Enter radius: ";
    cin >> r;
    
    // Create an object of the RadiusOfCircle class
    RadiusOfCircle circle(r);
    
    // Calling methods and displaying results
    cout << "Area: " << circle.calculateArea() << endl;
    cout << "Circumference: " << circle.calculateCircumference() << endl;
    cout << "Diameter: " << circle.calculateDiameter() << endl;

    return 0;
}
