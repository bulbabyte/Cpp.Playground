/* Complete the function definition to print five asterisks 
when called once ( do not print a newline)
*/

#include <iostream>
using namespace std;

void PrintPattern () {
    
    // Solution here
    
    char symChar = '*';
    cout << symChar << symChar << symChar << symChar << symChar;

}
int main() {
    PrintPattern();
    PrintPattern();
    cout << endl;
    return 0;
}