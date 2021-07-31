#include <iostream>
using namespace std;

void AdjustScores(double scoreVals[], int numVals,      // AdjustScores function modifies the array so defines normal array parameter
                  double scoreAdj) {
   int i = 0;
   
   for (i = 0; i < numVals; ++i) {
      scoreVals[i] = scoreVals[i] + scoreAdj;
   }

   return;
}

void PrintScores(const double scoreVals[], int numVals) {   // Does NOT modify the array so defines a CONST array parameter
   int i = 0;
   
   for (i = 0; i < numVals; ++i) {
      cout << " " << scoreVals[i];
   }
   cout << endl;

   return;
}

double CalculateAverage(const double scoreVals[], int numVals) {        // Does NOT modify the array so defines a CONST array parameter
   int i = 0;
   double scoreSum = 0.0;
   
   for (i = 0; i < numVals; ++i) {
      scoreSum = scoreSum + scoreVals[i];
   }
   
   return scoreSum / numVals;
}

int main() {
   const int NUM_SCORES = 4;    // Array size
   double testScores[NUM_SCORES];  // User test scores
   int i = 0;
   double averageScore = 0.0;
   
   // Prompt user to enter test scores
   cout << "Enter " << NUM_SCORES << " test scores:" << endl;
   for (i = 0; i < NUM_SCORES; ++i) {
      cout << "Test score: ";
      cin >> testScores[i];
   }
   cout << endl;
   
   // Print original scores
   cout << "Original test scores: ";
   PrintScores(testScores, NUM_SCORES);

   AdjustScores(testScores, NUM_SCORES, 2.0);

   cout << "Adjusted test scores: ";
   PrintScores(testScores, NUM_SCORES);

   // Call function to calculate average
   averageScore = CalculateAverage(testScores, NUM_SCORES);
   cout << "Average adjusted test score: " 
        << averageScore << endl;
   
   return 0;
}