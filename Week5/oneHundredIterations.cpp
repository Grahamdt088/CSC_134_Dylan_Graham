/*
@author: Dylan Graham
@date: 6/22/2026
@purpose: This program prompts the user to enter a temp untill the desire temp has been entered
*/

//include the directives needed for this program
#include <iostream>

using namespace std;



int main(){

    int count = 0;                      // counter
    int desiredIterations = 100;        // the count we want
    while (count < desiredIterations){  // while the counter is less than the count we want keep going
        count = count +1;               // add a count each time we run it
        cout<<count<<endl;
    } 
    
    cout<< count<< " iterations have been run." <<endl;     // print the number of iterations the program runs
}