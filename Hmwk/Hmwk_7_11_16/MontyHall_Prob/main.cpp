/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 6th, 2016, 9:03 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib> //Random numbr seed
#include <ctime> //Time function
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    int nPLay, nWins=0, nLose=0;
    
    //Input Data
    cout<<"How many prices right games to play?"<<endl;
    cin>>nPlays;
    
    //Process the Data
    for(int game=1;game<=nPlays;game++){
        int prize=rand()%3+1;//[1,2,3]
        int ourDoor=rand()%3+1;//[1,2,3]
        int opnDoor
        do {
            opnDoor=rand()%3+1;//[1,2,3]
            
        }while(opnDoor)
    }
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}