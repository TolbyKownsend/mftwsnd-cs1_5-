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
    const int NUM_EMPLOYEES = 5;
    int hours[NUM_EMPLOYEES];
    int payRate;
    int grossPay;
    
    //Input Data
    cout << "Enter the hours worked by ";
    cout << NUM_EMPLOYEES << " employees who all\n";
    cout << "earn the same hourly rate.\n";
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        cout << "Employees #" << (index + 1) <<": ";
        cin >> hours[index];
    }
    
    //Input Again
    cout << "Enter the houly rate for all the employees: ";
    cin >> payRate;
    
    //Process the Data
    cout << "here is the gross pay for each employee: ";
    cout << fixed << showpoint << setprecision(2);
    for (int index = 0; index < NUM_EMPLOYEES; index++)
    {
        grossPay = hours[index] * payRate;
        cout << "Employee #" << (index + 1);
        cout << ": $" << grossPay << endl;
    }
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}