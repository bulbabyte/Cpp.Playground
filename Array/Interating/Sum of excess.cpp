#include <iostream>
using namespace std;

/*
Array testGrades contains NUM_VALS test scores. Write a for loop that sets sumExtra to the total extra
credit recieved. Full credit is 100, so anything over 100 is extra credit.
Ex: If testGrades = { 101, 83, 107, 90} then sumExtra = 8 ( 1 + 0 + 7 + 0)
*/

int main () { 
    const int NUM_VALS = 4;
    int testGrades[NUM_VALS];
    int i = 0;
    int sumExtra = -9999;       // Assign sumExtra with 0 before for loop

    testGrades[0] = 101;
    testGrades[1] = 83;
    testGrades[2] = 107;
    testGrades[3] = 90;

    /* Your solution here*/

    sumExtra = 0;

    for (i = 0; i < NUM_VALS; ++i) {
        if (testGrades[i] > 100) {
            sumExtra = sumExtra + (testGrades[i] - 100);    // Since starting value of SumExtra is 0; adding it keeps the difference from pervious elements
        }
    }

    cout << "sumExtra: " << sumExtra << endl;

    return 0;
}