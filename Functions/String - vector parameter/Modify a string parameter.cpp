/* Complete the function to replace any period by an exclamation mark
Ex: "Hello. I'm Miley. Nice to meet you." becomes
"Hello! I'm Miley! Nice to meet you!" */

#include <iostream>
#include <string>
using namespace std;

void MakeSentenceExcited(string& sentenceText) {
    
    int i = 0;

    for (i = 0; i < sentenceText.length(); ++i) {
        if (sentenceText.at(i) == '.') {
            sentenceText.at(i) = '!';
        }
    }
    return;
}

int main() {
    string testStr;

    testStr = "Hello. I'm Miley. Nice to mett you.";
    MakeSentenceExcited(testStr);
    cout << testStr;

    return 0;
}