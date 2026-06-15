/*
@author: Dylan Graham
@date: 6/13/2026
@purpose: This program calculates the area of a cirlce
*/

//include the directives needed for this program
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    //equation: A= pi * r * r   
    float area;                 // set a floating datapoint for variables
    float pi = 3.1415;          //capture preset value for pi 
    float radius = 19;          

    area = pi * 19 *19;         // area = equation above
    cout << "The area of the circle is: "<< area << " square feet." << endl; //display results to console.

    return 0;

}