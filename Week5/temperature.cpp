/*
@author: Dylan Graham
@date: 6/22/2026
@purpose: This program prompts the user to enter a temp untill the desire temp has been entered
*/

//include the directives needed for this program
#include <iostream>

using namespace std;



int main(){

    float desiredTemp = 212.34;                 //variable for desired temperature
    float temp;                                 //variable to store user input
while (temp != desiredTemp){                    // if temp does not = desired temp keep going then check user input each iteration.
    
        cout<<"Please enter a temperature: ";   // promprt user for input
        cin>>temp;                              // store user input

    if (temp == desiredTemp){                   // if temp and desired temp are the same  

            cout<< "The temperature has been successfully set, thank you."<<endl;   // display message verifying they are the same
        }   
    }
}