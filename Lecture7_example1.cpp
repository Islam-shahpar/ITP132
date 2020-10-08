/**
Lecture 7 :          Repeatation Structure
Example :            Example - 1 
Problem Statement :  Find out the daily price of a car under certain conditions
                     i) Car type = Standard, Member = Yes, Price = 55 
                     ii) Car type = Standard, Member = No, Price = 55
                     iii) Car type = Luxury, Member = Yes, Price = 75
                     iv) Car type = Luxury, Member = No, Price = 85
Language :           C++
Coder :              Shahpar Islam
*/

/**
Pseudocode:

1. Take car type and membership info as user input
2. Check the condition
3. Display the daily fee for different combinations of car type and membership

Algorithm:

1. Declare variable : dailyFee = 55, carType, memberStatus
2. User input : carType. memberStatus
3. Check : if (carType == Luxury)
        - Challenge: To write the condition we have to change the lettercase for carType
        - Challenge: To change the lettercase we have to create our custom function
        - Challenge: We will use for loop to iterate through the variable
        - Challenge: We will use Reference and Pointer concept to create the function
    4. Check : if (membership == yes)
        5. Add $20 with dailyFee
            - Tips : Use Arithmetic Assignment Variable
    6. else
        7. Add $30 with dailyFee
8. Display the daily fee for the car

 */

#include <iostream>
using namespace std;

string to_lower(string &variableName){
  for(int i=0; i<sizeof(variableName); i++){
    variableName[i] = tolower(variableName[i]);
  }
  return variableName;
}

string to_upper(string &variableName){
  for(int i=0; i<sizeof(variableName); i++){
    variableName[i] = toupper(variableName[i]);
  }
  return variableName;
}

int main() {
  int dailyFee = 55;
  string memberStatus = "";
  string carType = "";

  cout << "What type of car do you want?(Luxury/Standard)" << endl;
  cin >> carType;
  cout << "Selected car type: " << carType << endl;

  cout << "Are you a member?(Yes/No)" << endl;
  cin >> memberStatus;
  cout << "Current member: " << memberStatus << endl; 

  if(to_upper(carType) == "LUXURY"){
    if (to_lower(memberStatus) == "yes"){
      dailyFee += 20;
    }else{
      dailyFee += 30;
    }
  }

  cout << "Daily Fee for your car will be: " << dailyFee << endl;

}

