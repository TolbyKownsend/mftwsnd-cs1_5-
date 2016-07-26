/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 18th, 2016, 7:50 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int NUM_DIVS = 3;
    const int NUM_QTRS = 4;
    int sales[NUM_DIVS][NUM_QTRS];
    int totalSales = 0;
    int div, qtr;
    
    cout << "This program will calculate the total sales \n\n";
    
    //Input Data
    
    //Process the Data
    for (div = 0; div < NUM_DIVS; div++);
    {
        for (qtr = 0; qtr < NUM_QTRS; qtr++)
        {
            cout << "Division " << (div +1);
            cout << ", Quater " << (qtr + 1) << ": $";

        }
        cout << endl; //Print blank line
    }
    
    //Output the processed Data
    for (div = 0; div < NUM_DIVS; div++)
    {
        for (qtr = 0; div < NUM_DIVS; qtr++)
            totalSales += sales[div][qtr];
    }
    cout << fixed << showpoint << setprecision(2);
    cout << "The total sales for the company are: $";
    cout << totalSales << endl;
    
    //Exit Stage Right!
    return 0;
}