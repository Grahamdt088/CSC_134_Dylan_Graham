/*
@author: Dylan Graham
@date: 6/13/2026
@purpose: This program calculates the average of 3 test scores and prints result to console.
*/

//include the directives needed for this program
#include <iostream>
#include <iomanip>
using namespace std;


int main(){

    
    int score1, score2, score3; //variables to hold scores
    double average; //variable to hold average

    cout<<"Enter three test scores: "; //prompt user for input
    cin>> score1>>score2>>score3;  //capture inputs from user
    average= (score1+score2+score3)/3.0; //calculate average scores and assign to average
    cout<<fixed << setprecision(2); // format scores to two decimal places
    cout<< "The average of your three numbers is:  "<< average<< "."<<endl;  // display average score


    
    return 0;
}