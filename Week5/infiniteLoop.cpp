/*
@author: Dylan Graham
@date: 6/22/2026
@purpose: This program displays an infinite while loop to console
*/

//include the directives needed for this program
#include <iostream>

using namespace std;



int main(){

    string message = "This is infinite\n";  //storing message as a string
    string done= "no";                      //setting a condition to test while loop.

    while (done == "no"){                   // while condition remains set to no 
        cout<< message<<endl;               // print this
    }
}