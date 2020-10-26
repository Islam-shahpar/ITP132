/**
Lecture 6 :          Selection Structure
Example :            Multiple Alternative Selection (if - else if) 
Problem Statement :  Find out the location by searching through item code
                     i) item code = 12, Location = Tennessee  
                     ii) item code = 36, Location = Kentucky 
                     iii) item code = 40, Location = Louisiana 
                     iv) item code = 43, Location = Louisiana
Language :           C++
Coder :              Shahpar Islam
*/
/**
Pseudocode:

1. Take item code as user input
2. Check the condition
3. Display the warehouse location for different item code

Algorithm:

1. Declare variable : code
2. User input : code
3. Check : 
    - if (code == 12)
        - Display : Location : Tennessee
    - else if (code == 36)
        - Display : Location : Kentucky
    - else if (code == 40 || code == 43)
        - Display : Location : Louisiana
    - else 
        - Display : Invalid 

 */

#include <iostream>
using namespace std;

int main() {
  int code = 0;
  string warehouse = "";
  cout << "Please enter your item code: " << endl;
  cin >> code ; 
  
  if (code == 12){
    warehouse = "Tennessee";
    cout << "The location for your item is: " << warehouse << endl;
  } else if ( code == 36){
    warehouse = "Kentucky";
    cout << "The location for your item is: " << warehouse << endl;
  } else if ( code == 40 || code == 43){
    warehouse = "Loisana";
    cout << "The location for your item is: " << warehouse << endl;
  } else {
    cout << "You code is invalid" << endl;
  }