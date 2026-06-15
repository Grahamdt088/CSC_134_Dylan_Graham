/*
@author: Dylan Graham
@date: 6/13/2026
@purpose: This program adds two floating point numbers and prints the result to the console
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
 
    float num1;        //capture variables as floating data types 
    float num2;
    
    cout << "Enter the first number: "; //prompt user to enter the values for num 1 and 2
    cin >> num1;                        //user enters number
    cout << "Enter the second number: ";
    cin >> num2;
    cout<< "The sum is: "<< num1 + num2 << endl; //print the result to console.

    return 0;

}