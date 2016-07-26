/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 18th, 2016, 7:50 PM
 * Purpose:  ranged based loop
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
    vector<int> numbers (5);
    
    //Input Data
    for (int &val : numbers)
    {
        cout<<"enter an integer value: ";
        cin>>val;
    }
    
    //Process the Data
    cout<<"here are the values you entered: \n";
    for (int val: numbers)
        cout<<val<<endl;
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}