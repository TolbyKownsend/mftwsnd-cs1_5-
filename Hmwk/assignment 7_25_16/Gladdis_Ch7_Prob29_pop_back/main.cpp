/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 18th, 2016, 7:50 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <vector>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    vector<int> values;
    
    //Input Data
    values.push_back(1);
    values.push_back(2);
    values.push_back(3);
    cout<<"The size of values is "<< values.size()<<endl;
    
    //Process the Data
    cout<<"popping a value from the vector...\n";
    values.pop_back();
    cout<<"the size of the values is now "<< values.size()<<endl;
    
    //Output the processed Data
    cout<<"popping a value from the vector...\n";
    values.pop_back();
    cout<< "the size of values is now "<< values.size()<<endl;
    //Exit Stage Right!
    return 0;
}