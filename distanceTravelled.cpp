/*
@author: Dylan Graham
@date: 6/12/2026
@purpose: This program calculates distance travelled using time and velocity
*/

//include the required directives/libraries for this program
#include <iostream>
using namespace std;

int main(){
    int time = 2;
    int velocity = 80;
    int distanceTravelled= time*velocity;
    cout << "The distance travelled in 2 hours at 80 mph is " << distanceTravelled<< " miles." <<endl;
    return 0;
}