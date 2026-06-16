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

    const int aScore = 90; //constants to hold minimum grades required for A,B,C,D and F
    const int bScore = 80;
    const int cScore = 70;
    const int fDScore =60 ;

    int score1, score2, score3; //variables to hold scores
   

    cout<<"Enter three test scores: "; //prompt user for input
    cin>> score1>>score2>>score3;  //capture inputs from user
    double average= (score1+score2+score3)/3.0; //calculate average scores and assign to average
    cout<<fixed << setprecision(2); // format scores to two decimal places
    cout<< "The average of your three numbers is:  "<< average<< "."<<endl;  // display average score

if (average >= aScore){                         // if score is 90+ print A
        cout<< "Your grade is an A!"<<endl;     
    }
    else if (average >= bScore){                //if not A and still 80 or higher print B
        cout<< "Your grade is an B."<<endl;     
    }
    else if (average >= cScore){                //if not B and still 70 or higher print C
        cout<< "Your grade is an C."<<endl;     
    }
    else if (average >= fDScore){
        cout<< "Your grade is an D."<<endl;     // if not C and still high
    }
    else{
        cout<< "Your grade is an F!"<<endl;
    }
    
    return 0;
}