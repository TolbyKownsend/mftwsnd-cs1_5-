/* 
 * File:   main.cpp
 * Author: Kolby Townsend
 * Created on July 11th, 2016, 10:30 AM
 * Purpose:  Project V2
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cstdlib>

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants - PI, Gravity, Conversions

//Function Prototypes
char square[11]={'0','1','2','3','4','5','6','7','8','9','\0'};
void board();
int win();
void tictac1();
void tictac2();
void menu();
void board2();
int win2();

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
            case '1':tictac1();break;
            case '2':tictac2();break;
            default:cout<<"Not option in menu"<<endl;
        }
    }while(choice>='1'&&choice<='6');
    
    //Exit Stage Right!
    return 0;
}


void tictac1(){
    
cout<<"You are entering Tic-Tac-Toe"<<endl;
int player=1;
int i,choice;
char mark;
char playagain='y';
    
//Input data
    


//Process the data

while(playagain=='y'){
    
    do
    {

     board2();
     player=(player%2)?1:2;
     cout<<"Player "<<player<<" enter a number: ";
     cin>>choice;
     mark=(player==1)?'X':'O';

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
            cout<<"\nINVALID MOVE \n\n";
            player--;

        }
        i=win2();
        player++;
    }while(i==-1);
    board2();
    if(i==1)
    cout<<"Player"<<--player<<" win";
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
    cout<<"You didnt put an valid character so i will take it like(n),so the program will close.\n\n";
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

int win2()
{
    if(square[1]==square[2]&&square[2]==square[3])
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

   else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4'&&square[5] != '5'
    && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
    return 0;

else
return -1;

}

void board2()
{


    cout<<"\tTic Tac Toe\t\t\n\n";
    cout<<"PLAYER 1(X)  ,  PLAYER 2(O)\n\n";
    cout<<"-------"<<endl;
    cout<<"|"<<square[1]<<"|"<<square[2]<<"|"<<square[3]<<"|"<<endl;
    cout<<"-------"<<endl;
    cout<<"|"<<square[4]<<"|"<<square[5]<<"|"<<square[6]<<"|"<<endl;
    cout<<"-------"<<endl;
    cout<<"|"<<square[7]<<"|"<<square[8]<<"|"<<square[9]<<"|"<<endl;
    cout<<"-------"<<endl;

}
    
    

void tictac2(){
    
cout<<"You are entering Cheaters Tic-Tac-Toe"<<endl;     
int player=1;
int i,choice;
char mark;
char playagain='y';
    
//Input data

 


//Process the data

while(playagain=='y'){
    
     
    
    
    do
    {
        
     cout<<"Player 1 or 2\n"<<endl;
     cin>>player;
       
    board();
     
     
     cout<<"Player "<<player<<" enter a number: ";
     cin>>choice;
     mark=(player==1)?'X':'O';

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
            cout<<"\nINVALID MOVE \n\n";
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
    cout<<"You didnt enter a valid character so the program will close.\n\n";
}

//Clear Board

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

int win()
{
    if(square[1]==square[2]&&square[2]==square[3])
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

   else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4'&&square[5] != '5'
    && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9')
    return 0;

else
return -1;

}
//Board Display
void board()
{


    cout<<"\tTic Tac Toe\t\t\n\n";
    cout<<"PLAYER 1(X)  ,  PLAYER 2(O)\n\n";
    cout<<"-------------"<<endl;
    cout<<"|"<<setw(2)<<square[1]<<setw(2)<<"|"<<setw(2)<<square[2]<<setw(2)<<"|"<<setw(2)<<square[3]<<setw(2)<<"|"<<endl;
    cout<<"-------------"<<endl;
    cout<<"|"<<setw(2)<<square[4]<<setw(2)<<"|"<<setw(2)<<square[5]<<setw(2)<<"|"<<setw(2)<<square[6]<<setw(2)<<"|"<<endl;
    cout<<"-------------"<<endl;
    cout<<"|"<<setw(2)<<square[7]<<setw(2)<<"|"<<setw(2)<<square[8]<<setw(2)<<"|"<<setw(2)<<square[9]<<setw(2)<<"|"<<endl;
    cout<<"-------------"<<endl;

} 
    


void menu(){
    cout<<"Project Menu"<<endl;
    cout<<"Choose the number of the game you want to play "<<endl;
    cout<<"Type 1 for Tic-Tac-Toe "<<endl;
    cout<<"Type 2 for Cheaters Tic-Tac-Toe "<<endl;
                
}