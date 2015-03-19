/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 9, 2015, 9:48 AM
 *      Purpose:Candy Bar Delight
 */

//System Libraries
#include <iostream>//I//O System Libra
using namespace std;

//User Libraries

//Function Prototypes

//Global Constants

//Execution Begins Here!!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short wtlbs, htin,ageyrs;
    char mf;
    unsigned char cBar=230;
    float BMRFem,BMRMale,nCBars;
    //Prompt the user for input
    cout<<"How many candy bars will it take"<<endl;
    cout<<"to maintain your weight"<<endl;
    cout<<"All inputs are integers"<<endl;  
    cout<<"Input your weight in pounds"<<endl;
    cin>>wtlbs;
    cout<<"Input your height in inches"<<endl;
    cin>>htin;
    cout<<"Input your age in yrs"<<endl;
    cin>>ageyrs;
    cout<<"Are you male or female m/f one character input"<<endl;
    cin>>mf;
    //Calculates
    BMRFem=655+4.3*wtlbs+4.7*htin-4.7*ageyrs;
    BMRMale=66+6.3*wtlbs+12.9*htin-6.8*ageyrs;
    //          Ques        if Male      if Female
    nCBars=((mf=='m')?(BMRMale/cBar):(BMRFem/cBar));
    //Output the results
    cout<<"Your weight ="<<wtlbs<<"(lbs)"<<endl;
    cout<<"Your height ="<<htin<<"(inches)"<<endl;
    cout<<"Your age ="<<ageyrs<<"(years)"<<endl;
    cout<<"Your sex ="<<((mf=='m') ? "Male":"Female")<<endl;
    cout<<"You can eat "<<nCBars<<"candy bars per/day"<<endl;
    return 0;
}

