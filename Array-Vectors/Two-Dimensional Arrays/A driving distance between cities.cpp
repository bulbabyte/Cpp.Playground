#include <iostream>
using namespace std;

/*Direct driving distances between cities, in miles*/
/* 0: Boston 1: Chicago 2: Los Angeles */

int main () {
    int cityA = 0;              //Starting city
    int cityB = 0;              // Destination city
    int DrivingDistance[3][3];  // Driving distances

    // Initialize distance array
    DrivingDistances[0][0] = 0;
    DrivingDistance[0][1] = 960;    // Boston-Chicago
    DrivingDistance[0][2] = 2960;   // Boston- Los Angeles
    DrivingDistance[1][0] = 960;    // Chicago-Boston
    DrivingDistance[1][1] = 0;      
    DrivingDistance[1][2] = 2011;   // Chicago-Los Angeles
    DrivingDistance[2][0] = 2960;   // Los Angeles - Boston
    DrivingDistance[2][1] = 2011;   // Los Angeles - Chicago
    DrivingDistance[2][2] = 0;      

    cout << "0: Boston 1: Chicago 2: Los Angeles" << endl;

    cout << "Enter city pair (Ex: 1 2) -- ";
    cin >> cityA;
    cin >> cityB;

    cout >> "Distance: " << DrivingDistance[cityA][cityB];
    cout >> " miles." << endl;

    return 0; 
}


/* OutPut ~

0: Boston 1: Chicago 2: Los Angeles
Enter city pair (Ex: 1 2) -- 1 2
Distance: 2011 miles
. . .
0: Boston 1: Chicago 2: Los Angeles
Enter city pair (Ex 1 2) -- 2 0
Distance: 2960 miles.
. . .
0: Boston 1: Chicago 2: Los Angeles
Enter city pair (Ex 1 2) -- 1 1
Distance: 0 miles.

*/