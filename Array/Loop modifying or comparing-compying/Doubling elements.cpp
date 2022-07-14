/* Double each number in the array*/

#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 8;  // Number of elements
   int userVals[NUM_ELEMENTS];  // User values
   int i = 0;                   // Loop index
   
   // Prompt user to input values
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cin >> userVals[i];
      cout << "Value: " << userVals[i] << endl;
   }
      
  
   // Print numbers
   cout << "New numbers: ";
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      userVals[i] = userVals[i] * 2;
      cout << userVals[i] << " ";
   }
   
   return 0;
}
