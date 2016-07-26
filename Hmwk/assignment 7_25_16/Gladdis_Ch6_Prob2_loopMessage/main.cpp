/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 18th, 2016, 7:50 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void displayMessage()
{
    cout << "Hello from the function displayMessage.\n";
}

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    cout << "Hello from main.\n";
    for (int count = 0; count < 7; count++)
        displayMessage();
    cout << "Back in function main again.\n";
    
    //Input Data
    
    //Process the Data
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}