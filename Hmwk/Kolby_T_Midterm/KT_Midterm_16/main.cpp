/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 13, 2016
 * Purpose:  Midterm Menu
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip> //


using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants - PI, Gravity, Conversions

//Function Prototypes
void prob1();
void prob2();
void prob3();
void prob4();
void prob5();
void prob6();
void menu();

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Input Data
    
    do{
        menu();
        cin>>choice;
    
    //Process the Data and Display Results
        switch(choice){
            case '1':prob1();break;
            case '2':prob2();break;
            case '3':prob3();break;
            case '4':prob4();break;
            case '5':prob5();break;
            case '6':prob6();break;
            default:cout<<"Not option in menu"<<endl;
        }
    }while(choice>='1'&&choice<='6');
    
    //Exit Stage Right!
    return 0;
}

//
//
//                                 Problem 1
//
//
//
//Displays Menu
//     Inputs  - None

//     Outputs - Solution to Problem 1
void prob1(){
    //Declare Variables
    
    short num;
    unsigned short reverse;
    
    //Input Data
    
    cout << "Enter an integer: ";
    cin >> num;
    while(num != 0)
    {
        int remainder = num%10;
        reverse = reverse*10 + remainder;
        num/=10;
    }
    
    //Process the Data
    
    if(reverse <= 32000)
    {
        cout << "signed" << endl;
    }
    else if(reverse < 32000 || reverse < 65535)
    {
        cout << "unsigned" << endl;
    }
    else
    {
        cout << "conversion not possible" << endl;
    }
    cout << " " << endl;
    
    //Output the processed Data
    
    cout << "Reversed number = " << reverse;
    
    
    }
//
//
//                                 Problem 2
//
//
//
//Displays Menu
//     Inputs  - None

//     Outputs - Solution to Problem 2
void prob2(){
    cout<<"You are entering Problem 2"<<endl;
    long int x,q;
int nr=0;
long int p=1;
int par;
unsigned short n1000s,n100s,n10s,n1s;//Strip off the digits
    

    cout<<"enter a number between 1-10"<<endl;
    cout<<"to turn into *'s "<<endl;
    cin>>x;
    
    n1000s=(x-x%1000)/1000;
    switch(n1000s){
        case 9:cout<<"*********";break;
        case 8:cout<<"********";break;
        case 7:cout<<"*******";break;
        case 6:cout<<"******";break;
        case 5:cout<<"*****";break;
        case 4:cout<<"****";break;
        case 3:cout<<"***";
        case 2:cout<<"**";
        case 1:cout<<"*";
        
        
    }
 
    //Hundreds Position
    x-=n1000s*1000;
    n100s=(x-x%100)/100;
    switch(n100s){
        case 9:cout<<"*********";break;
        case 8:cout<<"********";break;
        case 7:cout<<"*******";break;
        case 6:cout<<"******";break;
        case 5:cout<<"*****";break;
        case 4:cout<<"****";break;
        case 3:cout<<"***";
        case 2:cout<<"**";
        case 1:cout<<"*";
    }
    
    //Tens Position
    x-=n100s*100;
    n10s=(x-x%10)/10;
    switch(n10s){
        case 9:cout<<"*********";break;
        case 8:cout<<"********";break;
        case 7:cout<<"*******";break;
        case 6:cout<<"******";break;
        case 5:cout<<"*****";break;
        case 4:cout<<"****";break;
        case 3:cout<<"***";
        case 2:cout<<"**";
        case 1:cout<<"*";
    }
    
    //Tens Position
    x-=n10s*10;
    n1s=(x-x%1)/1;
    switch(n1s){
        case 9:cout<<"*********";break;
        case 8:cout<<"********";break;
        case 7:cout<<"*******";break;
        case 6:cout<<"******";break;
        case 5:cout<<"*****";break;
        case 4:cout<<"****";break;
        case 3:cout<<"***";
        case 2:cout<<"**";
        case 1:cout<<"*";
    }
    
    
    cout << "                " << endl;
    cout << "Give me a number to 4 digit number to stack ";
    string number;
    cin >> number;
    
    cout << number[0] << endl;
    cout << number[1] << endl;
    cout << number[2] << endl;
    cout << number[3] << endl;
    cin.get();
    cin.get();
    cin.get();
    cin.get();
}

