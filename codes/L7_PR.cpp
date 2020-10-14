/**
Pointer and Reference
 */

 #include <iostream>
 using namespace std;

 int main(){
     string food = "Pizza";
     string* meal = &food;

     cout << food << "\n" << endl;
     cout << meal << "\n" << endl;
     return 0;
 }