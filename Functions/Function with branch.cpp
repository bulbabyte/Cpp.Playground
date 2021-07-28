/*
Complete function PrintPopcornTime(), with int parameter bagOunces and voic return type.
If bagOunces is less than 2, print "Too small" if greater than 10, 
print "Too large". Otherwise, compute and print 6 * bagOunces followe by " seconds"
End with newline. Ex: output for ounces =7
42 seconds
*/

#include <iostream>
using namespace std;

 /* Your solution goes here  */
void PrintPopcornTime(int bagOunces) {
   if (bagOunces < 2) {
      cout << "Too small" << endl;
   }
   
   else if (bagOunces > 10 ){
      cout << "Too large" << endl;
   }
   else {
      bagOunces = (6 * bagOunces);
      cout << bagOunces << " seconds" << endl;
   }
   

}

int main() {
   int userOunces;

   cin >> userOunces;
   PrintPopcornTime(userOunces);

   return 0;
}