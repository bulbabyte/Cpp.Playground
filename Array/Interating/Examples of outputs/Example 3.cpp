#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 4;
   int userVals[NUM_ELEMENTS];
   int i = 0;
   
   userVals[0] = -1;
   userVals[1] = 4;
   userVals[2] = 6;
   userVals[3] = -7;
   
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (userVals[i] < 0) {
         cout << userVals[i] << endl;
      }
   }
   
   return 0;
}



/*
-1
-7

for loop iterates in order, once for each element, only prints the values
less than 0
*/