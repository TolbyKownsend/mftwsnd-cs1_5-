/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
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
int getRadius();
int square(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int PI = 3.14159;
    int radius;
    int area;
    
    //Input Data
    cout << fixed << showpoint << setprecision(2);
    
    //Process the Data
    cout << "This program calculates the area of ";
    cout << " a circle.\n";
    radius = getRadius();
    
    
    area = PI * square(radius);
    //Output the processed Data
    cout << "The area is " << area << endl;
    //Exit Stage Right!
    return 0;
}
int getRadius
{
    int rad;
    
    cout << "enter the radius of the cirlcle";
    cin
}