/*
@author: Dylan Graham
@date: 6/18/2026
@purpose: This program determines if a user entered year is or is not a leap year.
*/

//include the directives needed for this program
#include <iostream>

using namespace std;


int main(){

    int year;    //set variable to hold user input

    cout<< "Enter a year to see if it is or was a leap year: ";   //prompt user for input
    cin>> year;                                                   //store users input in variable year

    //criteria for if its a leap year or not
    // must be divisible by 4 AND NOT divisible by 100 and return a whole number
    // must be divisible by 400 and return a whole number

    if (year % 4 ==0 && year % 100 !=0){                    // testing to see if user input is divisible and will return whole number for 4 but not 100
        cout<< year << " is or was a leap year."<<endl;     // if testing passes it IS a leap year print to console
        }
    
    else if (year % 400 == 0){                              // if divisible by 4 and 100 must also be divisible by 400
        cout<< year << " is or was a leap year."<<endl;     // if testing passes it IS a leap year print to console 
    }    
    else{                                                   // if not divisible by 4 or 400 will fall into the else category which detemines not a leap year
        cout<< year<< " is or was not a leap year."<<endl;  //display to console that it is not a leap year
    }
}