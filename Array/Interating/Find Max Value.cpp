#include <iostream>
using namespace std;

int main () {
    const int NUM_ELEMENTS = 8;         // Number of elements
    int userVals[NUM_ELEMENTS];         // Array of user elements
    int i = 0;                          // Loop index
    int maxVal = 0;                     // Computed max

    // Prompt user to populate array
    cout << "Enter " << NUM_ELEMENTS << " integer values. . ." << endl;

    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> userVals[i];
        cout << "Value: " << userVals[i] << endl;
    }

    // Determine largest (max) number
    maxVal = userVals[0];               // Largest so far

    for (i = 0, i < NUM_ELEMENTS; ++i) { 
        if (userVals[i] > maxVal) {
            maxVal = userVals[i];
        }
    }
    cout << "Max: " << maxVal << endl;

    return 0;
}