/*
* Problem 1 : That calculates and displays the length of a 
*             right triangle hypotenuse  (Use the <cmath> header,
*             pow() and sqrt function)
* Problem 2 : Declare an array | Access | Change | Loop through array
* Problem 3 : Create a simple function that takes an array as input 
*             then sort the array (ascending order)
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

void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void selectionSort(int arr[], int n)  
{  
    int i, j, min_idx;  
  
    // One by one move boundary of unsorted subarray  
    for (i = 0; i < n-1; i++)  
    {  
        // Find the minimum element in unsorted array  
        min_idx = i;  
        for (j = i+1; j < n; j++)  
        if (arr[j] < arr[min_idx])  
            min_idx = j;  
  
        // Swap the found minimum element with the first element  
        swap(&arr[min_idx], &arr[i]);  
    }  
}  

//https://www.geeksforgeeks.org/selection-sort/

int main(){
    //hypotenuse();
    //learnArray();
    int arrayToBeSorted[5];
    cout << "Please input random number in array : " << endl;
    for(int i = 0; i < 5; i++){
        cin >> arrayToBeSorted[i];
    }
    cout << "Unsorted Array looks like this : " << endl;
    for(int i = 0; i < 5; i++){
        cout << arrayToBeSorted[i] << " ";
    }
    cout << endl;
    int len = sizeof(arrayToBeSorted)/sizeof(arrayToBeSorted[0]);
    selectionSort(arrayToBeSorted, len);
    

    cout << "Sorted Array looks like this : " << endl;
    for(int i = 0; i < 5; i++){
        cout << arrayToBeSorted[i] << " ";
    }
    cout << endl;
    return 0;
}