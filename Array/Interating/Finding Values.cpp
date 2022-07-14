#include <iostream>
using namespace std;

/*
Set numMatches to the number of elements in userValues (having NUM_VALS elements)
that equal matchValue. EX: If MmatchValue = 2 and userValues = {2, 2, 1, 2}, then numMatches = 3
*/

int main() {
    const int NUM_VALS = 4;
    int userValues[NUM_VALS];
    int i = 0;
    int matchValue = 0;
    int numeMatches = -99;          // Assign numMatches with 0 before your loop


    userValues[0] = 2;
    userValues[1] = 2;
    userValues[2] = 1;
    userValues[3] = 2;

    matchValue = 2;

    /* Your solution here */

    for (i = 0; i < NUM_VALS; ++i) { 
        if (userValues[i] == matchValue) {
            numeMatches++;
        }
    }

    cout << "matchValue: " << matchValue << ", numMatches: " << numeMatches << endl;

    
    return 0;
}