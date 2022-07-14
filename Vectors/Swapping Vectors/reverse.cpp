#include <iostream>
#include <vector>
using namespace std;

/*
    Reverse the order of the List:
   10 20 30 40 50 60 70 80
    to: 80 70 60 50 40 30 20 10
*/

int main() {
   const int NUM_ELEMENTS = 8;        // Number of elements
   vector<int> revVctr(NUM_ELEMENTS); // User values
   unsigned int i;                    // Loop index
   int tmpValue;                      // Placeholder
   
   cout << "Enter " << NUM_ELEMENTS << " integer values..." << endl;
   for (i = 0; i < revVctr.size(); ++i) {
      cout << "Value: ";
      cin >> revVctr.at(i);
   }
   
   // Reverse
   for (i = 0; i < (revVctr.size() / 2); ++i) {
      tmpValue = revVctr.at(i);  // These 3 statements swap
      revVctr.at(i) = revVctr.at(revVctr.size() - 1 - i);
      revVctr.at(revVctr.size() - 1 - i) = tmpValue;
   }
   
   // Print values
   cout << endl << "New values: ";
   for (i = 0; i < revVctr.size(); ++i) {
      cout << " " << revVctr.at(i);
   }
   cout << endl;
   
   return 0;
}