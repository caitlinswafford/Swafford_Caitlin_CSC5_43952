/* 
 * File:   main.cpp
 * Author: Caitlin Swafford
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Sum the numbers between 1 and 10
 * Problem 2 -> Prod the numbers between 1 and 10
 * Problem 3 -> Quot the numbers between 1 and 10 
 * Created on October 13, 2011, 6:44 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//System Users

//Global Constants

//Function Prototypes

//Execution Begins here
int main(int argc, char** argv) {
    //General Menu Format
    //Display the selection
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 4 to solve problem 3 again"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        char choice;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case '1':{
                    int sum=1+2+3+4+5+6+7+8+9+10;
                    cout<<endl;
                    cout<<"Solution to 1 for-loop, sum(1->10)="<<sum<<endl;
                    cout<<endl;
                    break;
                }
                case '2':{
                    int prod=1*2*3*4*5*6*7*8*9*10;
                    cout<<endl;
                    cout<<"Solution n! (1->10)="<<prod<<endl;
                    cout<<endl;
                    break;
                }
                case '3':{
                    int quot=1.0f/2/3/4/5/6/7/8/9/10;
                    cout<<endl;
                    cout<<"Solution to 3 quot(1->10)="<<quot<<endl;
                    cout<<endl;
                    break;
                }
                default:{
                        cout<<"Exit?"<<endl;
                }
};
    return 0;
}

