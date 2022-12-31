
/*
 
 Jermaine T Lennon
 
 October 23, 2022
 
 Introduction to C Programming
 
 Project 5 - Arrays and Vectors
 Let test your knowledge of array and vectors. I will only except .cpp files.
 You must use functions and control structures.
 Part 5.1
 1. Create a program with three arrays of different types.
 2. The First array should have 5 known values, and you should display the values to the user.
 3. The Second array should have 3 element. The user should be able to enter those elements, then you should display them to the user.
 4. The Three array should have a number of elements of you choice. You should:Add, Subtract, Divide or Multiple the values in the array together to get a total.
 Part 5.2
 1. Create a program using a vector.
 2. Allow the user to enter an unknown amount of strings.
 3. Then you should display the values back to the user.
 
 
 */

// Libraries

#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Prototypes

void firstArray();
void secondArray();
void thridArray();
void nameOfClass();
void displayingClasses();





// MAIN FUNCTION

int main(){
    
    // PART I
    
    firstArray();
    cout << " " << endl;
    
    secondArray();
    cout << " " << endl;
    
    thridArray();
    cout << " " << endl;
    
// PART II

    nameOfClass();


    

    return 0;
}


// FUNCTIONS


void firstArray(){
   
    // Creating an array with 5 elements
    
    double num [5] { 15, 23, 34, 46, 52};
    
    // Using for loop to display the elements
    for (int x = 0; x < 5; ++x) {
        cout << num[x] << "  " << endl;
        
    }
    
}

void secondArray(){
    
    // Creating array
    
    float num1 [3];
    
    int y;
    for (y = 0; y < 3; y++) {
       // Reading User Input
       cout << "Enter Value for " << y << " : ";
       cin >> num1[y];
        
    }
    
    // Displaying User Input using for loop
    cout << "\n User Input Values\n";
      for (y = 0; y < 3; y++) {
         cout << y << " = " << num1[y] << endl;
      }
}

void thridArray(){
    
    // Creating an array with 7 elements
    
    int add [7] = {2, 4, 8, 12, 16, 18, 19};
    int n, answer=0;
    
    for ( n=0 ; n<7 ; ++n )
      {
        answer += add[n];
      }
    
   
      cout << "Adding the elements in the array will equal to:  " <<  answer << endl;
}

// Part II: Creating a function that will allow users to input what classes they would like to take next year. For the program to contiune to run you would have to place "Y" for yes or "N" for no.

void nameOfClass()
{
    // Creating a string vector called schoolClasses
    vector<string> schoolClasses;
    
    string classes;
    string again;
    
    // This loop will allow useres to input a class they would like to take and place them in the vector created above. This could will allow you to enter as much classes as you want until the user inputs "N" which would end the loop.
    do
    {
        cout << "What classes do you want next year? " << endl;
        cin >> classes;
        schoolClasses.push_back(classes);
        
        cout << " " << endl;
        cout << "Do you want to take another class: Y / N " << endl;
        cin >> again;
        
        
    }
    while (again.compare("Y") == 0);
    
    // DISPLAYS the list of classes users input above
    for(int i = 0; i < schoolClasses.size(); i++)
    {
        cout << " " << endl;
        cout << "The classes i wish to take next year are: " << schoolClasses[i] << endl;
        
    }
}
