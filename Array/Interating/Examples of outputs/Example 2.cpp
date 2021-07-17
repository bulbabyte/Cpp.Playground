#include <iostream>
using namespace std;

int main() {
   const int NUM_ELEMENTS = 4;
   int userVals[NUM_ELEMENTS];
   int i = 0;
   int maxVal = 0;
   
   userVals[0] = 2;
   userVals[1] = 6;
   userVals[2] = 8;
   userVals[3] = 3;         // Value is < value before 
   
   maxVal = userVals[0];
   for (i = 0; i < NUM_ELEMENTS; ++i) {
      if (userVals[i] >= maxVal) {
         maxVal = userVals[i];
         cout << maxVal << endl;
      }
   }
   
   return 0;
}

/*
2
6
8

maxVal is assigned to the first element in the array, then the for loop iterates in order. Once for each element
in the array. So, if the current element is greater or equal to maxVal, maxVal is outputted. 
*/