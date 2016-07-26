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
void deeper()
{
    cout << "I am now inside the function deeper.\n";
}
void deep()
{
    cout << "I am now inside the function deep.\n";
    deeper();
    cout << "Now i am back in deep.\n";
}
//Execution Begins Here!
int main(int argc, char** argv) 
{
    cout << "I am starting in function main.\n";
    deep();
    cout << "Back in function main again.\n";
    
    //Exit Stage Right!
    return 0;
}