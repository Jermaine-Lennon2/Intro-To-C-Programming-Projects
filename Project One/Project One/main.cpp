/*
 Jermaine Lennon
 Due Date: September 2, 2022
 Introduction for C++ Programming
 */

// Inputs

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 
/*  Part I Information About You
1. What is you full name?
2. What is your classification and major?
3. Where are you from?
4. What high school did you attend?
5. What elementary school did you attend?
6. What year will you graduate from Morgan State university?
7. What do you like to do in you free time?
*/





    string fullName, major, city, highSchool, elemSchool, gradYear, hobby;
    
    cout << "Enter your name: \n";
    getline(cin, fullName);
    
    cout << "Enter your Major and Classification: \n";
    getline(cin, major);
    
    cout << "Enter the city your from: \n";
    getline(cin, city);
    
    cout << "Enter your High School: \n";
    getline(cin, highSchool);
    
    cout << "Enter your Elemetary School: \n" ;
    getline(cin, elemSchool);
    
    cout  << "Enter the year and month you expect to graduate : \n";
    getline(cin, gradYear);
    
    cout << "Enter your favorite hobbies: \n";
    getline(cin, hobby);


    
    cout<< "My name is " <<fullName << ". I am a " <<major << ". I am from " << city << ". I went to high school at " << highSchool << " and I went to elemetary school at " << elemSchool << ". I graduate from Morgan " << gradYear << " Lastly, my favorite hobbies are " << hobby << endl;
    
    cout << " ";
    
    // Part II Using Operators

    // Question 1

    /*
    What is the area of a circle with  radius of 5?
    */

#define PI 3.1415

    float radius, area;


    radius = 5;
    area = PI*radius*radius;
        
    cout<<"Area of circle with radius of 5: " <<area << endl;
    
    
    // Question 2

    /*
    What is the total of 25.74 + 87.09 - 66?
    */
    
    
    float a, b, answ;
    int c;
    
    
    a = 25.74;
    b = 87.09;
    c = 66;
    
    answ = a + b - c;
    
    cout<< "25.74 + 87.09 - 66 = " << answ << endl;
    
    // Extra Credit: What is '%' used for? Provide an examplein code using %.


    /*
     '%' is a modulo operator that produces the remainder of an interger division.
     */

    
    int x, y;
    int z;
    
    x = 80;
    y = 25;
    z = x % y;
    cout << "The remainder of 85/25 is: " << z << endl;
        
   
      
    return 0;
}
