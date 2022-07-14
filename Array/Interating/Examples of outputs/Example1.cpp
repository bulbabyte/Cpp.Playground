#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 3;
   int userVals[NUM_ELEMENTS];
   int i = 0;
   
   userVals[0] = 2;
   userVals[1] = 5;
   userVals[2] = 9;
   
   for (i = NUM_ELEMENTS - 1; i >= 0; --i) {
      cout << userVals[i] << endl;
   }
   
   return 0;
}


/* Output should print

9
5
2

The for loop initializes i w/ NUM_ELEMENTS - 1 (3 - 1) and iterates as long as 
i >= 0 subtracting 1 to i after each interation. So it prints array in reverse

*/