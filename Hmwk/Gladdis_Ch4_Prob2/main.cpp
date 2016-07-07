/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 6th, 2016, 9:03 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) 
{ 
    
    //Declare Variables
    const int HIGH_SCORE = 95; // A high score is 95 or greater
    int score1, score2, score3; // To hold the three test scores
    double average; // To hold average score
    
    //Input Data
    cout << "Enter 3 test scores and I will average them: ";
    cin >> score1 >> score2 >> score3;
    
    //Process the Data
    average = (score1 + score2 + score3) / 3.0;
    cout << fixed << showpoint << setprecision(1);
    cout << "Your average is " << average <<endl;
    
    //Output the processed Data
    if (average > HIGH_SCORE)
        cout << "Congradulations! Thats a high score!\n";
    
    //Exit Stage Right!
    return 0;
}