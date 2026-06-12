/*
@author: Dylan Graham
@date: 6/12/2026
@purpose: This program calculates voltage given current and resistance
*/

//include the required directives/libraries for this program
#include <iostream>
using namespace std;

int main(){
    int amps = 10;
    int ohms = 2;
    int voltage = amps*ohms;
    cout << "The voltage calculated from having a current of "<< amps<< " amps and a resistance of " << ohms<< " ohms is " << voltage<< " volts." <<endl;
    return 0;
}