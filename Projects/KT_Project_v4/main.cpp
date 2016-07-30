/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 11th, 2016, 10:30 AM
 * Purpose:  Project V2
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> // Manipulation Library 
#include <cstdlib> // Standrd Libarary
#include <ctime> // Random Number Seed

using namespace std; //Namespace of the System Libraries

//User Libraries

//Function Prototypes
char square[10]={'0','1','2','3','4','5','6','7','8','9'}; //char array for board()
void board(); //holds array
int win();
void menu();
void tictac1();
void tictac2();
void tictac3();
void tictac4();
void filAray(int a[],int n);
void prntAry(int a[],int n,int perLine);
int  linSrch(int [],int,int);
int  number(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    int  r; // declare variables
    srand(time(0)); // random number seed
    r = rand(); // r is rand
    char choice; // players input
    int Score = 0; // score++
    
    //Input Data
    do{
        menu(); // game menu
        cin>>choice; 
    
    //Process the Data and Display Results
        switch(choice){ // switch 1-4 
            case '1':tictac1();break; // normal tic-tac-toe
            case '2':tictac2();break; // a cheaters version were you can sneak in turns
            case '3':tictac3();break; // vs. the computer
            case '4':tictac4();break; // i tried to re do tic-tac-to using 2D array and search
            default:cout<<"Not option in menu"<<endl;
        }
    }while(choice>='1'&&choice<='4');
    
    //Exit Stage Right!
    return 0;
}

void tictac1(){ // normal tic-tac-toe
    
cout<<"You are entering Tic-Tac-Toe"<<endl;
cout<<setw(20)<<endl;
int player=1; // declare variables
int i,choice;
char mark; // X or O
char playagain='y';
int Score = 0;
    
//Process the data

while(playagain=='y'){
    
    do
    {
     board();
     player=(player%2)?1:2; // player one moves than player 2
     
     cout<<"Player "<<player<<" enter a number: ";
     cin>>choice;
     mark=(player==1)?'X':'O'; // 1=X 2=0 done with ?

               if(choice==1 && square[1]=='1')
               square[1]=mark;

               else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
        else
        {
            cout<<"  INVALID MOVE   " << endl;
            player--;
        }
        i=win();
        player++;
                
    }while(i==-1);
    board();
    if(i==1)
    cout<<"Player"<<--player<<" win";
    if(i==0)
    cout<<"Game draw";

    
cout<<"   Wanna play again(y/n)?:";
cin>>playagain;
cout<<endl;

if(playagain=='y')
  {
      cout<<"You choice to play again\n\n";
  }
  else if(playagain=='n')
  {
      cout<<"You choice not to play again\n\n";
  }
else
{
    cout<<"You didnt put an valid character so i will take it like(n),so the program will close.\n\n";
}
// clear board
for(int c=0;c<40;c++)
{
cout << "****";
}
cout << endl;
// numbers in array set back to their original value
    square[1] = '1';
    square[2] = '2';
    square[3] = '3';
    square[4] = '4';
    square[5] = '5';
    square[6] = '6';
    square[7] = '7';
    square[8] = '8';
    square[9] = '9';
    }
}
    
void tictac2(){ // tictac 2
cout << "You are entering Cheaters Tic-Tac-Toe" << endl;
cout << setw(20) << endl;
int player=1; // declare varibles
int i,choice;
char mark;
char playagain='y';
int Score = 0;
//Process the data

while(playagain=='y'){
    
    do
    {
     cout <<"Games played: " << Score << endl;
     
        
     cout<<"Player 1 or 2  "<<endl; // prompt player whether they want to play on player 1 or 2
     cin>>player;
       
    board();
     
     cout<<"Player "<<player<<" enter a number: ";
     cin>>choice;
     mark=(player==1)?'X':'O'; // player 1 'X' player 2 'O'

               if(choice==1 && square[1]=='1') // if choice is on the board it is replaced with mark
               square[1]=mark;

                else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
        else
        {
            cout<<"  INVALID MOVE " << endl; // else INVALID MOVE
            player--;
        }
        i=win();
        player++;
        
    }while(i==-1);
    
    board();
    if(i==1)
    cout<<"Player"<<--player<<" win";
    Score++;
    if(i==0)
    cout<<"Game draw";

cout<<"   Wanna play again(y/n)?:";
cout<<setw(20)<<endl;
cin>>playagain;
cout<<endl;

if(playagain=='y')
  {
      cout << "You choice to play again" << endl;
      cout << setw(20)<<endl;
  }
  else if(playagain=='n')
  {
      cout << "You choice not to play again" << endl;
      cout<<setw(20)<<endl;
  }
else
{
    cout<<"You didnt enter a valid character so the program will close." << endl;
    cout<<setw(20)<<endl;
}
// clear board
for(int c=0;c<40;c++){
cout<<"****";
}
cout<<endl;
    square[1] = '1';
    square[2] = '2';
    square[3] = '3';
    square[4] = '4';
    square[5] = '5';
    square[6] = '6';
    square[7] = '7';
    square[8] = '8';
    square[9] = '9';
    }
}

