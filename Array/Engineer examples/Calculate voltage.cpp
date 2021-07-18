/*
Arrays can be useful in solving various engineering problems. One problem is computing the voltage drop across a series of resistors. 
If the total voltage across the resistors is V, then the current through the resistors will be I = V/R, where R is the sum of the resistances. 
The voltage drop Vx across resistor x is then Vx = I · Rx
*/


#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   const int NUM_RES = 5;     // Number of resistors
   double resVals[NUM_RES];   // Ohms
   double circVolt = 0;       // total voltage across series of resistors
   double vDrop[NUM_RES];     // Volts
   double currentVal = 0;     // Amps
   double sumRes = 0;         // Ohms
   int i = 0;                 // Loop index

   cout << "5 resistors are in series." << endl;
   cout << "Program calculates voltage drop "
        << "across each resistor." << endl;

   cout << "Input voltage applied to circuit: ";
   cin >> circVolt;

   cout << "Input ohms of " << NUM_RES << " resistors:";
   cout << endl;
   for (i = 0; i < NUM_RES; ++i) {      // Gets resistance of each resistor and stores in an array
      cout << (i + 1) << ") ";
      cin >> resVals[i];
   }

   // Calculate current
   for (i = 0; i < NUM_RES; ++i) {      // Adds resistance into single value, so I =V/r can be computed
      sumRes = sumRes + resVals[i];
   }
   currentVal = circVolt / sumRes;    // I = V/R

   for (i = 0; i < NUM_RES; ++i) {      // Determines voltage drop across each resistor and stores each voltage in another array
      vDrop[i] = currentVal * resVals[i]; // V = IR
   }

   cout << endl << "Voltage drop per resistor is:" << endl;
   for (i = 0; i < NUM_RES; ++i) {
      cout << (i + 1) << ") " << fixed << setprecision(1)
           << vDrop[i] << " V" << endl;
   }

   return 0;
}