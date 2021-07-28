/* Define a function PyramidVolume with double parametersnbaseLength, baseWidth, and pyramidHeight
that returns as a double the volume of a pyramid with a rectangular base. 
Volume = base area * height * 1/3
Base area = base lenght * base width
*/

#include <iostream>
using namespace std;

/* Your solution goes here  */
double PyramidVolume (double baseLength, double baseWidth, double pyramidHeight) {
    double baseArea = 0;
   
   baseArea = baseLength * baseWidth;
    return ((baseArea * pyramidHeight) * 1/3);

}


int main() {
   cout << "Volume for 1.0, 1.0, 1.0 is: " << PyramidVolume(1.0, 1.0, 1.0) << endl;
   return 0;
}