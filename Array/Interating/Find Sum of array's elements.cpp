#include <iostream>
using namespace std;

int main () {
    const int NUM_ELEMENTS = 8;         //Number of elements
    int userVals[NUM_ELEMENTS];         // User numbers
    int i = 0;                          // Loop index
    int sumVal = 0;                     // For computing time

    // Prompt user to populate array
    cout << "Enter " << NUM_ELEMENTS << " integer value. . ." << endl;

    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cout << "Value: ";
        cin >> userVals[i];
    }

    // Determine sum
    for (i = 0; i < NUM_ELEMENTS; ++i) {
        sumVal = sumVal + userVals[i];
    }

    cout << "Sum: " << sumVal << endl;

    return 0; 
}
