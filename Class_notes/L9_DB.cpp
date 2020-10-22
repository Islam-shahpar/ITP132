/*
* Problem 1 : That calculates and displays the length of a 
* right triangle hypotenuse  (Use the <cmath> header, pow() and sqrt function)
*
*
*
*/

#include <iostream>
#include <cmath>
using namespace std;

void hypotenuse(){
    cout << "Please provide the length of first leg : " << endl;
    int firstLeg = 0;
    cin >> firstLeg;
    cout << "Please provide the length of second leg : " << endl;
    int secondLeg = 0;
    cin >> secondLeg;

    int sumOfTwoLegsSquared = pow(firstLeg,2) + pow(secondLeg,2);
    int hypotenuse = sqrt(sumOfTwoLegsSquared);
    cout << "Hypotenuse for the Right traingle is: " << hypotenuse << endl;
}

int main(){
    hypotenuse();
    return 0;
}