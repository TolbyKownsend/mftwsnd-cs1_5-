/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 6th, 2016, 8:45 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float save2(float,float,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float fv,pv,intRate;
    int nComPds;
    
    //Input Data
    pv=100.0f;//Fix the principle in $'s
    intRate=0.06f;//Municipal bond rate
    nComPds=12;//Number of compounding period 12 yrs
    
    //Process the Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Resultant Savings F2 = $"<<save2(pv,intRate,nComPds)<<endl;
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}
float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}