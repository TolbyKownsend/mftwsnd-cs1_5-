/* 
 * File:   main.cpp
 * Author: Kolby Townsendd
 * Created on July 18th, 2016, 7:50 PM
 * Purpose:  double value
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void doubleArray(int [], int);
void showValues(int [], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ARRAY_SIZE = 7;
    int set[ARRAY_SIZE] = {1,2,3,4,5,6,7};
    
    //
    cout << "The array's value are: \n";
    showValues(set, ARRAY_SIZE);
    
    //
    doubleArray(set, ARRAY_SIZE);
    
    //
    cout << "After calling doubleArray the values are:\n";
    showValues(set, ARRAY_SIZE);
    
    //Exit Stage Right!
    return 0;
}
void doubleArray(int nums[], int size)
{
    for (int index = 0; index < size; index++)
        nums[index] *= 2;
    
}
void showValues(int nums[], int size)
{
    for(int index = 0; index < size; index++)
        cout << nums[index] << " ";
    cout << endl;
}