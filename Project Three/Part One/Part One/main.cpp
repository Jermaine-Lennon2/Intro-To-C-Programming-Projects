/*
 
Jermaine T Lennon
 Due Date: September 30, 2022
 
 Introduction for C++ Programming
 
 */

//Inputs

#include <iostream>
using namespace std;

// Part II

/*
Part 1. Computes the average of 3 different grades entered by the user.
        Ask the user to enter 3 different grades consecutively.
        Compute the average of all 3 numbers within a function.
        Display the average computed.
*/

double grades (double grade1, double grade2, double grade3){
    
    cout << " Enter first grade : "<<endl;
    cin >> grade1;
    
    cout << " Enter second grade : " << endl;
    cin >> grade2;
    
    cout << " Enter third grade :" << endl;
    cin >> grade3;
    
    
   
    double final_grade;
    
    final_grade = (grade1 + grade2+ grade3) / 3;
    
    cout << "The average grade is " << final_grade << endl;
    
    return final_grade ;
    
}


void odd (int x);
void even (int x);



int main() {
    
    double z;
    z = grades(1, 1, 1);
    // This is here as a place holder because without it nothing would print
    
    return 0;
    
    
 
}
