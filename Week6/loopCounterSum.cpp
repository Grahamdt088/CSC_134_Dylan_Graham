/*
@author: Dylan Graham
@date: 6/29/2026
@purpose: This purpose of this program is to utilize a for loop that loops 50 times adding 10 to the counter each time
*/

//include the directives needed for this program
#include <iostream>

using namespace std;



int main(){
    int sumOP= 0;               // Variable that stores sum each iteration
    int minNum=0;               // starting number and increment number
    const int maxNum=50;        // max number of iterations
    int adder=10;               // adder to add 10 each iteration
    
    for (minNum; minNum< maxNum; minNum++) {          // starting at 0: until the min number is greater than 50; increment minNum by 1 each iteration
       
        //cout<<minNum<<endl;                         // used to test to see how many iterations we are getting (49 for 50 iterations because we start at 0)

        sumOP= sumOP + minNum + adder;                // sum op holds previous iteration then adds interation number and 50
        cout<< sumOP<<endl;                           // display iteration total
    }
   
}