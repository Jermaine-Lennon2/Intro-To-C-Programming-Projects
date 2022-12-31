
/*
 
 Jermaine T Lennon
 October 15, 2022
 Introduction to C Programming
 */


//  Project 5 Functions 2.0


/*
 Part 1. Use loops to complete the following:
         A. Use a for-loop to display the numbers in the following order(pick one):
             50 to 0
             0 to 80
             30 to 60
         B. Use a while loop to display the numbers in the following order(pick one):
             5 to 0
             0 to 8
             3 to 20
         C. Use a do-while loop to display the numbers in the following order:
             1 to 100
             200 to 50
             10 to 300
 Part 2. Allow the user to enter in data and implement the following:
         Take in 3 random values from the user.
         Multiple all 3 values
         Add all 3 values
         Subtract all 3 value from each other
         Divide all 3 values
         Find the modules of the values by 3
 */

#include <iostream>
#include <sstream>
using namespace std;

// Using void prototypes

void partOneA();
void partOneB();
void partOneC();
void partTwo();

int main ()
{
 
    cout << " Part One A: " << endl;
    
    partOneA();
    
    cout << " Part One B: " << endl;

    partOneB();
    
    cout << " Part One C: " << endl;

    partOneC();
    
    cout << " Part Two: " << endl;

    partTwo();
}

// Part One A: For Loop to display 30 - 60

void partOneA(){
   
    int i;
    // Starting i = 30, i will increase. For any case where i is less then or equal to 60 i where print onto output.
    for( i = 30; i<= 60; ++i){
        cout << i << " " << endl;
    }
    
    // Creating space between Part A and B
    cout << " " << endl;

}

// Part One B: While loop to display 3 - 20
void partOneB(){
    
    // num will equal 3 and increase by one number
    
    int num=3;
    
    // while the num is less then or equal to 20 the num will print when the num is 21 the loop is over
    
    while (num <= 20){
        cout << num << " " << endl;
        ++num;
    }
    
    // Creating space between part b and part c
    cout << " " << endl;

}
// Part One C: Do-While Loop

void partOneC(){
    
    // Starting number is 1
    
    int num1 = 200;
    
    // the loop is going to print the num1 while the num1 is going up to 100. Once num1 = 101 the loop will stop
    
    do{
        cout << num1 << " " << endl;
        --num1;
    }
    while (num1 >= 50);
    
    // Creating space between part 1c and part 2
    
    cout << " " << endl;
}
// Part Two: Using void function to ask user to take in numbers and print out answers

void partTwo(){
   
    // declaring integers
    
    int x, y, z;
    double product, sum, difference, divisor, modules;

    // Asking user to input whole numbers. DONT ENTER ZERO!!!
    
    cout << " Enter First Integer: \n";
    cin >> x;
    
    cout << " Enter Second Integer: \n";
    cin >> y;
    
    cout << " Enter Thrid Integer: \n";
    cin >> z;
    
    // Operators
    
    product = x * y * z;
    
    sum = x + y + z;
    
    difference = x - y - z;
    
    divisor = x / y / z;
    
    modules = (x % y) % z;
    
    // Printing final answers
    
    cout << "The product of the three random numbers are " << product << " ." << endl;
    
    cout << "The sum of the three random numbers are " << sum << " ." << endl;
    
    cout << "The difference of the three numbers are " << difference << " ." << endl;
    
    cout << "The divisor of the three random numbers are " << divisor << " ." << endl;
    
    cout << "The modules of the three numbers are " << modules << " ." << endl;
    
}
