/*
@author: Dylan Graham
@date: 6/29/2026
@purpose: This purpose of this program is to utilize a for loop to count from 0 to 10
*/

//include the directives needed for this program
#include <iostream>

using namespace std;



int main(){
    const int minimum= 0;       //our starting number  
    const int maximum = 10;     //what we wish to count to

    int num;                    //will essentially be our count/what we are using to count our iterations with

    for (num = minimum; num<= maximum; num++)   //sets number = to 0 (minimum); while it is less than or equal to our maximum (10) we will keep going; increment this num each time by 1
        cout<< num<< endl;      // prints our counter (num) each time
}