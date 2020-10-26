/*
Student Name : Andy M.
Course : ITP132 (Section : 002N)
*/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

    double number_1 = 3E-3;//to store 0.003
    cout << "Show number after decimal point:" << number_1 << endl;
    double number_2 = 3E3;//to
    cout << "Show number of zeroes:" << number_2 << endl;

    cout << sqrt(64) << "\n"; //Square root of a number
    cout << round(2.6) << "\n"; //rounding a number with decimal point
    cout << log(2) << "\n"; //Getting the log value of a number
    //Code to find square root of sum of two numbers
    //Set inputs and result variable:
    int input_1, input_2;
    float result, sqrt_result;

    cout << "Give input_1: ";
    cin >> input_1;
    cout << "Give input_2: ";
    cin >> input_2;

    //Set the result variable equal tot he sum of input one and two
    result = (input_1 + input_2);

    //Find the square root of result variable
    sqrt_result = sqrt(result);

    //print results:
    cout << endl;
    cout << input_1 << " plus " << input_2 << " is equal to " << result << "."
        "The square root of " << result << " is " << sqrt_result << "." << endl;
}