/*
@author: Dylan Graham
@date: 6/29/2026
@purpose: This purpose of this program is to utilize a for loop to count to take numbers from 0 to 100 and display their squared values in a table.
*/

//include the directives needed for this program
#include <iostream>

using namespace std;



int main(){
    int minNum= 0;          // starting number 
    int maxNum=100;         // ending number (what we are couting to)
    int squared;            // initializing squared to square the number within for loop


    cout<< "Number | Number Squared"<<endl;         //printing this to start our table for neat formatting
    cout<< "_______________________"<<endl;         //printing this for formating
    for (minNum; minNum<= maxNum; minNum++) {       // starting at 0; while our increment is <= 100; increment 1 time
        squared = minNum * minNum;                  // take whatever increment is and multiply it by self (squared)
        
        //cout << minNum <<"      |"<<squared<< endl;           // ***if below if statements don't make sense comment them out and try this

        if (minNum < 10){                                       // for formatting only if the number is single digit print this
            cout << minNum <<"      |"<<squared<< endl;    
        }
        else if (minNum== 100){                                 // for formatting only if the number is 100 remove two spaces allowing | character to line up properly
            cout << minNum <<"    |"<<squared<< endl;    
        }
        else {                                                  // for formatting only if double digit line the | character up with single and triple digit numbers
            cout << minNum <<"     |"<<squared<< endl;    
        }
    }
   
}