/*
@author: Dylan Graham
@date: 6/22/2026
@purpose: This program prompts the user to enter a grade 10 times
*/

//include the directives needed for this program
#include <iostream>

using namespace std;



int main(){

    int count = 0 ;                         //setting count to keep track of how many grades user enters
    float grade;                            // adding grade to store user input
    float sum = 0;                          // declaring sum as a float so we can store and add user inputs 
    
    cout<< "This program will calculate the average of 10 grades."<< endl;      // user instructions
    
    while (count  <= 9){                   // while count is less than or equal to 9 **since it starts at 0 this will give us 10 inputs**
        cout<<"Please enter a grade: ";    // prompt user for grade
        cin>> grade ;                      // store input as grade
        count= count+1;                    // add 1 to count so we don't end up with infinite loop
        sum = grade + sum;                 // use sum to add grade to sum
    }
    float average = sum / count ;          // take the added 10 values and divide them by the count
    //cout<<count<<endl;                   // used to ensure we are getting the correct count

    cout<< "The average of your your 10 test scores is: "<< average<<"."<< endl;    // display results to the console.
}