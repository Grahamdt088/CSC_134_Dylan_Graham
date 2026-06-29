/*
@author: Dylan Graham
@date: 6/29/2026
@purpose: This purpose of this program is to utilize a for loop to count from 0 to 100 using an accumulator
*/

//include the directives needed for this program
#include <iostream>

using namespace std;



int main(){
    int accumulator= 0;                                                 //set accumulator to starting count value 


    for (accumulator; accumulator< 100; accumulator++) {                //start at zero and while it is less than 100 increase by 1 each iteration the for loop is run
          
        //cout<< "The accumulator value is :" << accumulator<< endl;    //used to see each iteration to ensure its actually working
          
    }
    cout<< "The accumulator value is :" << accumulator<< endl;          //once loop completes display number of times iterated           
}