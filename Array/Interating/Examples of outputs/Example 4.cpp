#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 4;
   int userVals[NUM_ELEMENTS];
   int i = 0;
   
   userVals[0] = -2;
   userVals[1] = 4;
   userVals[2] = -5;
   userVals[3] = 8;
   
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (userVals[i] < 0) {
         userVals[i] = -1 * userVals[i];
      }
      cout << userVals[i] << endl;
   }
   
   return 0;
}

/*
2
4
5
8

The for loop iterates in order, once for each element in the array. 
If the value is less than 0; the element is mulitplied by -1. So negative values 
are changed into postive ones and outputted. 
*/