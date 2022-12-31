/*
Jermaine T Lennon
Due Date: September 17, 2022
Introduction for C++ Programming

 
 
 Part I - Use a "if" statement(s) and Switch Statement
 
    Create a program demonstrating the three different ways to us "IF" statements.
 
    This program will tell user to enter an intger 0-100 and display the corresponding letter grade.
 
Part II - Using a for loop, while loop, or do while loop to display the following list of numbers in the following order:
    List 1:
    2, 4, 6, 8, 10, 12, 14, 16
  
    List 2:
    20, 19, 18, 17, 16, 15
 
  */


#include <iostream>
using namespace std;



int main() {
    
 // PART ONE
    
    // Nested If Else statement
    
    int x;
      cout << "Type a number: " << endl;
      cin >> x ;
      
      cout << "Your grade is: " << x << endl;

    if (x > 90 && x < 100){
        cout << "You recieved an A. " << endl;
    
    }else if ( x > 80 && x < 89){
        cout << "You recieved a B. " << endl;
    
    }else if ( x > 70  && x < 79){
        cout << " You recieved a C. " << endl;
    
    }else if ( x > 60 && x < 69){
        cout << "You recieved a D. " << endl;
    
    }else if ( x > 0 && x < 59){
        cout << " You recieved an E. " << endl;
    
    }else{
        cout << "Error! Try again. " << endl;
    }

    
    //Switch Statement
     
    int y;
    cout << "Enter number: ";
     cin >> y;
    cout << "Your grade is: " << y << endl;
     
    switch (y) {
        case 90 ... 100:
            cout << "You recieved an A."<<endl;
            break;
        case 80 ... 89:
            cout << "You recieved a B"<<endl;
            break;
        case 70 ... 79:
            cout << "You recieved a C"<<endl;
            break;
        case 60 ... 69:
            cout << "You recieved a D"<<endl;
            break;
        case 0 ... 59:
            cout << "You recieved a E"<<endl;
            break;
        default:
            cout << "default";
    }
    

// PART TWO
    
    // List 1
    int number;
   
    number = 17;
    
        for(int i = 1; i <= number; i++)
          {
              if ( i % 2 == 0 )
              {
                  cout << i <<" " << endl;
            }
          }
            
    // List 2: (Using JUMP method)
    for (int n=20; n>0; n--)
      {
        cout << n << ", ";
        if (n==15)
        {
          cout << "STOP!" << endl;
          break;
        }
      }
    return 0;
}


