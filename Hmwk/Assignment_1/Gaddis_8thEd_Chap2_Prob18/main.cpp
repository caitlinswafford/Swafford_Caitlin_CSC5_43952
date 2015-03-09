/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 4, 2015, 8:23 AM
 *      //Purpose: 2nd Homework Problem
 */

#include <iostream>//I/O Library
using namespace std;//I/O System Library using namespace

//User Libraries

//Global Constants
unsigned char CNVPCT=100;

//Function Prototypes

//Execution Begins Here!!

int main(int argc, char** argv) {
    //Declare Variables
    unsigned short nCust,nEDrnks,nCDrnks;
    unsigned char pEDrnks,pCDrnks;
    //Assigned Values
    nCust=16500;//Number of Customers
    pEDrnks=15;//Percentage Energy Drinkers
    pCDrnks=58;//Percentage out of Energy Drinkers that are Citrus Drinks 
    //Process/Calculate
    nEDrnks=nCust/static_cast<float>(CNVPCT)*pEDrnks;
    nCDrnks=nEDrnks/static_cast<float>(CNVPCT)*pCDrnks;
    //Output Everything
    cout<<"Customer Survey Problem"<<endl;
    cout<<"Known/Given Values:"<<endl;
    cout<<"Number of customers ="<<nCust<<endl;
    cout<<"Percentage Energy Drinkers ="
                <<static_cast<int>(pEDrnks)<<"%"<<endl;
    cout<<"Percentage Citrus Drinkers/ Energy Drinkers ="
                <<static_cast<int>(pCDrnks)<<"%"<<endl;
    cout<<"Number Energy Drinkers ="<<nEDrnks<<endl;
    cout<<"Number Citrus Drinkers ="<<nCDrnks<<endl;
    return 0;
}

