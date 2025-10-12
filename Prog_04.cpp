#include<iostream>
using namespace std;


class areacalc{
    double pi=3.14159265358979323846;
    public: 
    inline double area_circle(double radius){
        return pi*radius*radius;
    }
    inline double area_square(double side){
        return side*side;
    }
    inline double area_Rectangle(double length, double width){
        return length*width;
    }
    inline double area_Triangle(double base, double height){
        return 0.5*base*height;
    }
};

int main(){
    areacalc calc; 

    double radius, side, length, width, base, height;

    // Calculate and display area of circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of circle: " << calc.area_circle(radius) << endl;

    // Calculate and display area of square
    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Area of square: " << calc.area_square(side) << endl;

    // Calculate and display area of rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << calc.area_Rectangle(length, width) << endl;

    // Calculate and display area of triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << calc.area_Triangle(base, height) << endl;

    return 0;
}
