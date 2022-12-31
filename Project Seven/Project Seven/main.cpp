
/*
 Jermaine T Lennon
 November 6, 2022
 Intro to C++ Programming
 Project 8: Data Structures
 
 1. Create a data structure to take in a persons "Drivers License" information, and a data structure to take a persons "School information"
 2. Allow a user to enter in the information.
 3. Once the user is complete, Display the information that the user has entered.
 4. You must use at least one function, and control structure.
 */

// Libaries
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

// Data Structure for drivers license
struct driversLicense{
    
    string firstName, lastName, sex;
    double height, weight;
    
} licenseInformation[1];


// Data Structure for school information
struct schoolInformation{
    
    string schoolName, schoolCity, schoolState;
    
} informationAboutSchool[1];


// Using two void functions to print the information for both

void printDriversLicense (driversLicense license);

void printSchoolInformation(schoolInformation school);

// Main Function
int main(){
    
    // Drivers License
    
    // Stings are use to convert intergers to string
    string myDriversLicenseHeight, myDriversLicenseWeight;
    int x, y;
    
    // Control Structure that allows user to enter in  driver's license infromation
    for (x = 0; x<1; x++)
    {
        
        // Entering First Name
        
        cout << "Enter First Name: " << endl;
        getline(cin,licenseInformation[x].firstName);
        
        // Entering Last Name
        
        cout << "Enter Last Name: " << endl;
        getline(cin,licenseInformation[x].lastName);
        
        // Entering Gender
        
        cout << "Enter MALE or FEMALE: " << endl;
        getline(cin,licenseInformation[x].sex);
        
        // Entering Height
        
        cout << "Enter Your Height Cenimeters: " << endl;
        getline(cin,myDriversLicenseHeight);
        stringstream(myDriversLicenseHeight) >> licenseInformation[x].height;
        
        // Entering Weight
        
        cout << "Enter Your Weight In Pounds: " << endl;
        getline(cin,myDriversLicenseWeight);
        stringstream(myDriversLicenseWeight) >> licenseInformation[x].weight;
        
    }
    
    
    cout << "Your Driver License Information: " << endl;
    for(x=0; x<1; x++)
        printDriversLicense(licenseInformation[x]);
        
    
    // School Information
    
    
    for (y = 0; y<1; y++){
        
        // ENTERING SCHOOL NAME
        
        cout << "Enter Your School Name: " << endl;
        getline(cin,informationAboutSchool[x].schoolName);
        
        // ENTERING SCHOOL CITY
        
        cout << "Enter Your School City: " << endl;
        getline(cin,informationAboutSchool[x].schoolCity);
        
        // ENTERING SCHOOL STATE
        
        cout << "Enter Your School State: " << endl;
        getline(cin,informationAboutSchool[x].schoolState);
        
    }
    
    cout << "Your School Information: " << endl;
    for(y=0; y<1; y++)
        printSchoolInformation(informationAboutSchool[x]);
    
    
    return 0;
}

// PRINT FUNCTION FOR DRIVERS LICENSE

void printDriversLicense (driversLicense license){
    
    cout << "Name: " << endl;
    cout << license.firstName << endl;
    
    cout << "Last name: " << endl;
    cout << license.lastName << endl;
    
    cout <<"Gender: " << endl;
    cout << license.sex << endl;
    
    cout << "Height: " << endl;
    cout << license.height << endl;
    
    cout << "Weight: " << endl;
    cout << license.weight << endl;
    
}

// PRINT FUNCTION FOR SCHOOL INFORMATION

void printSchoolInformation(schoolInformation school){
    
    cout << "School Name: " << endl;
    cout << school.schoolName << endl;
    
    cout << "School City: " << endl;
    cout << school.schoolCity << endl;
    
    cout << "School State: " << endl;
    cout << school.schoolState << endl;
    
}
