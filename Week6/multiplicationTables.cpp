/*
@author: Dylan Graham
@date: 6/29/2026
@purpose: This purpose of this program is to utilize a for loop to count to display the multiplication table of a user selected number
*/

//include the directives needed for this program
#include <iostream>

using namespace std;



int main(){
    int minNum= 0;          // starting number 
    int maxNum=12;          // ending number (what we are couting to)
    int product;            //initialized to multiply iteration by user selected number
    int selectedNum;        // initializing to store user input

    cout<<"Enter a number to see its multiplication table: ";   // prompt user to enter a number
    cin>>selectedNum;                                           // store user entered number as selectedNum


    for (minNum; minNum<= maxNum; minNum++) {                   // starting at 0; untill minimum number >= maxNum; increment by 1
        product = minNum * selectedNum;                         // product takes user entered number and multiplys it by iteration count(minNum)
        
        cout << selectedNum <<" x " <<minNum<< " = " << product<<endl;      // print user entered number multiplyed by iteration          

    }
   
}