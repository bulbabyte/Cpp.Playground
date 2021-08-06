/* Print person1's kids, apply the IncNum Kids() function, and print again, outputting test
as below. End each line with newline. 
Sample:

Kids: 3
New baby, kids now:4    */

#include <iostream>
using namespace std;

class PersonInfo{
    public:
        void    SetNumKids(int personsKids);
        void    IncNumKids();
        int     GetNumKids() const;
    private:
        int     numKids;
};

void PersonInfo::SetNumKids(int personsKids) {
    numKids = personsKids;
    return;
}
void PersonInfo::IncNumKids() {
    numKids = numKids + 1;
    return;
}
int main() {
    PersonInfo person1;
    
    person1.SetNumKids(3);

    /*solution*/

    cout << "Kids: " << person1.SetNumKids() << endl;

    person1.IncNumKids();

    cout << "New baby, kids now: " << person1.IncNumKids() << endl;

    return 0;
}