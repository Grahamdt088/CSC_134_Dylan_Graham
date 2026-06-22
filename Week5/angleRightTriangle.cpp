/*
@author: Dylan Graham
@date: 6/22/2026
@purpose: This program calculates the angle of a right triangle
*/

//include the directives needed for this program
#include <iostream>
#include <cmath>
using namespace std;



int main(){

    
    double x = 3;                                           //setting variables to double type for most accuracy
    double y = 4;                                           //setting variables to double type for most accuracy
    double pi = 3.14159;                                    // setting variable to hold PI
    double threeFourFive = 53.13;                           // setting criteria for 3-4-5 triangle

    double equation = pow(x,2)+pow(y,2);                    // Pythagorem Theorm to caclucate hypotenuse

    //cout<<equation<< endl;                                // testing to see if equation works
    
    double conversion = atan2(y,x);                         //use atan2 to calculate radians
    //cout<<conversion<<endl;                               // testing the Atan2 function
    double degrees = conversion * (180/pi);                 // formula to conver radians to degrees
    //cout <<degrees<<endl;                                 //degree conversion teest

    if (degrees = threeFourFive){                           // if degrees equal criteria for 3-4-5 triangle
        cout<< "This is a 3-4-5 triangle."<<endl;           // display this message if degrees equal 3-4-5 triangle criteria
    }
    else{                                                   // if doesn't meet 3-4-5 triangle
         cout<< "This is not a 3-4-5 triangle."<<endl;      // display this message if degrees not equal 3-4-5 triangle criteria
    }

    return 0;
}