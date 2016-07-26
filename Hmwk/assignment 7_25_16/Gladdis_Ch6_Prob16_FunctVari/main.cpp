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
void anotherFunction();

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    int num = 1; //Local variable
    
    cout << "In main, num is" << num << endl;
    
    anotherFunction;
    cout << "Back in main, num is" << num <<endl;
    //Exit Stage Right!
    return 0;
}

void anotherFunctiion()
{
    int num = 20; 
    
    cout  << "In anotherFunction, num is " << num << endl;
}