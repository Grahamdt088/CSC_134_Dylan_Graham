/*
@author: Dylan Graham
@date: 6/14/2026
@purpose: This program calculates the volume of a sphere
*/

//include the directives needed for this program
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    //equation: V= 4/3*pi*r*r*r
    float volume;                 // set a floating datapoint for variables
    float pi = 3.1415;          //capture preset value for pi 
    float radius = 7;          // radius given

    volume = (4.0/3.0)*pi * (radius * radius * radius);         // this took a while to figure out just kept trying to simplify it as much as possible and landed here.
    cout << "The volume of the sphere is: "<< volume << " cubic units." << endl; //display results to console.

    return 0;

}