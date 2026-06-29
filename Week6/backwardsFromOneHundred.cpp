/*
@author: Dylan Graham
@date: 6/29/2026
@purpose: This purpose of this program is to utilize a for loop to count backwards from 100 to 1
*/

//include the directives needed for this program
#include <iostream>

using namespace std;



int main(){
    int desiredNum= 0;      // what we wish to count to
    int startingNum=100;    // what we are starting with


    for (startingNum; startingNum>= desiredNum; startingNum--) {           //starting with 100; while starting number is greaterthan or equal to 1 keep going, decrement starting number each time      
          
        cout << startingNum << endl;                                        // print each decrement here to show each iteration

    }
   
}