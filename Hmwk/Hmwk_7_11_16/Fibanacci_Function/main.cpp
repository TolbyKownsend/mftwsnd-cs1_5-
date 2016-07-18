/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 6th, 2016, 8:45 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int FibSeq1(int);
int FibSeq2(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int index;
    
    //Input Data
    cout<<"Input the index of the fibanacci Seq to obtain value"<<endl;
    cin>>index;
    
    //Process the Data
    
    //Output the processed Data
    cout<<"F("<<index<<")="<<FibSeq1(index)<<endl;
    cout<<"F("<<index<<")="<<FibSeq2(index)<<endl;
    
    //Exit Stage Right!
    return 0;
}

int FibSeq2(int n){
    //Process the seq
    if(n<=0)return 0;
    if (n==1)return 1;
    if (n==2)return 1;
    return FibSeq2(n-1)+FibSeq2(n-2);      
}

int FibSeq1(int n){
    //Declare Variables
    int fim2=1, fim1=1, fi;
    
    //Process the seq
    if (n==1)return fim2;
    if (n==2)return fim1;
    for(int i=3;i<=n;i++){
        fi=fim1+fim2;
        fim2=fim1;
        fim1=fi;
        
    }
    return fi;
}

