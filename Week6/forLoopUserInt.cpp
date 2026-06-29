/*
@author: Dylan Graham
@date: 6/29/2026
@purpose: This purpose of this program is to utilize a for loop to count from 0 to user determined number using cin
*/

//include the directives needed for this program
#include <iostream>

using namespace std;



int main(){
    const int minimum= 0;                               //our starting number  
    int maximum;                                        //using this to store user input

    cout<< "Enter a number you wish to count to: ";     //prompt user for input
    cin >>maximum;                                      //store user input as maximum

    int num;                                            //will be our count/what we are using to count our iterations with

    for (num = minimum; num< maximum; num++)            //sets number = to 0 (minimum); while it is less than our maximum we will keep going; increment this num each time by 1
        cout<< num<< endl;                              //prints our counter (num) each time
}