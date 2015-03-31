/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 18, 2015, 10:50 AM
 *      Purpose: Interest Earned
 */
//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
        float prncple, rate, total, time;
    //Prompt user for Inputs
        cout<<"I will calculate your earned interest"<<endl;
        cout<<"What is the balance of your account?"<<endl;
        cin>>prncple;
        cout<<"What is your interest rate?"<<endl;
        cin>>rate;
        cout<<"How many times a year is your interest compounded?"<<endl;
        cin>>time;
    //Calculate
        total=prncple* pow((1+((rate*1.0e-2)/time)),time);
    //Output Results
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<"With an initial balance of $"<<prncple<<", an interest rate of ";
        cout<<rate<<"%, and your interest compounded "<<time<<" times annually,";
        cout<<" your balance after one year is $"<<total<<endl;
    //Execution Begins Here
    return 0;
}

