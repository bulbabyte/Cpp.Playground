#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 5;         // Number of elements
   vector<int> userVals(NUM_ELEMENTS); // User values
   int i = 0;                          // Loop index
   
  // Prompt user to populate vector
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cin >> userVals.at(i);
      cout << "Value: "<< userVals.at(i) << endl;
   }  
   
   // Convert negatives to 0
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (userVals.at(i) < 0) {
         userVals.at(i) = 0;
      }
   }
   
   // Print numbers
   cout << "New values:";
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cout << " " << userVals.at(i);
   }
   cout << endl;
   
   return 0;
}
