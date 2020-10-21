/*
* ITP132 : 002N : Discussion Board 8
* Write C++ program following below instruction:
* The script generates a random integer between 1 and 12.
* You have to guess the number by making guesses until 
* the number you choose matches the number that script chose.
*/

/*
* Step 1 : Write a function that add random number
* Step 2 : Check it with user input and print if number is lower | higher
* Step 3 : Keep repeating the process until the number matches
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int generateRandom(){
    srand(time(NULL));
    return rand() % 12 + 1;
    //http://www.cplusplus.com/reference/cstdlib/rand/
}

int main(){
    int randomNumber = generateRandom();
    int guessNumber = 0;
    int tryCount = 1; 

    do {
        cout << "What is your guess? [From 1 to 12]" << endl;
        cin >> guessNumber;
        
        if (guessNumber > randomNumber){
            cout << "Lower!" << endl;
        } else if ( guessNumber < randomNumber) {
            cout << "Higher!" << endl;
        } else {
            cout << "You got it!" << endl;
            cout << "You needed " << tryCount << " attempts!" << endl;
        }
        tryCount++;
    }while(guessNumber != randomNumber);

    return 0;
}