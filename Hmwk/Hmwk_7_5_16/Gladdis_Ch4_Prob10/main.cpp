/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 6th, 2016, 9:03 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    char employed, // Currently employed, Y or N
            recentGrad; // Recent Graduate, Y or N
    
    //Input Data // is the user employed and a recent graduate?
    cout << "Anwser the following questions\n";
    cout << "with either Y for yes or ";
    cout << "N for No.\n";
    cout << "Are you employed? ";
    cin >> employed;
    cout << "have you graduated from college ";
    cout << "in the past 2 years? ";
    cin >> recentGrad;
    
    //Process the Data
    if (employed == 'Y')
    {
        if (recentGrad == 'Y') // Nested if
        {
            cout << "You qualify for the special ";
            cout << "interest rate.\n";
        }
    }
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}

