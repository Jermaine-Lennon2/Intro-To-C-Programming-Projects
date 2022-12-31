/*
 Jermaine T Lennon
 October 26, 2022
 Intro to C Programming
 
 As disused in class, pointers are mostly used to reference the address of a variable in memory.
 Create the following programs.
 Part 1 - Float array/vector
 1. Create an array of floats with 4 elements
 2. Use a function to print out the elements within an array/vector and their address in memory using a for loop or do-while loop.
 Part 2  - String Array/vector
 1. Create an array of strings with 6 elements
 2. Use a function to print out the elements within an array/vector and their address in memory using a while loop
 Only submit your .cpp file.
 Use the following URL as a reference:
 https://www.cplusplus.com/doc/tutorial/pointers/
 
 */

// Libaries
#include <iostream>
#include <vector>
#include <string>


using namespace std;

// Prototypes

void partOne();
void partTwo();

float *address;

int main(){
    
    partOne();
    partTwo();
    
    
    return 0;
}

void partOne(){
    
    float numArray [4] = {23.5, 15.2, 19.9, 42.8};
    
    // Printing vector elements
    
    cout << "The list of numbers in the array are: " << endl;
    cout << " " << endl;
    for(int num = 0; num < 4; ++num){
        cout << numArray[num] << " " << endl;
    }
    // Addressing elemnts using pointers
    
    cout << " " << endl;
    cout << "Addressing the elements in the vector: "<< endl;
    
    cout << " " << endl;
    
    
    for (int i=0;i<4;i++)
        cout << (numArray+i) << endl;
  
        }

void partTwo(){
    
    // String Array
    cout << " " << endl;
    string stringArray [6] = { "first", "second", "thrid", "fourth", "fifth", "sixth"};
    
    cout << "The list of words in the array are: " << endl;
    cout << " " << endl;
    
    for(int num = 0; num < 4; ++num){
        cout << stringArray[num] << " " << endl;
    }
    
    cout << " " << endl;

    cout << "Addressing the elements in the vector: " << endl;
    cout << " " << endl;

    for (int i=0;i<4;i++)
        cout << (stringArray+i) << endl;
    cout << " " << endl;

}
