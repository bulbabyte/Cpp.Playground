#include <iostream>
using namespace std;

/*
Write three statements to print the first three elements of array runTimes. Follow each statement with a newline. 
Ex: If runTime = {800, 775, 790, 805, 808}, print:
800
775
790
*/

int main() {
   const int NUM_ELEMENTS = 5;
   int runTimes[NUM_ELEMENTS];
   int i;

   for (i = 0; i < NUM_ELEMENTS; ++i) {
      cin >> runTimes[i];
   }

   /* Your solution goes here  */
   for (i = 0; i <= runTimes[5]; ++i) {
        if( i <= 2){
            cout << runTimes[i] << endl;
        }
   }

   return 0;
}