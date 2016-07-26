/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 18th, 2016, 7:50 PM
 * Purpose:  showValues
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void showValues(int [], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE1 = 8;
    const int SIZE2 = 5;
    int set1[SIZE1] = {5, 10, 15, 20, 25, 30, 35, 40};
    int set2[SIZE2] = {2, 4, 6, 8, 10};
    
    //Input Data
    
    //Process the Data
    //Pass set1 to showValue
    showValues(set1, SIZE1);
    //Pass set2 to showValue 
    showValues(set2, SIZE2);        
    
    //Exit Stage Right!
    return 0;
}
void showValues(int nums[], int size)
{
    for(int index = 0; index < size; index++)
        cout << nums[index] << " ";
    cout << endl; 
}