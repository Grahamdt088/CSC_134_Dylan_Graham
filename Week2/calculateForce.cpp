/*
@author: Dylan Graham
@date: 6/12/2026
@purpose: This program calculates force by multiplying mass and acceleration
*/

//include the required directives/libraries for this program
#include <iostream>
using namespace std;

int main(){  //double did not work but int did
    double mass = 10; //could also use int
    double acceleration  = 9.81;
    double force= mass*acceleration;
    cout << "The force of an object that weighs " << mass<< " kg " << "traveling at "<< acceleration<< " meters per second is " << force<< " newtons." << endl;
    return 0;
}