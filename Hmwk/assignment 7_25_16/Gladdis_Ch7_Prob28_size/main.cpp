/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 18th, 2016, 7:50 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <vector> //
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void showValues(vector<int>);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    vector<int> values;
    
    //Input Data //Put a series of numbers in the vector
    for(int count =0; count <7; count++)
        values.push_back(count*2);
    
    //Process the Data
    
    //Output the processed Data
    showValues(values);
    //Exit Stage Right!
    return 0;
}
void showValues(vector<int> vect)
{
    for (int count =0; count <vect.size(); count++)
        cout<<vect[count]<<endl;
    
}
