/**
Lecture :            12
Example :            Sorting Algorithm 
Problem Statement :  Insertion Sort (From geeksforgeeks)
Language :           C++
Coder :              Shahpar Islam
*/

#include <iostream>
using namespace std;

//{12,11,13,5,6}

void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i < n; i++){
        key = arr[i]; //storing the second index value to key, arr[1] = 11 = key
        j = i - 1; //Value of j is 1 less than i, j = 1-1 = 0

        //if value of j index is greater than i index then moving the value
        while ( j >= 0 && arr[j] > key){ //0 && arr[0] = 12 > 11
            arr[j+1] = arr[j]; //value getting swapped, arr[1]=12
            j = j - 1; //Decreasing j value like j--, j becomes -1, come out of loop
        }
        arr[j+1] = key;//arr[-1+1]=arr[0]=11;
    }
}

void printArray(int arr[], int n){
    int i;
    for (i = 0; i < n; i++){
        cout << arr[i] << " ";
    cout << endl;
    }
}

int main(){
  
  int arr[] = {12,11,13,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);

  insertionsort(arr,n);
  printArray(arr,n);
  return 0;
}