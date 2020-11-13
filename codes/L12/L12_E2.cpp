/**
Lecture :            12
Example :            Sorting Algorithm 
Problem Statement :  Merge Sort (From geeksforgeeks)
Language :           C++
Coder :              Shahpar Islam
*/

#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){//arr,0,1,2
    int n1 = m-l+1;//2-0+1=3
    int n2 = r-m;//4-1=3

    int L[n1], R[n2];//L[2],l[3]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];//0,1
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];//

    
}

void mergeSort(int arr[], int l, int r){//arr, 0, 5
    if (l < r){
        int m = (l+r-1)/2;//0+5-1/2=2
        mergeSort(arr, l, m);//arr,0,2
        mergeSort(arr, m+1, r);//arr,3,5

        merge(arr, l, m, r);
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
  
  int arr[] = {12,11,13,5,6,7};
  int arr_size = sizeof(arr)/sizeof(arr[0]);

  mergeSort(arr,0,arr_size - 1);//(arr, 0, 6-1)
  printArray(arr,arr_size);
  return 0;
}