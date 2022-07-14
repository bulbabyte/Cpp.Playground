#include <iostream>
using namespace std;

/*
Write a for loop to print all NUM_VALS elements of array hourlyTemp.
Seperate with a comma and space. 
Ex: If hourlyTemp = {90, 92, 94, 95}, print
90, 92, 94, 95
*/

int main() {
    const int NUM_VALS = 4;
    int hourlyTemp[NUM_VALS];
    int i = 0;

    hourlyTemp[0] = 90;
    hourlyTemp[1] = 92;
    hourlyTemp[2] = 94;
    hourlyTemp[3] = 95;

    /* Your solution */

     for (i = 0; i < NUM_VALS; ++i) {
        cout << hourlyTemp[i];

        // Comma space conditional 

        if (i < (NUM_VALS - 1)){
            cout << ", ";
        }
      
    }
   


   cout << endl;

   return 0;
}