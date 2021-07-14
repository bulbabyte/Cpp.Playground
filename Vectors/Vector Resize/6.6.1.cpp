#include <iostream>
#include <vector>
using namespace std;

/*
Assign currentSize with the size of the sensorReadings vector.
*/


int main() {
   vector<int> sensorReadings(4);
   int currentSize;

   sensorReadings.resize(10);

 /* Your solution goes here  */
 
  currentSize = sensorReadings.size();


   cout << "Number of elements: " << currentSize << endl;

   return 0;
}