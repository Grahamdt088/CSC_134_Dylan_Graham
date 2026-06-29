/*
@author: Dylan Graham
@date: 6/29/2026
@purpose: This purpose of this program is break down and explain the programing of another programmer.
*/

//include the directives needed for this program
#include <iostream>

using namespace std;

int main()
{
    int score;                                                  // initialized to hold user input
    int count = 0;                                              // keeps track of how many grades have been entered
    int passingScores = 0;                                      // keeps track of how many passing grades there are
    float total = 0.0f;                                         // stores sum of all grades entered
    bool continueEntering = true;                               // while loop uses the bool true to test if while loop keeps going or stops.                    

    while (continueEntering)                                    //while user chooses they wish to continue (by entering 1)
    {
        cout << "Enter a test score (0 - 100): ";               // prompts user for test score
        cin >> score;                                           // assigns user entered score as score variable

        total += score;                                         // appends score to total so total keeps adding each score into it
        count++;                                                // counts what iteration the loop is in

    if (score >= 70)                                            // if the score is 70+ add one into passing scores
        {
            passingScores++;                                    // add one to passing score if score 70+
        }

        cout << "Enter another score? (1 for true, 0 for false): ";     // prompt the user if they would like to enter another score or not
        cin >> continueEntering;                                        // user deciding if they want to enter another or no
    }

    float average = 0.0f;                                               // initialize variable average as a floating point data type

if (count > 0)                                                          // once loop finishes if the count is greater than 0 meaning we have at lease one grade
    {
        average = total / count;                                        // assign the value of the sum of all grades/the amount of grades entered to average 
    }

    cout << "\nResults" << endl;                                        // dispaly results
    cout << "-------" << endl;                                          // formatting to make it neat
    cout << "Scores Entered: " << count << endl;                        // shows the amount of scores that the user recorded.
    cout << "Passing Scores: " << passingScores << endl;                // shows the number of scores that were 70 or above
    cout << "Average Score: " << average << endl;                       // shows the average of the sum of all scores divided by the number of scores entered

    bool classPassed = average >= 70.0f;                                // if the class average is equal to or greater than 70.0 classPassed = true

    cout << "Class Average Passing: " << classPassed << endl;           // display if the class passed or not using bool value either 1 for true or 0 for false.

    return 0;
}
