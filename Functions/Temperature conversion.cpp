#include <iostream>
using namespace std;

// FINISH: Define CelsiusToFahrenheit function here
double tempConvert (double temp) {
      return (temp * 9)/5 + 32;
}

int main() {
   double tempF = 0.0;
   double tempC = 0.0;

   cout << "Enter temperature in Celsius: " << endl;
   cin >> tempC;
      tempF = tempConvert(tempC);

   // FINISH

   cout << "Fahrenheit: " << tempF; 
   cout << endl;

   return 0;
}
