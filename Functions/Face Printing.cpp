/* Print the same face twice and 
complete the function definition of PrintFaceB() to print a different face
*/

#include <iostream>
using namespace std;

void PrintFaceB() {
    // FIXME : FINISH
    char faceChar = '_';

    cout << "   " << faceChar << " " << faceChar << endl;
    cout << "   " << faceChar << faceChar << faceChar << endl;

    return;
}

void PrintFaceA () {
    char faceChar = 'o';

    cout << "  "  << faceChar << " " << faceChar << endl;         // Eyes
    cout << "   " << faceChar << endl;                            // Nose
    cout << "  "  << faceChar << faceChar << faceChar << endl;    // Mouth

    return;
}

int main () {
    PrintFaceA();
    PrintFaceA();
    PrintFaceB();
    return 0;
    
}