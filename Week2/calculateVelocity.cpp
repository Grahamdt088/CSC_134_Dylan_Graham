/*
@author: Dylan Graham
@date: 6/12/2026
@purpose: This program calculates velocity using time and distance travelled
*/

//include the required directives/libraries for this program
#include <iostream>
using namespace std;

int main(){
    int time = 4;
    int distanceTravelled = 400;
    int velocity= distanceTravelled/time;
    cout << "If you travel 4 hours and cover 400 miles your velocity is " << velocity<< " miles per hour." <<endl;
    return 0;
}