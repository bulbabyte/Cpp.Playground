/* Use function GetUserInfo to get user's information. If user is 20 and Holly
sample program output is:
Holly is 20 years old.
*/

#include <iostream>
#include <string>
using namespace std;

void GetUserInfor (int& userAge, string& userName){ 
    cout << "Enter your age: " << endl;
    cin >> userAge;
    cout << "Enter your name: " << endl;
    cin >> userName;
    return;
}

int main() {
    int userAge = 0;
    string userName = " ";

    /* Solution */

    GetUserInfor (userAge, userName);

    cout << userName << " is " << userAge << " years old." << endl;

    return 0;
}
