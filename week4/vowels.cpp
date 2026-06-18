/*
@author: Dylan Graham
@date: 6/18/2026
@purpose: This program determines if a user entered letter is a constanant or vowel.
*/

//include the directives needed for this program
#include <iostream>

using namespace std;


int main(){

    char letter;    //set character type variable

    cout<< "Enter a letter to check to see if its a constant or vowel: ";   //prompt user for input
    cin>> letter;                                                           //store users input in variable letter

    if (letter == 'a' || letter == 'e' ||letter == 'i' || letter== 'o'|| letter=='u'){  //single quotes for char type ***if letter is a, e, i, o, or u. ***
        cout<<"The letter you have entered: "<< letter<<", is a vowel."<<endl;          //print that the letter is a vowel
    }
    else if (letter == 'A' || letter == 'E' ||letter == 'I' || letter== 'O'|| letter=='U'){ //single quotes for char type  *** if letter is A, E, I, O, or U.
    cout<<"The letter you have entered: "<< letter<<", is a vowel."<<endl;                  // print that the letter is a vowel.
    }   
    else if (letter < 65){                                                                  // if letter is less than the ASCII value or capital A *** found on page 201 of the book table 4-11
        cout<< "You have not entered a letter please restart and try again."<< endl;         // throw this error.
    }

    else {
        cout<<"The letter you have entered: "<< letter<< ", is a constanant."<< endl;       // if not a vowel lower or capital then print that the letter is constanant.
    }
}