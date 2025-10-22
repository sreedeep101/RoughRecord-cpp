#include<iostream>
using namespace std;


class areacalc{
    double pi=3.14159265358979323846;
    public: 
    double area(double radius){
        return pi*radius*radius;
    }
    float area(float side){
        return side*side;
    }
    double area(double length, double width){
        return length*width;
    }
    float area(float base, float height){
        return 0.5*base*height;
    }
};

int main(){
    areacalc calc; 

    double radius, length, width;
    float side, base, height;

    // Calculate and display area of circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of circle: " << calc.area(radius) << endl;

    // Calculate and display area of square
    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Area of square: " << calc.area(side) << endl;

    // Calculate and display area of rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << calc.area(length, width) << endl;

    // Calculate and display area of triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << calc.area(base, height) << endl;

    return 0;
}
