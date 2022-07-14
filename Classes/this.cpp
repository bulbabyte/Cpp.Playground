#include <iostream>
using namespace std;

class ShapeSquare {
   public:
      void   SetSideLength(double sideLength);
      double GetArea() const;
   private:
      double sideLength;
};

void ShapeSquare::SetSideLength(double sideLength) {
   this->sideLength = sideLength;
   // Data member      Parameter
   return;
}

double ShapeSquare::GetArea() const{
   return sideLength * sideLength; // Both refer to data member
}

int main() {
   ShapeSquare square1;

   square1.SetSideLength(1.2);
   cout << "Square's area: " << square1.GetArea() << endl;

   return 0;
}
/* using 'this->' makes clear that a class memeber is being accessed
Its essential is a data memebr and parameter have the same identifier 
 */