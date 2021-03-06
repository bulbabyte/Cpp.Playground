/* Define missing function. licenseNum is created as:
(10000*customID) + licenseYear. Sample output:
Dog license: 77702014 */

#include <iostream>
using namespace std;

class DogLicense{
    public:
        void    SetYear(int yearRegistered);
        void    CreateLicenseNum(int customId);
        int     GetLicenseNum() const;
    private:
        int     licenseYear;
        int     licenseNum;   
};

void DogLicense::SetYear(int yearRegistered) {
    licenseYear = yearRegistered;
    return;
}

// Write CreateLicenseNum()
void DogLicense::CreateLicenseNum(int customID){
    licenseNum = (100000 * customID) + licenseYear;
    return;
}

int DogLicense::GetLicenseNum() const {
    return licenseNum;
}

int main() {
    DogLicense dog1;

    dog1.SetYear(2014);
    dog1.CreateLicenseNum(777);
    cout << "Dog license: " << dog1.GetLicenseNum() << endl;

    return 0;

}
