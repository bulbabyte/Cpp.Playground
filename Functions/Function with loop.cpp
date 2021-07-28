/*
Write a function PrintShampooInstructions(), with parameter numCycles
and void return type. If numCycles less than 1, print "Too few."
If more than 4, print "Too many." Else, print "N: Lather and rinse."
numCycle times, where N is the cycle number, followed by "Done." 
End with newline. Ex: output for numCycles = 2
1: Lather and rinse.
2: Lather and rinse.
Done.
*/

#include <iostream>
using namespace std;

/* Your solution goes here  */

void PrintShampooInstructions (int numCycles){
   if (numCycles < 1){
      cout << "Too few." << endl;
   }
   else if (numCycles > 4) {
      cout << "Too many." << endl;
   }
   else {
      for (unsigned int i = 1; i <= numCycles; ++i){
         cout << i << ": Lather and rinse." << endl;
      }
      cout << "Done." << endl;
   }
   
}

int main() {
   PrintShampooInstructions(2);

   return 0;
}