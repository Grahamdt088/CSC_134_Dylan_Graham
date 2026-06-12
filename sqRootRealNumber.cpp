/*
@author: Dylan Graham
@date: 6/11/2026
@purpose: This program calculates the square root of a real number
*/

//include the iostream library for input and output
#include <iostream>
#include <cmath> //found on page 130
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    int num1 = 25;
    double squareRoot = sqrt(num1); //must be a double or it will just return 25
    cout<< "The square root of " <<num1 <<" is "<<squareRoot << "."<< endl; //print statement
    return 0;
}