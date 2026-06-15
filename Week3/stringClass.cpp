/*
@author: Dylan Graham
@date: 6/13/2026
@purpose: This program uses the string class to assemble a sentence using concatenation.
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

//no need for int or return
int main(){
    string verbiage = "Today I am "; //record variables
    string age = "35 "; 
    string verbiageEnd = "years old.";

    string conCat = verbiage + age + verbiageEnd; //concatenation found on page 128 in book

    cout<< conCat<< " You are getting up there!" << endl; //display to console with jokes

    return 0;
}