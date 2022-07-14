/*
Write a loop that sets newScores to oldScores shifted once left, with element 0 copied to the end. 
Ex: If oldScores = {10, 20, 30, 40}, then newScores = {20, 30, 40, 10}
*/

#include <iostream>
using namespace std;

int main() {
    const int SCORES_SIZE = 4;
    int oldScores[SCORES_SIZE];
    int newScores[SCORES_SIZE];
    int i = 0;

    oldScores[0] = 10;
    oldScores[1] = 20;
    oldScores[2] = 30;
    oldScores[3] = 40;

    /* Your solution */

    for (i = 0; i < SCORES_SIZE - 1; ++i) {
        newScores[i] = oldScores[i + 1];                // shifts to left, cannot use if ( i < 0) because 0 < 0 is false  
    }
    newScores[SCORES_SIZE - 1] = oldScores[0];          // oldScores[0] = last element of newScores

    for (i = 0; i < SCORES_SIZE; ++i){
        cout << newScores[i] << " ";
    }

    cout << endl;

    return 0;
}