/*
@author: Dylan Graham
@date: 6/13/2026
@purpose: This program uses character data to print Hi! to the console
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    char letter1,letter2,letter3; // character data type pg 51 in book

    letter1 = 'H'; //single Quotes
    letter2 = 'i';
    letter3 = '!';

    cout<< letter1<< letter2<<letter3<<endl; //display results to console.
    return 0;
}