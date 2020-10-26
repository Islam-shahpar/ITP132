/*
Student Name : Anton B.
Course : ITP132 (Section : 002N)
*/

#include <iostream>
#include <iomanip>

using namespace std;
const float PI = 3.14; //Pi value to be used by all modules.

void swapNumbers()
{
    //1. Write a program in C++ to swap two numbers.
    cout << "1. Swap two numbers" << endl << endl;

    int x, y; //the two numbers that will be used to swap.
    int z;

    //asks for the first number.
    cout << "Enter first number... ";
    cin >> x;

    //asks for the second number.
    cout << "Enter second number... ";
    cin >> y;

    cout << endl << "Before swap... " << x << " = " << y << endl; //show BEFORE swap.

    z = y; //save second number in a separate variable.
    y = x; //swap second number with first number.
    x = z; //swap first number with second number, saved from a separate variable.

    cout << "After swap... " << x << " = " << y << endl << endl << endl; //show swapped numbers.
}

void sphereVolume()
{
    //2. Write a program in C++ to calculate the volume of a sphere.
    cout << "2. Calculate the volume of a sphere" << endl << endl;

    float r, v; //r for RADIUS, v for VOLUME.

    //asks for r,RADIUS, value.
    cout << "Enter radius value to find volume... ";
    cin >> r;

    v = (4/3)*PI*r*r*r; //calculate formula for sphere volume.

    cout << endl << "Volume of sphere is... " << v << endl << endl << endl; //show volume output.
}

void cubeVolume()
{
    //3. Write a program in C++ to calculate the volume of a cube.
    cout << "3. Calculate the volume of a cube" << endl << endl;

    int a; //edge value.
    float v; //volume before input.

    //asks for edge value.
    cout << "Enter a edge value... ";
    cin >> a;

    v = a*a*a;

    cout << endl << "Volume of cube is... " << v << endl << endl << endl; //show volume of cube.
}

void cylinderVolume()
{
    //4. Write a program in C++ to calculate the volume of a cylinder.
    cout << "4. Calculate the volume of a cylinder" << endl << endl;

    int h, r; //height & radius values.
    float v; //volume output.

    //asks for height value.
    cout << "Enter height value... ";
    cin >> h;

    //asks for radius value.
    cout << "Enter radius value... ";
    cin >> r;

    v = PI*r*r*h; //calculate formula.

    cout << "Volume of cylinder is... " << v << endl << endl << endl; //show volume of cylinder.
}

void rectangleAreaPerimeter()
{
    //5. Write a program in C++ to find the Area and Perimeter of a Rectangle.
    cout << "5. Area and Perimeter of a Rectangle" << endl << endl;

    int l, w; //Length and Width values.
    float a, p; //Area and Perimeter values.

    //asks for length value.
    cout << "Enter length value... ";
    cin >> l;

    //asks for width value.
    cout << "Enter width value... ";
    cin >> w;

    p = 2*l+2*w; //calculate perimeter of rectangle.
    a = l*w; //calculate area of rectangle.

    //show Perimeter and Area of Rectangle.
    cout << endl << "Perimeter of rectangle is... " << p << endl << "Area of rectangle is... " << a << endl << endl;
}

void problemOne()
{
    double numA = 6.11;


    cout << "without fixed(): " << numA << endl;
    cout << "with fixed(): " << fixed << numA << endl << endl;
    cout.unsetf(ios_base::fixed);
}

void problemTwo()
{
    double numA = 2.13e7;

    cout << "without fixed(): " << numA << endl;
    cout << "with fixed(): " << fixed << numA << endl << endl;
        cout.unsetf(ios_base::fixed);
}

void problemThree()
{
    double numA = 3.21;

    cout << "without scientific(): " << numA << endl;
    cout << "with scientific(): " << scientific << numA << endl << endl;
    cout.unsetf(ios_base::scientific);
}

void problemFour()
{
    double numA = 3.142857142857;

    cout << "i) " << setprecision(5) << numA << endl;
    cout << "ii) " << setprecision(2) << numA << endl;
    cout << "iii) " << setprecision(11) << numA << endl << endl;
}

int main()
{
    swapNumbers();
    sphereVolume();
    cubeVolume();
    cylinderVolume();
    rectangleAreaPerimeter();
    problemOne();
    problemTwo();
    problemThree();
    problemFour();
    return 0;
}