//
//
//                                 Problem 3
//
//
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 3
void prob3(){
    cout<<"You are entering Problem 3"<<endl;
    
    //Declare Variables
    string date = "01/01/15";
    string payee = "Jon Doe";
    string amount = "$811.00"; 
    string cardHolder = "Jan Doe";
    
    //Input Data
    
    
    //Process the Data
   
    
    //Output the processed Data
    
    cout<<"             "<<endl;
    cout<<payee<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE ZIP"<<"            "<<"Date: "<<date<<endl;
    cout<<"Pay to the order of: "<<payee<<"         "<<amount<<endl;
    cout<<"Eight Hundred Eleven and no/100s Dollars "<<endl;
    cout<<"Bank of CSC5"<<endl;
    cout<<"FOR: "<<"Gotta pay the rent here"<<"     "<<cardHolder<<endl;
    cout<<"             "<<endl;
    
    //Exit Stage Right!
}

//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//                                 Problem 4
//000000011111111112222222222333333333344444444445555555555666666666677777777778
//345678901234567890123456789012345678901234567890123456789012345678901234567890
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 4
void prob4(){
    cout<<"You are entering Problem 4"<<endl;
    
    
}

//
//
//                                 Problem 5
//
//
//
//Displays Menu
//     Inputs  - hrsWrkd, payRate
//     Outputs - Gross pay
void prob5(){
    cout<<"You are entering Problem 5"<<endl;
    
    float hrsWrkd;//Hours worked
    float payRate; //$s/hr
    char  DblTime=20;//Double time starts at 20 hours
    char TrplTime=40;//Tripe time starts at 40 hours
    float payChck;//Paycheck in $'s
    
    //Input Data
    cout<<"Input hours "<<endl;
    cin>>hrsWrkd;
    cout<<"Pay rate $/hr "<<endl;
    cin>>payRate;
    
    //Process the Data with an if statements
    if(hrsWrkd<DblTime)
            payChck=hrsWrkd*payRate;//Straight time
    if(hrsWrkd>=DblTime)
            payChck=hrsWrkd*payRate+(hrsWrkd-DblTime)*payRate*2;//time doubled
    if(hrsWrkd>=TrplTime)
        payChck=hrsWrkd*payRate+(hrsWrkd-TrplTime)*payRate*3;
    
    //Output the processed Data
    cout<<"Hours worked = "<<hrsWrkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Double time starts at "<<static_cast<int>(DblTime)<<" hrs"<<endl;
    cout<<"Triple time starts at "<<static_cast<int>(TrplTime)<<" hrs"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Gross pay = $"<<payChck<<endl;
    cout<<"             "<<endl;
    return;
    
}

//
//
//                                 Problem 6
//
//
//
//Displays Menu
//     Inputs  - None
//     Outputs - Solution to Problem 6
void prob6(){
    cout<<"You are entering Problem 6"<<endl;
    
    //Declare Variables
    unsigned int fact=1,n;
    
    //Input Data
    cout<<"Do you like factorials? "<<endl;
    cout<<"Input a number which will then output n!"<<endl;
    cin>>n;
    
    //Process the Data
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    
    //Output the processed Data
    cout<<n<<"!="<<fact<<endl;
    cout<<"             "<<endl;
    
    //Exit Stage Right!
    
}

//
//
//                                 MENU
//
//
//
//Displays Menu
//     Inputs  - None
//     Outputs - The Menu
void menu(){
    cout<<"Menu Program for Midterm"<<endl;
    cout<<"Simple choose the number for the problem to display"<<endl;
    cout<<"Type 1 for Problem 1"<<endl;
    cout<<"Type 2 for Problem 2"<<endl;
    cout<<"Type 3 for Problem 3"<<endl;
    cout<<"Type 4 for Problem 4"<<endl;
    cout<<"Type 5 for Problem 5"<<endl;
    cout<<"Type 6 for Problem 6"<<endl;              
}
