#include <iostream>
using namespace std;

// bool searchElement(int paramArray[], int size, int searchVariable){
//   bool isFound = false;
//   for (int i = 0; i < size; i++){
//     if ( paramArray[i] == searchVariable){
//       isFound = true;
//       break;
//     }
//   }
//   return isFound;  
// }


int main(){
  int declareArray[5] = {100,101,102,103,104};
  int searchVariable = 102;

  // bool isFound = searchElement(declareArray,5,searchVariable);

  // cout << "Element found : " << isFound << endl;

  for (int i = 0; i < 5; i++){
    if (declareArray[i] == searchVariable){
      cout << "Element found" << endl;
      break;
    }
  }
  
}

//for variable -> function you have to use reference 
//for array -> just pass the array