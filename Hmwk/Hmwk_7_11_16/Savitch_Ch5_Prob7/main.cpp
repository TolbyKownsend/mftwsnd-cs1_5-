/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 6th, 2016, 8:45 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string> //String Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
bool isLpYr(int);
int CentVal(int);
int YrVal(int);
int monVal(int,int);
int dayVal(int,int,int);
string dayWeek(int,int,int);


//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    string month;
    int day;
    int year;
            
    //Input Data
    
    //Process the Data
    cout<<"Year = 2000"<<(isLpYr(2000)?'T':'F')<<endl;
    cout<<"Year = 1900"<<(isLpYr(1900)?'T':'F')<<endl;
    cout<<"Year = 2016"<<(isLpYr(2016)?'T':'F')<<endl;
    cout<<"Year = 2008 "<<CentVal(2008)<<endl;
    cout<<"Year = 2008 "<<YrVal(2008)<<endl;
    cout<<"July 4, 2008 = "<<dayWeek(4,7,2008)<<endl;
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}

string dayWeek(int day,int month,int year){
    switch(dayVal(day,month,year)){
        case 0:return "sunday";
        case 1:return "monday";
        case 2:return "tuesday";
        case 3:return "wednseday";
        case 4:return "thursday";
        case 5:return "friday";
        default:return "saturday";
    }
}

int dayVal(int day,int month,int year){
    return (day+monVal(month,year)+YrVal(year)+CentVal(year))%7;
    
}

int monVal(int month,int year){
    switch(month){
        case 1: return (isLpYr(year)?6:0);
        case 2: return (isLpYr(year)?2:3);
        case 3:
        case 11: return 3;
        case 4: 
        case 7: return 6;
        case 5: return 1;
        case 6: return 4;
        case 8: return 2;
        case 9: 
        case 12: return 5;
        default: return 0;
    }
}

int YrVal(int year){
    return year%100+year%100/4;
}

int CentVal(int year){
    //Declare a variable
    return(3-(year/100)%4)*2; 
}

bool isLpYr(int year) {
    if(year%400==0||(year%4==0&&!(year%100==0)))return true;
    else return false;
}