/*
@author: Dylan Graham
@date: 6/11/2026
@purpose: This program calculates the product of two numbers
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    int num1 = 5;
    int num2 = 10;
    int product = num1*num2;
    cout<< "The product of " <<num1 <<" and " <<num2 <<" is " <<product << "."<< endl; //print statement
    return 0;
}