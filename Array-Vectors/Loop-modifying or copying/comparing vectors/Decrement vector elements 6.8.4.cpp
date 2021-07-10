#include <iostream>
#include <vector>
using namespace std;

/*
    Write a loop that subtracts 1 from each element in lowerScores if the original element was greater than 0, and otherwise just assigns the element with 0.
     Ex: lowerScores = {5, 0, 2, -3} becomes {4, 0, 1, 0}.
*/



int main() {
   const int SCORES_SIZE = 4;
   vector<int> lowerScores(SCORES_SIZE);
   int i;

   lowerScores.at(0) = 5;
   lowerScores.at(1) = 0;
   lowerScores.at(2) = 2;
   lowerScores.at(3) = -3;

   /* Your solution goes here  */
  
  for (i = 0; i <= lowerScores.size() - 1; ++i){   // -1 to reach all elements, lowerScores.at(4) not valid
     if (lowerScores.at(i) <= 0){
            lowerScores.at(i) = 0;
     }
   
     else{
        lowerScores.at(i) -= 1;
     }
  } 

   for (i = 0; i < lowerScores.size(); ++i) {
      cout << lowerScores.at(i) << " ";
   }
   cout << endl;

   return 0;
}