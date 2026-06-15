/*
@author: Dylan Graham
@date: 6/14/2026
@purpose: This program converts degrees from fahrenheit to celcius
*/

//include the directives needed for this program
#include <iostream>
#include <iomanip>  // included to use set precision page 118 program 3-17 in the book
using namespace std;

int main(){
    //c = (f-32) * 5/9
    float fahrenheit;                 // set a floating datatype for Fahrenheit
    
    cout<< "Enter Degrees Fahrenheit: ";
    cin>> fahrenheit;                 // have user propted for fahrenheit

    float conversion = (fahrenheit -32) * 5/9;  // assign formula to conversion


    cout<< fixed<< setprecision(2); // included to use set precision page 118 program 3-17 in the book.
    cout << fahrenheit<< " degrees Fahrenheit converted to celcius is "<< (fahrenheit -32) * 5/9 << " degrees Celcius." <<endl; //display results to the console.

    return 0;

}
