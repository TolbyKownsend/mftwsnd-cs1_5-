/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
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
int avgVector(vector<int>);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    vector<int> values; //a vector to hold values
    int numValues; //the number of values
    int average; //to hold the average
    
    //Input Data
    cout<<"how many of values do you wish to average ";
    cin>>numValues;
    
    //Process the Data
    for (int count=0; count<numValues; count++)
    {
        int tempValue;
        cout<<"enter a value: ";
        cin>>tempValue;
        values.push_back(tempValue);
    }
    //Output the processed Data
    average=avgVector(values);
    cout<<"anverage: "<<average<<endl;
    //Exit Stage Right!
    return 0;
}
int avgVector(vector<int> vect)

{
    int total = 0;
    int avg;

if (vect.empty()) //determin if the vector is empty
{
    cout<<"no values to average\n";
    avg=0.0;
}
else
{
    for(int count = 0; count < vect.size(); count++)
        total += vect[count];
    avg = total/vect.size();
    
    }
return avg;
}