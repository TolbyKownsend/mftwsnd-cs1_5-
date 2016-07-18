/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 6th, 2016, 8:45 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream> // Input/Output Library
#include <iomanip> //
#include <string> // String
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    const int PRICE_A = 249.0,
            PRICE_B = 299.0
    string partNum; // Holds a stereo part number
    
    //Input Data
    cout << "The stereo part numbers are:\n"
         << "Boom Box: part number S-29A \n"
         << "Shelf Model: part number S-29B \n"
         << "Enter the part number of the stereo you \n"
            << "wish to purchase: ";
    cin >> partNum;
            
     //Process the Data
    cout << fixed << showpoint << setprecision(2);
    
    //Output the processed Data
    if (partNum == "S-29A")
        cout  << "The price is $" << PRICE_A << endl;
    else if (partNum == "S-29B")
        cout << "The price is $" << PRICE_B << endl;
    else
        cout << partNum << " is not a valid part number.\n";
    
    //Exit Stage Right!
    return 0;
}