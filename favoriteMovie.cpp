/*
@author: Dylan Graham
@date: 6/11/2026
@purpose: This program displays my favorite movie and characters neatly to the console
*/

//include the iostream library for input and output
#include <iostream>
//use the standard namespace to avoid having to type std:: before every standard library function
using namespace std;

//no need for int or return
main(){
    string favoriteMovie = "Gladiator"; 
    string mainCharacter1 = "Maximus ";
    string mainCharacter2 = "Commodus";
    string mainCharacter3 = "Lucilla";
    string mainCharacter4 = "Lucius Verus";
    string mainCharacter5 = "Proximo";

    string actor1 = "Russle Crowe";
    string actor2 = "Joaquin Phoenix";
    string actor3 = "Connie Nielsen";
    string actor4= "Spencer Treat Clark";
    string actor5= "Oliver Reed";
    cout<< "##################################################" << endl;
    cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout<< "                 My Favorite Movie                " << endl;
    cout<< "##################################################" << endl;
    cout<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    cout<< favoriteMovie<< endl;

    cout<< "//////////////////////////////////////////////////" << endl;
    cout<< "/                  Main Characters               /" << endl;
    cout<< "//////////////////////////////////////////////////" << endl;

    cout<< actor1<< "           |    " << mainCharacter1<< endl;
    cout<< actor2<< "        |    " << mainCharacter2<< endl;
    cout<< actor3<< "         |    " << mainCharacter3<< endl;
    cout<< actor4<< "    |    " << mainCharacter4<< endl;
    cout<< actor5<< "            |    " << mainCharacter5<< endl;
}