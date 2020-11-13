#include <iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int i, key, j;
    for (i = 1; i<n; i++){
        key = arr[i];//11
        j = i - 1;//0
        while (j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;//arr[0] = 11;
    }
}


void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arr[5] = {12,11,13,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);
    printArray(arr, n);

    return 0;
}