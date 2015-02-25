/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on February 25, 2015, 11:15 AM
 */

//System Libraries
#include <iostream>//I/O Library
using namespace std;//I/O Library under std namespace

//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    //Inputs:
    //  Pay Rate = payRate -> $'s/hr
    //  Hours Worked = hrsWrkd -> hrs
    //Output: 
    //  Gross Pay Check Amount = payChk -> $'s
    float payRate,hrsWrkd,payChk;
    //Prompt the user for inputs 
    cout<<"This program calculates your Gross Paycheck"<<endl;
    cout<<"Input your Pay Rate as $xx.xx, provide the x's."<<endl;
    cin>>payRate;
    cout<<"Input your Hours Worked this pay period."<<endl;
    cout<<"Format xxx.x, provide the x's."<<endl;
    cin>>hrsWrkd;
    //Calculate the paycheck
    payChk=payRate*hrsWrkd;
    //Output the results
    cout<<"$"<<payChk<<"= $"<<payRate<<"/hr *"<<hrsWrkd<<"hr"<<endl;
    return 0;
}

