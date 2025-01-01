#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the area of a rectangle
double area(double length, double width) {
    return length * width;
} 

// Function to calculate the area of a triangle
double areaTriangle(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the surface area of a sphere
double area(double radius) {
    return 4 * 3.1415 * radius * radius;
}
int main() {
    double length, width, base, height, radius;

    cout <<"Enter lenth and width of the rectangle : ";
    cin >> length >> width;
    cout << "Area of rectangle : " << area(length, width) << endl;

    cout <<"Enter base and height of the triangle : ";
    cin >> base >> height;
    cout << "Area of triangle : " << areaTriangle(base, height) << endl;

    cout <<"Enter radius of the sphere : ";
    cin >> radius;
    cout <<"Surface area of sphere : " << area(radius) << endl;

    return 0;
}