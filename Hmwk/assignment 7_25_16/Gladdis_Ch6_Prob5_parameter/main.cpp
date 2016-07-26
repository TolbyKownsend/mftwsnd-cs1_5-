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
void displayValue(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    cout << "I am passing 5 to displayValue.\n";
    displayValue(5);
    cout << "Now I am back in main.\n";
    
    //Input Data
    
    //Process the Data
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}
void displayValue(int num)
{
    cout << "The value is " << num << endl;
}