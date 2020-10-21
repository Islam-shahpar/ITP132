/*
* ITP132 : 002N : Discussion Board 7
* Write a C++ program following below instruction:
* Ask the customer's name, age, gender
* If the customer is below 18 then he/she won't be able to play the game, 
* display "Sorry, you have to be 18 to play the game."
* If the customer is over 60 then he/she won't be able to play the game, 
* "Sorry, you have to be under 60  to play the game."
* If the customer is equal or more than 18 and below then 60,
* Ask customer's gender
* If the customer is male then he has to pick a character from these 
* 3 movie roles [Ghostface, Pennywise, Babadook], then display "OMG, I am ....(the character name)"
* if the customer is female then she has to pick a character from these 
* 3 movie roles [Annabelle, Samara, Pazuzu], then display "OMG, I am ....(the character name)"
*/

#include <iostream>
#include <string>
using namespace std;



int main(){
    string name;
    int age;

    cout << "Please enter your first name :" << endl;
    cin >> name;

    cout << "Please enter your age : " << endl;
    cin >> age;

    if ( age < 18){
        cout << "Sorry, you have to be 18 to play the game." << endl;
    } else if ( age >= 18 && age < 60){
        cout << "Please enter your gender : [M/F]" << endl;
        char gender;
        cin >> gender;
        if ( gender == 'M' || gender == 'm'){
            cout << "Please pick one of the movie roles from : [Ghostface, Pennywise, Babadook] " << endl;
            string movieChar;
            cin >> movieChar;
            cout << "OMG, I am " << movieChar << "!" << endl;
        } else if ( gender == 'F' || gender == 'f'){
            cout << "Please pick one of the movie roles from : [Annabelle, Samara, Pazuzu] " << endl;
            string movieChar;
            cin >> movieChar;
            cout << "OMG, I am " << movieChar << "!" << endl;
        } else {
            cout << "Invalid information provided!" << endl;
        }    
    } else if ( age >= 60){
        cout << "Sorry, you have to be under 60  to play the game." << endl;
    }

    return 0;
}