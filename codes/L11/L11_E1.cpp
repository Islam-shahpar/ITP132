/**
Lecture :            11
Example :            1D Array 
Problem Statement :  Different operation regarding array
Language :           C++
Coder :              Shahpar Islam
*/

#include <iostream>
using namespace std;

void displayArray(int passedArray[], int sizeOfArray){
    for (int i = 0; i < sizeOfArray; i++){
        cout << passedArray[i] << endl;
    }
}

void modifyArray(int passedArray[], int sizeOfArray){
    for (int i = 0; i < sizeOfArray; i++){
        passedArray[i] = i;
    }
}

void modifyArray(string *paramArray, int size){
  paramArray[1] = "ITP132";

  cout << paramArray << " " ;
}

void modifyVariable(string variableName){
  variableName = "No";
}

int main(){
  
  //declare an array
  int newArray[5] = {100,101,102,103,104};

  //enter data
  int anotherArray[5];
  anotherArray[0] = 100;
  anotherArray[1] = 101;
  anotherArray[2] = 102;
  anotherArray[3] = 103;
  anotherArray[4] = 104;

  //Display data
  for (int i = 0; i < 5; i++){
      cout << newArray[i] << endl;
  }

  //pass array to function
  displayArray(anotherArray,5);

  //pass array to function to modify values
  modifyArray(newArray,5);

  for (int i = 0; i < 5; i++){
        cout << newArray[i] << endl;
    }
  
  //pass array using pointer
  string message[2] = {"Hello","world"};
  for (int i = 0; i < 2; i++){
    cout << message[i] << " ";
  }

  cout << endl;
  
  modifyArray(message,2);
  for (int i = 0; i < 2; i++){
    cout << message[i] << " ";
  }

  cout << endl;

  string variableToBeChanged = "Yes";
  cout << variableToBeChanged;

  modifyVariable(variableToBeChanged);
  cout << variableToBeChanged;

  //calculate total
  int totalArray[5] = {10,20,30,40,50};

  int total = 0;

  for (int i = 0; i < 5; i++){
    total += totalArray[i];  
  }

  cout << total;

  //average
  int arrayAverage[5] = {10,20,30,40,50};

  for (int i = 0; i < 5; i++){
    total += arrayAverage[i];  
  }

  int average = total/5;

  cout << average; 

  //search
  int searchValue = 40;

  for (int i = 0; i < 5; i++){
    if(searchValue == arrayAverage[i]){
      cout << "found search value" << endl;
      break;
    }
  }

  //find the highest value
  int highestValueArray[5];
  cout << "Provide 5 values : " << endl;

  for (int i = 0; i < 5; i++){
    cin >> highestValueArray[i];
  }

  for (int i = 0; i < 5; i++){
    if (highestValueArray[0] < highestValueArray[i]){
      highestValueArray[0] = highestValueArray[i];
    }
  }

  cout << "Highest Value: " << highestValueArray[0] << endl;

  return 0;
}