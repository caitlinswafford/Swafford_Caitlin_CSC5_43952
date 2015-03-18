/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 16, 2015, 8:10 AM
 *      Purpose: Paycheck
 */

//System Libraries
#include <iostream>//I/O
#include <iomanip>//Formatting
#include <fstream>>//I/O File
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution starts here!
int main(int argc, char** argv) {
    //Declare Variables
    ofstream out;//Output the results in a file
    float hrsWrkd;//Hours Worked (hrs)
    float payRate;// Pay Rate ($'s/hr)
    float oRate=1.5f;//Multiplicative overtime of PayRate
    float oTime=40.0f;//Where overtime begins (hr)
    float payChk;//Gross Pay ($'s)
    //Open File
    out.open("Payroll.dat");
    //Prompt the user for inputs
    cout<<"How many hours this week did you work?"<<endl;
    cin>>hrsWrkd;
    cout<<"What is your pay rate ($'s/hr)"<<endl;
    cin>>payRate;
    //Calculate the PayCheck
    payChk=hrsWrkd<oTime?
        payRate*hrsWrkd:
        payRate*(hrsWrkd+(oRate-1)*(hrsWrkd-oTime));
    //Output the results to the screen
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Hours Worked = "<<hrsWrkd<<"(hrs)"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"(hr)"<<endl;
    cout<<"Over time rate = "<<oRate<<endl;
    cout<<"Over time begins at "<<oTime<<"(hrs)"<<endl;
    cout<<"Gross Pay = $ "<<payChk<<endl;
        //Close File
    out.close(); 
    //Output the results to the file
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Hours Worked = "<<hrsWrkd<<"(hrs)"<<endl;
    out<<"Pay Rate = $"<<payRate<<"(hr)"<<endl;
    out<<"Over time rate = "<<oRate<<endl;
    out<<"Over time begins at "<<oTime<<"(hrs)"<<endl;
    out<<"Your Pay Check is?"<<payChk<<endl;
    //Close File
    out.close(); 
    return 0;
}

