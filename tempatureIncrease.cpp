/*
@author: Dylan Graham
@date: 6/13/2026
@purpose: This program calculates tempeture at a 2% increase
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

int main(){
    double newYork = 85;    //set recorded temps
    double denver = 88;
    double phoenix = 106;
    double increase = 0.02; // 2% increase

    double newTempNy = (newYork * increase) + newYork; //ensure the mult is done first parentheses may or may not be necessary
    double newTempDen = (denver * increase) + denver;
    double newTempPhoenix = (phoenix * increase) + phoenix;
    cout<< "New York tempature with increase: "<<newTempNy<<"."<<endl;
    cout<< " Denver tempature with increase: " <<newTempDen <<"."<<endl;
    cout<< "Phoenix tempature with increase: " << newTempPhoenix<<"."<<endl; //display new temps to console
    return 0;
}