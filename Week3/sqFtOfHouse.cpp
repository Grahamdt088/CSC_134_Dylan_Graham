/*
@author: Dylan Graham
@date: 6/13/2026
@purpose: This program calculates the square footage of a house
*/

//include the directives needed for this program
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //A = L*W ensure in square feet
    float area;                 // set a floating datapoint for area length and width
    float length = 50;
    float width = 32;          

    area = length*width;         // area = equation above
    cout << "The square footage of this house is "<< area << " square feet." << endl; //display results to console.

    return 0;

}