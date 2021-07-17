#include <iostream>
using namespace std;

// Print only numbers greater than 21

int main () {
    const int NUM_ELEMENTS = 8;
    int userVals[NUM_ELEMENTS];
    int i = 0;

    cout << "Enter " << NUM_ELEMENTS << " integer values: " << endl;

    for (i = 0; i < NUM_ELEMENTS; ++i) {
        cin >> userVals[i];
            if (userVals[i] > 21){
                cout << "Value: " << userVals[i] << endl;
            }
    }

    return 0;
}