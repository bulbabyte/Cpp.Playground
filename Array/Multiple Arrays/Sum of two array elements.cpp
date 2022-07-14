/*
Add each element in origList with the corresponding value in offsetAmount.
Print each sum followed by a space
Ex: if origList = {40, 50, 60, 70} and offsetAmount = {5, 7, 3, 0}, print:
45 57 63 70
*/

#include <iostream>
using namespace std;

int main() {
    const int NUM_VALS = 4;
    int origList[NUM_VALS];
    int offsetAmount[NUM_VALS];
    int i = 0;

    origList[0] = 40;
    origList[1] = 50;
    origList[2] = 60;
    origList[3] = 70;

    offsetAmount[0] = 5;
    offsetAmount[1] = 7;
    offsetAmount[2] = 3;
    offsetAmount[3] = 0;

    /* Your solution */
    int sumVal = 0;

    for (i = 0; i < NUM_VALS; ++i) {
        sumVal = origList[i] + offsetAmount[i];
        cout << sumVal << " ";
    }

    cout << endl;

    return 0;

    }