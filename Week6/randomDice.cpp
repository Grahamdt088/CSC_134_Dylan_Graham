/*
@author: Dylan Graham
@date: 6/29/2026
@purpose: This purpose of this program is to utilize a for loop to simulate rolling a dice a user set number of times
*/

//include the directives needed for this program
#include <iostream>
//#include <cstdlib>                                                // allows use or rand()
#include <random>                                                   // found this on page 132 program 3-25

using namespace std;



int main(){

    //srand(static_cast<unsigned int>(time(0)));                    // Could not figure this out/have no idea what its doing (random_device engine does the same?)
    random_device engine;                                           // ****found this on page 132 program 3-25 (used to seed the engine)

    int min= 1;                                                     // minimum dice roll can land on
    int max=6;                                                      // maximum dice roll can land on
    int counter=1;                                                  // condition check/iterations
    int rollNumber;                                                 // used to store user input for how many rolls they want

    uniform_int_distribution diceValue(min,max);                    // ****found this on page 132 program 3-25 (allows random number 1,6)


    cout<<"How many times would you like to roll the dice?: ";      // prompt user to enter a number of rolls
    cin>>rollNumber;                                                // store user selected roll number



    for (counter; counter<= rollNumber; counter++) {                // counter starts at 1; while it is less than or equal to user requested rolls keep going; increment counter 1 time per roll.
        
        cout << diceValue(engine)<<" has been rolled."<< endl;                           // selects the random number using the rules in line 26 then prints to console.
        //cout<<counter<<endl;
        //cout<< rand(min,max)<< endl;                              // my first attempt I wanted to clean it up but also wanted to let you see where my head was on my first try.

    }
   
}