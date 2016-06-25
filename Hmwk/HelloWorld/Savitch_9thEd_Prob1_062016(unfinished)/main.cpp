/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on June 20, 2016, 7:00 PM
 * Purpose: Free fall problem
 */

//System Libararies
#include <iostream> // Input/ Output libraries
using namespace std;//Namespace of the System Libraries

//User Libraries

//Global Constant
const float GRAVITY=32.174;//Acceleration sea level ft/sec/sec

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
    float time; //Time in seconds
    float dstance; // Distance in feet
    
//Input Data
cout<<"input time for free-fall in seconds"<<endl;
cin>>time;

//Process the Data
//dstance=1/2*GRAVITY*time*time*;//gives 0 because of int/int division
//dstnace=GRAVITY*time*time*/2;
//dstance=1. of
    
//Output the processed Data
cout<<"The distance dropped during "<<time<<"(secs) =";
cout<<dstnace<<"(ft)"<<endl;


    return 0;
}

