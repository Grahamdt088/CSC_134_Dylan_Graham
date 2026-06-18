/*
@author: Dylan Graham
@date: 6/18/2026
@purpose: This program determines if a user entered letter is a constanant or vowel.
*/

//include the directives needed for this program
#include <iostream>

using namespace std;


int main(){

    int num1;       //set variable to hold user entered integer value
    int mod= 2;     //set variable to test if variable is mod 2

    cout<< "Enter a number to be tested: "; //prompt user to input a number to test.
    cin>> num1;                             // store user entered number to num1 variable

    float result = num1 % mod;              // test to see if users number is even or odd

    if (num1/num1 != 1){                    // test to see if user entered a number or a character *** could prompt again with a loop
        cout<< "Error you have not entered a number please restart and try again."<< endl;      // if number divided by self not equal to 1 throw this error
    }
    else if(result != 0) {                  // if number divided by two has a remaineder than the number is odd
        cout<< "The number you have entered: "<< num1<< ", is odd." << endl;        // tell user their number is odd
    }
    else {                                  // if not odd must be even *** no remainder after mod 2 check
        cout << "The number you have entered: " << num1<< ", is even."<< endl;      // tell user their number is even.
    }


}