
/*
 Jermaine T. Lennon
 Introduction to C++
 Project 9 Part I
 */


#include <iostream>
using namespace std;


// USING CLASS BUILD IN CLASS

class Rectangle {
    
    // FOR THE FIRST FUNCTION
    int height, width;
    
    // FOR THE SECOND FUNCTION
    float height1, width1, length;
 
    
// USING PUBLIC I WANT TO ACCESS VARIABLES OUTSIDE THE FUNCTION
public:
    
    // CONSTRUCTER FOR THE FIRST FUNCTION
    Rectangle (int,int);
    
    
    // CONSTRUCTER FOR THE SECOND FUNCTION
    Rectangle ();
    
    
    // THIS FUNCTION ALLOWS ME TO FIND THE AREA OF THE RECTANGLE
    int area (void) {return (width*height);
    }
    
    // THIS FUNCTION ALLOWS ME TO FIND THE VOLUME OF THE RECTANGLE
    float volume (void) { return (height1 * width1 * length);
        
    }
    
    // FUNCTION ALLOWS ME TO DUPLICATE THE VOLUME OF THE RECTANGLE
    int duplicate (void) {return ((height1 * width1 * length)*3);
        
    }
    
};

//  CONSTRUCTER THAT I USED TO FIND THE AREA OF THE RECTANGLE. I USED THIS CLASS TO DEFINE HEIGHT AND WIDTH

Rectangle::Rectangle (int x, int y){
    height = x;
    width = y;
    
}

// CONSTRUCTER THAT I USED TO FIND THE VOLUME OF THE RECTANGLE
Rectangle::Rectangle()
{
    // ALLOWING USER INPUTS
    
    cout << "Enter value for height: " << endl;
    cin >> height1;
    
    cout << "Enter value for width: " << endl;
    cin >> width1;
    
    cout << "Enter value for length: " << endl;
    cin >> length;
    
// BASIC IF-ELSE STATEMENT TO PRINT OUT THE VOLUME BASED ON THE INPUT USER PROVIDES. THIS CONDITION IS PUT IN PLACE SO PROGRAM WILL ONLY DISPLAY VOLUME THAT IS NON ZERO AND POSTIVE INTERGERS
    if (volume() <= 0){
        cout << "Not a real Rectangle, can not find the volume! " << endl;
    }
    
    else{
        cout << "The volume of the Rectangle is equal to: " << volume() << endl;
    }
    
// ANOTHER BASIC IF-ELSE STATEMENT TO PRINT OUT THE VOLUME OF RECTANGLE MULTIPLIED BY THREE. CONDITION IS THERE SO PROGRAM WILL ONLY DISPLAY NON ZERO AND POSTIVE INTERGERS
    if (duplicate() <= 0 ){
        cout << "Not a real rectangle can not duplicate vakues of Rectangles!" << endl;
    }
    
        else {
            cout << "Duplicated value of the volume of the rectangle is equal to " << duplicate() << endl;}
    
}

// MAIN FUNCTION

int main(){
    
    
    // DISPLAYS THE VOLUME OF A RECTANGLE WITH WIDTH OF 3 AND HEIGHT OF 4
    Rectangle rect (3, 4);
    cout << "rect area: " << rect.area() << endl;
    

    // DISPLAYING THE RECTANGLE CONSTRUCTOR
    Rectangle();


    
    
    return 0;
}
