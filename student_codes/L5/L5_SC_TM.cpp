/*
Student Name : Talha M.
Course : ITP132 (Section : 002N)
*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

const float PI = 3.14;

void SwapNumbers() {
	//Code to swap to input numbers
	float number1;//first number
	float number2;//second number
	float numberswapper;//extra value for swap

	  //Retrieves first number
	cout << "Enter the first Number" << endl;
	cin >> number1;

	//Retrieves second number	
	cout << "Enter second number" << endl;
	cin >> number2;

	//Prints both values
	cout << "You entered " << number1 << " and " << number2 << endl;

	//Swaps the two values
	numberswapper = number2;
	number2 = number1;
	number1 = numberswapper;

	//Prints the new values
	cout << "Swapped = " << number1 << " and " << number2 << endl;
}

void VolumeofSphere() {

	//initialize radius variable
	float radius;
	//retrive radius value
	cout << "Enter the radius" << endl;
	cin >> radius;
	//Solve and output volume of spehere
	cout << "Volume of Spehere = " << PI * pow(radius, 3) * 4 / 3;

}

void VolumeofCube() {
	//initialize edge variable
	float edge;
	//retrive lenght of one edge of cube
	cout << "Enter the length of edge" << endl;
	cin >> edge;
	//Solve and output volume of Cube
	cout << "Volume of Cube = " << pow(edge, 3);
}


void VolumeofCylinder() {
	//initialize radius and height variable
	float radius;
	float height;
	//retrive radius and height values
	cout << "Enter the radius" << endl;
	cin >> radius;
	cout << "Enter the height" << endl;
	cin >> height;
	//Solve and output volume of cylinder
	cout << "Volume of Cylinder = " << PI * pow(radius, 2) * height;
}

void PerimiterandAreaofRectangle() {
	//initialize lenght and width variable
	float lenght;
	float width;
	//retrive lenght and width values
	cout << "Enter the lenght" << endl;
	cin >> lenght;
	cout << "Enter the width" << endl;
	cin >> width;
	//Solve and output Perimiter and Area
	cout << "Perimiter = " << 2 * (lenght + width) << endl;
	cout << "Area = " << lenght * width;
}

void AreaandCircumferenceofCircle() {
	//initialize radius variable
	float radius;
	//retrive radius and height values
	cout << "Enter the radius" << endl;
	cin >> radius;

	//Print Area
	cout << "Area of cirlce is = " << PI * pow(radius, 2) << endl;
	//Print Circumference
	cout << "Circumference of cirlce is = " << 2 * PI * radius;
}

void CelciustoFarenheiht() {
	//Retrieve tempreture in Celcius
	float Celcius;
	cout << "Enter Temp in Celcius" << endl;
	cin >> Celcius;
	//Convert to Farenheight
	cout << "Tempreture in Farenheit = " << Celcius * 9 / 5 + 32 << endl;
}

void FahrenheittoCelcius() {
	//Retreive tempreture in Farenheight
	float Fahrenheit;
	cout << "Enter Temp in Fahrenheit" << endl;
	cin >> Fahrenheit;
	//variables to complete equation
	float Fplus = Fahrenheit - 32;
	float x = 5.0 / 9;
	//Convert to Celcius
	cout << "Tempreture in Celcius = " << Fplus * x << endl;
}

void thirdAngleofTriangle() {
	//define first two angles
	double angle1;
	double angle2;
	cout << "enter first angle" << endl;
	cin >> angle1;
	cout << "enter the second angle" << endl;
	cin >> angle2;
	// Solve for angle three
	cout << "the third angle of the triangle is " << 180 - angle1 - angle2;
}

void KPHToMPH() {
	//define KPH
	double KPH;
	cout << "enter Kilometers per Hour" << endl;
	cin >> KPH;
	//Solve for mph
	double MPH = KPH / 1.609;
	//Display output
	cout << "Your speed is " << KPH << " kilometers per hour, which is equal to " << MPH << " miles per hour" << endl;
}

void KelvintoFahrenheit() {
	//define Kelvin
	double kelvin;
	cout << "enter tempreture in Kelvin" << endl;
	cin >> kelvin;
	//Solve for Fahrenheit
	double Fahrenheit = kelvin - 273.15 * 9 / 5 + 32;
	cout << kelvin << " kelvin is equal to " << Fahrenheit << " Fahrenheit" << endl;

}

void computeQuotientandRemainder() {
	//define the two variables
	int x;
	int y;
	cout << "input first number" << endl;
	cin >> x;
	cout << "input second number" << endl;
	cin >> y;
	//solve for quotient
	double quotient = x / y;
	//solve for remainder
	int remainder = x % y;
	//output results
	cout << "Quotient = " << quotient << " Remainder = " << remainder;
}

int main() {
    SwapNumbers();
    VolumeofSphere();
    VolumeofCube();
    VolumeofCylinder();
    PerimiterandAreaofRectangle();
    AreaandCircumferenceofCircle();
    CelciustoFarenheiht();
    FahrenheittoCelcius();
    thirdAngleofTriangle();
    KPHToMPH();
    KelvintoFahrenheit();
    computeQuotientandRemainder();

    //Problem 1//
    double number1 = 6.11;
    cout << fixed;
    cout.precision(5);
    cout << number1 <<endl;

    //Problem 2//
    double number2 = 2.13e7;
    cout << fixed;
    cout.precision(5);
    cout << number2 << endl;

    //Problem 3//
    double number3 = 3.21;
    cout << scientific;
    cout.precision(5);
    cout << number3 << endl;

    //Problem 4//
    double number4 = 3.142857142857;

    //i)//
    cout.unsetf(ios_base::fixed);
    cout << fixed;
    cout << setprecision(5);
    cout << number4 << endl;

    //ii)//
    cout << setprecision(2);
    cout << number4 << endl;

    //iii)//
    //cout << fixed;
    cout << setprecision(11);
    cout << number4 << endl;
    return 0;
}