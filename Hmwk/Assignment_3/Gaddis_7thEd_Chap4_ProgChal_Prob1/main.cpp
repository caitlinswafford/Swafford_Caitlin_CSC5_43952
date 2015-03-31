/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 23, 2015, 10:06 AM
 *      Purpose: Minimum/Maximum
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float num1,num2;
    //Prompt Input
    cout<<"Enter Your First Number"<<endl;
    cin>>num1;
    cout<<"Enter Your Second Number"<<endl;
    cin>>num2;
    //Prompt Output
    if (num1>num2)
        cout<<num1<<" is greater than "<<num2<<" ."<<endl;
    else if (num1<num2)
        cout<<num1<<" is less than "<<num2<<" ."<<endl;
    else
        cout<<num1<<" and "<<num2<<" are equal to"<<endl;
    //Exit Stage right!
    return 0;
}

