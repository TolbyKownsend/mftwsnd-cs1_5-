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
bool isEven(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int val;
    
    //Input Data
    cout << "Enter n interger and I will tell you ";
    cout << "if it is even or odd: ";
    cin >> val;
    
    //Process the Data
    if (isEven(val))
        cout<< val << "is even.\n";
    else
        cout << val << "is odd.\n";
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}

bool isEven(int number)
{
    bool status;
    if (number % 2 == 0)
        status = true;
    else
        status = false;
    return status;
    
}