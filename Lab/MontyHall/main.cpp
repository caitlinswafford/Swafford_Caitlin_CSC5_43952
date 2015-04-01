/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on April 1, 2015, 8:48 AM
 *      Purpose: Play the Monty Hall Game
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    unsigned int nGames,win=0,loss=0;
    unsigned int door, doorOpn,prize,othDoor;
    char stay;
    //Prompt user for inputs
    cout<<"This is the Monty Hall Game, Let's make a deal!"<<endl;
    cout<<"How many games would you like to play (1-4x10^9?"<<endl;
    cin>>nGames;
    cout<<"Are you going to stay if given the opportunity type S for Stay"<<endl;
    cout<<"Type anything else to choose the other door"<<endl;
    cin>>stay;
    //Loop for all the games
    for(int game=1;game<=nGames;game++){
        //Randomly choose your door
        door=rand()%3+1;
        //Randomly choose the prize door
        prize=rand()%3+1;
        //Randomly choose the door to open
        do{
                doorOpn=rand()%3+1;
        }while(door==doorOpn||prize==doorOpn);//Can't be the same
        //What is the other door
        do{
                othDoor=rand()%3+1;
        }while(othDoor==doorOpn||othDoor==door);//Can't be the same
        //cout<<"D="<<door<<" OthD="<<othDoor<<"OpnD="<<doorOpn<<prize="<<prize<<endl;
        //Swap the doors if given the opportunity
        if(stay!='S'||stay!='s'){
             door=othDoor;
        }
        //Now statistically count how many wins and losses
        if(door==prize)win++;
        else loss++;
    }
    //Output the results
    cout<<"Out of "<<nGames<<" played!"<<endl;
    cout<<"I win by staying -> "<<win<<" times"<<endl;
    cout<<"vs losing "<<loss<<" times"<<endl;
   //Exit Stage Right
    return 0;
}

