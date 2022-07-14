/* Write a function SwapArrayEnds() that swap the first and last element
of the function's array parameter. 
EX: sortArray = {10, 20, 30, 40} becomes {40, 30, 20, 10} */

#include <iostream>
using namespace std;

/*Solution here*/
void SwapArrayEnds (int sortArray[], int SORT_ARR_SIZE) {
    int temp;                   // temporary variable
    temp = sortArray[0];        // save value
    sortArray[0] = sortArray[SORT_ARR_SIZE - 1];    //overwrite
    sortArray[SORT_ARR_SIZE - 1] = temp;            // swap ends
    return;
}

int main() {
    const int SORT_ARR_SIZE = 4;
   int sortArray[SORT_ARR_SIZE];
   int i = 0;

   sortArray[0] = 10;
   sortArray[1] = 20;
   sortArray[2] = 30;
   sortArray[3] = 40;

   SwapArrayEnds(sortArray, SORT_ARR_SIZE);

   for (i = 0; i < SORT_ARR_SIZE; ++i) {
      cout <<  sortArray[i] << " ";
   }
   cout << endl;

   return 0;
}