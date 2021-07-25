/* Complete the PrintTicTacToe function with char parameter
horizChar and vertChar that prints a tic-tac-toe board
with the charaters as follows. End with a newline
x!x!x
~~~~~
x!x!x
~~~~~
x!x!x
*/

#include <iostream>
using namespace std;

void PrintTicTacToe(char horizChar, char vertChar) {

   /* Your solution goes here  */
      cout << 'x' << vertChar << 'x' << vertChar << 'x' << endl;
      cout << horizChar << horizChar << horizChar << horizChar << horizChar << endl;
      cout << 'x' << vertChar << 'x' << vertChar << 'x' << endl;
      cout << horizChar << horizChar << horizChar << horizChar << horizChar << endl;
      cout << 'x' << vertChar << 'x' << vertChar << 'x' << endl;

   return;
}

int main() {
   PrintTicTacToe('~', '!');

   return 0;
}