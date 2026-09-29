#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare the constant and variables.
    const double PI = 3.14159265359;
    double radius, angle;
    double area, circumference, arcLength;

    // Ask the user for the radius and central angle.
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    cout << "Enter the central angle in degrees: ";
    cin >> angle;

    // Calculate the three measurements.
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    arcLength = (angle / 360.0) * 2 * PI * radius;

    // Display the results with two decimal places.
    cout << fixed << setprecision(2);
    cout << "\nCircle Calculations\n";
    cout << "-------------------\n";
    cout << "Radius: " << radius << endl;
    cout << "Angle: " << angle << " degrees\n\n";
    cout << "Area: " << area << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Arc Length: " << arcLength << endl;

    return 0;
}
