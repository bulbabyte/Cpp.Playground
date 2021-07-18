/*
Write a loop that sets each array element to the sum of itself and the next element,
except for the last element which stays the same. Be careful not to index beyond last element, Ex:
Initial scores:         10, 20, 30, 40
Scores after the loop: 30, 50, 70, 40

The first element is 30 or 10+20, the second element is 50 or 20+30 and third is 70 or 30+40
*/

#include <iostream>
using namespace std;

int main() {
   const int SCORES_SIZE = 4;
   int bonusScores[SCORES_SIZE];
   int i = 0;

   bonusScores[0] = 10;
   bonusScores[1] = 20;
   bonusScores[2] = 30;
   bonusScores[3] = 40;

   /* Your solution */



