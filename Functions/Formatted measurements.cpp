/*
Define a function PrintFeetInchShort, with int parameters numFeet and numInches, that prints using ' and " shorthand. Ex: PrintFeetInchShort(5, 8) prints:
5' 8"
Hint: Use \" to print a double quote.
*/

#include <iostream>
using namespace std;

/* Your solution goes here  */

void PrintFeetInchShort(int numFeet, int numInches) {
   
   cout << numFeet << "' "<< numInches << "\"" ;
return;
}

int main() {
   PrintFeetInchShort(5, 8);
   cout << endl;

   return 0;
}