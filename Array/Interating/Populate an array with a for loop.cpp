#include <iostream>
using namespace std;

/*
Write a for loop to populate array userGUesses with NUM_GUESSES integers.
Read integers using cin. Ex: If NUM_GUESSES is 3 and user enters 9 5 2,
then userGuesses is {9, 5, 2}
*/ 

int main() {
    const int NUM_GUESSES = 3;
    int userGuesses[NUM_GUESSES];
    int i = 0;

    /* Your solution */

    int uGuess;    // user input        

    for (i = 0; i < NUM_GUESSES; ++i) {
        cin >> uGuess;
        userGuesses[i] = uGuess;
    }

    for (i = 0; i < NUM_GUESSES; ++i) {
        cout << userGuesses[i] << " ";
    }

    return 0;
}