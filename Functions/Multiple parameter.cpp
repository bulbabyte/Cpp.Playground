#include <iostream>
using namespace std;
void PrintFace(char eyeChar, char noseChar, char mouthChar) {

    cout << "   "  << eyeChar << " " << eyeChar << endl;      // Eyes
    cout << "    " << noseChar << endl;                         // Nose
    cout << "   "  << mouthChar << mouthChar << mouthChar << endl; // Mouth
    return;
}
int main() {
    PrintFace('o', '*', '#'); // FIXME: Pass 3 arguments
    return 0;
}


/* Editing same PrintFace as in Face printing, but with multiple arguement */