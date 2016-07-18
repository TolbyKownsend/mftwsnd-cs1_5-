/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 12th, 2016, 8:45 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // 
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    const int START_KPH = 60, //
            END_KPH = 130,
            INCREMENT = 10;
    // Constant for the conversion factor
    const int CONVERSION_FACTOR = 0.6214;
    //Variables 
    int kph; 
    int mph; 
    //Set 
    cout << fixed << showpoint << setprecision(1);
    
    // Display 
    cout << "KPH\tMPH\n";
    cout << "--------------\n";
    
    //Input Data
    for (kph = START_KPH; kph <= END_KPH; kph += INCREMENT)
    {
    
    //Process the Data
    mph = kph * CONVERSION_FACTOR;
    //Display the speed 
    
    //Output the processed Data
    cout << kph << "\t" << mph << endl;
    
    //Exit Stage Right!
    }
    return 0;
}
