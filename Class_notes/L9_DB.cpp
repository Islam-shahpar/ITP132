/*
* Problem 1 : That calculates and displays the length of a 
* right triangle hypotenuse  (Use the <cmath> header, pow() and sqrt function)
*
*
*
*/

#include <iostream>
#include <cmath>
#include <string>
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

void learnArray(){
    int nums[5]; //declare an array
    nums[0] = 0; //insert an element

    for (int i = 1; i < 5; i++){
        nums[i] = i; //loop through an array
    }

    int len = sizeof(nums)/sizeof(nums[0]);

    for (int i = 0; i < len; i++){
        cout << nums[i] << endl; //print the array
    }

    nums[0] = 9; //change the array element
    cout << "After change numbers[0] is " << nums[0] << endl;

}

int main(){
    //hypotenuse();
    learnArray();
    return 0;
}