int win() // potential case's to win at tic tac toe
{
    if(square[1]==square[2]&&square[2]==square[3]) // the 2 middle char on the board holds place while everything has been changed // else win() wont register
    return 1; 

    else if(square[4]==square[5]&&square[5]==square[6])
    return 1;

    else if(square[7]==square[8]&&square[8]==square[9])
    return 1;

    else if(square[1]==square[4]&&square[4]==square[7])
    return 1;

    else if(square[2]==square[5]&&square[5]==square[8])
    return 1;

    else if(square[3]==square[6]&&square[6]==square[9])
    return 1;

    else if(square[1]==square[5]&&square[5]==square[9])
    return 1;

    else if(square[3]==square[5]&&square[5]==square[7])
    return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4'&&square[5] != '5' // else the board is full with no winner
    && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
    return 0; // return 0

    else // else
return -1; // return -1

}

void board()//Board Display
{

    cout<<setw(20)<<endl;
    cout<<"(X)  vs.  (O)\n\n";
    cout<<"-------------"<<endl;
    cout<<"|"<<setw(2)<<square[1]<<setw(2)<<"|"<<setw(2)<<square[2]<<setw(2)<<"|"<<setw(2)<<square[3]<<setw(2)<<"|"<<endl;
    cout<<"-------------"<<endl;
    cout<<"|"<<setw(2)<<square[4]<<setw(2)<<"|"<<setw(2)<<square[5]<<setw(2)<<"|"<<setw(2)<<square[6]<<setw(2)<<"|"<<endl;
    cout<<"-------------"<<endl;
    cout<<"|"<<setw(2)<<square[7]<<setw(2)<<"|"<<setw(2)<<square[8]<<setw(2)<<"|"<<setw(2)<<square[9]<<setw(2)<<"|"<<endl;
    cout<<"-------------"<<endl;

}

void tictac3(){
    
cout<<"You are entering Tic-Tac-Toe vs. Computer"<<endl;
cout<<setw(20)<<endl;
int player=1;
int i,choice;
char mark;
char playagain='y';
int Score = 0;

//Input data
cout << "Tic-Tac-Toe vs. Computer" << endl;

//Process the data

while(playagain=='y'){
    
    do
    {    
     board();
     player=(player%1)?1:1;
     cout <<"Score: " << Score << ":" << "0" << endl;  
     cout<<"Human "<<" enter a number: ";
     cin>>choice;
     mark=(player==1)?'X':'X'; // human moves are only X

     if(choice==1 && square[1]=='1')
       square[1]=mark;

     else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
        else
            
            player=(player%1)?2:2;
     
     cout<<"Computer "<<"enters a number.";
     choice = rand()%9+1; // randomly choose's a number between 1-9 so looks like its playing 
     
     mark=(player==1)?'O':'O'; // computers move only O's

     if(choice==1 && square[1]=='1')
       square[1]=mark;

     else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
        else
            choice == 1+rand()%9;
                
        
     
        i=win();
        player++;
    }while(i==-1);
    board();
    if(i==1) // win returns a 1
    cout<<"Human"<<" wins";
    Score++; // score increments after every game, couldnt implement a full one  
    if(i==0)
    cout<<"Game draw";



cout<<"\n\nWanna play again(y/n)?:";
cin>>playagain;
cout<<endl;

if(playagain=='y')
  {
      cout<<"You choice to play again\n\n";
  }
  else if(playagain=='n')
  {
      cout<<"You choice not to play again\n\n";
  }
else
{
    cout<<"You didnt put an valid character so the program will close\n\n";
}

for(int c=0;c<40;c++)
{
cout<<"****";
}
cout<<endl;

    square[1] = '1';
    square[2] = '2';
    square[3] = '3';
    square[4] = '4';
    square[5] = '5';
    square[6] = '6';
    square[7] = '7';
    square[8] = '8';
    square[9] = '9';
    }
}  

void tictac4(){
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=9;
    int array[SIZE],value,lindx;
    
    
    //Input Data
    filAray(array,SIZE); // array with size
    prntAry(array,SIZE,3); // size x3
    cout<<"What value would you like to find?"<<endl;
    cin>>value;
    
    //Process the Data
    lindx=linSrch(array,SIZE,value+1); // liniar search gives index position
    
    //Output the processed Data
    if(lindx==-1)cout<<"Linear Value not found"<<endl;
    else cout << "positions @: " << lindx << endl;  // postion on grid 
    //Exit Stage Right!
    
}

int  linSrch(int a[],int n,int val){ // linSrch
    for(int i=0;i<n;i++){
        if(a[i]==val)return i;
    }
    
}

void prntAry(int a[],int n,int perLine){ // print array 3 x3 
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(5)<<a[i];
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

void filAray(int a[],int n){
    //Declare variables
    int step=1; // steps 1 array increments <=9
    for(int i=0,beg=1;i<n;i++,beg+=step){
        a[i]=number(beg);
    }
}

int number(int beg){
for(int i=0;i<9; i++); // number from 1-9

}
    
    


void menu(){ // menu
    cout<<"          "<<"SUPER COOL TIC-TAC-TOE"<<endl;
    cout<<setw(10)<<endl;
    cout<<"Choose the number of the game you want to play "<<endl;
    cout<<setw(10)<<endl;
    cout<<"          "<<"1 for Normal Tic-Tac-Toe "<<endl;
    cout<<"          "<<"2 for Cheaters Tic-Tac-Toe "<<endl;
    cout<<" "<<" **NEW** 3 for Tic-Tac-Toe vs. Computer **NEW** "<<endl;
    cout<<" "<<" **NEW** 4 for 2D Array Linear Search Tic-Tac-Toe **NEW** "<<endl;
    cout<<" "<<setw(30)<<"[Unfinished]"<<setw(10)<<endl;
    cout<<setw(10)<<endl;             
}