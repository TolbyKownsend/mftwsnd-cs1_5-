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
void first();
void second();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    cout << "I am starting in function main.\n";
    first();
    second();
    cout << "Back in function main again";
    
    return 0;
}
void first()
{
    cout << "I am now inside the function second.\n";
}
void second()
{
    cout << "I am now inside the function second.\n";
}