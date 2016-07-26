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
int binarySearch(const int [], int, int);
const int SIZE = 20;

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int idNums[SIZE] = {101,142,147,189,199,207,222,
                        234,289,296,310,319,388,394,
                        417,429,447,521,536,600};
    int results;
    int empID;
    
    //Input Data
    cout << "Enter the employees ID you wish to search for: ";
    cin>> empID;
    
    //Process the Data
    results = binarySearch(idNums, SIZE, empID);
    
    //Output the processed Data
    if (results == -1)
        cout << "That number does not exist in the array.\n";
    else
    {
        cout << "Thats ID is found at element " << results;
        cout << " in the array.\n";
    }
    //Exit Stage Right!
    return 0;
}

int binarySearch(const int array[], int size, int value)
{
    int first = 0,
        last = size -1,
            middle,
            postion = -1;
    bool found = false;
    
    while (!found && first <= last)
    {
        middle = (first + last) / 2;
        if (array[middle] == value)
            
        {
            found = true;
            postion = middle;
        }
        else if (array[middle] > value)
            last = middle - 1;
        else
            first = middle + 1;
    }
    return postion;
}