/*
 
 Jermaine T Lennon
 
 Due Date: September 30, 2022
 
 EEGR 161.001
 
 Part 3. Add the area of a sphere and the area of a cube and display the value
         Take in values from the user to calculate the area of a sphere
         Take in values from the user to calculate the area of a cube
         Calculate the area of a sphere within a function
         Calculate the area of a cube within a function
         Add the two values and display the total to the user
 */
#include <iostream>
using namespace std;

#define PI 3.1415


void questions()
{
    float Sphere, Cube;
    float rSphere, rCube;
    float spherearea, cubearea;

    
    cout << " Enter radius of a sphere value: " << endl;
    cin >> Sphere;
    
    cout << " Enter radius of a cube value: " << endl;
    cin >> Cube;
    
    
    
    rSphere = Sphere * 2;
    
    rCube = Cube * 2;
    
    spherearea = 4 * PI * rCube;
    cubearea = 6 * rSphere;
    
    cout << "The area of the sphere is " << spherearea << endl;
    cout << "The area of the Cube is " << cubearea << endl;
    
    cout << "The value of the area of the cube plus the sphere is "<<  spherearea + cubearea << endl;
    
    
}



int main(int argc, const char * argv[]) {
    
    questions();

    
    return 0;
}
