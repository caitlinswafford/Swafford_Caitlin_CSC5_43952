/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 12, 2015, 11:17 PM
 *      Purpose: Calculate Rainfall
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Function Prototypes

//Global Constants

//Execution Starts Here!
int main(int argc, char** argv) {
//Declare Variables
string month1, month2, month3;
int m3inch, m2inch, m1inch;
int averin;
int tMonths;
//Input Month and Inches
cout<<"Enter first month's name: "<<endl;
cin>>month1;
cout<<"Enter first month inches: "<<month1<<endl;
cin>>m1inch;
cout<<"Enter second month's name: ";
cin>>month2;
cout<<"Enter second month's inches: "<< month2<<endl;
cin>>m2inch;
cout<<"Enter third month's name: "<<endl;
cin>>month3;
cout<<"Enter third month's inches: "<<month3<<endl;
cin>>m3inch;
//Calculate the average and inches
tMonths = (m1inch + m2inch + m3inch);
averin = (tMonths) / 3;
//Output Rainfall
cout<<"The average rainfall for "<<month1<< ", "<<month2<<", "<<"and "<<month3<<" is "<<averin<<endl;
    return 0;
    
}

