/*
For any element in keysList with a value greater than 100, print the corresponding value in itemList, followed by a space
Ex: if keysList = {45, 105, 101, 100} and itemsList = {10, 20, 30, 40}, print:
20 30
Since keysList[1] and keysList [2] have values greater than 100, value of itemsList[1] and itemsList[2] are print
*/

#include <iostream>
using namespace std;

int main() {
    const int SIZE_LIST = 4;
    int keysList[SIZE_LIST];
    int itemsList[SIZE_LIST];
    int i = 0;

    keysList[0] = 42;
    keysList[1] = 105;
    keysList[2] = 101;
    keysList[3] = 100;

    itemsList[0] = 10;
    itemsList[1] = 20;
    itemsList[2] = 30;
    itemsList[3] = 40;

    /* Your solution */

    for (i = 0; i < SIZE_LIST; ++i) {
        if (keysList[i] > 100) {
        cout << itemsList[i] << " ";
        }
    }

    cout << endl;

    return 0;
}