/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 2, 2015, 7:20 PM
 *      Purpose: Addition and Multiplication Calculator
 */

#include <iostream>//I/O Library
using namespace std;//I/O System Library using namespace

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!!

int main(int argc, char** argv) {
    //Declare Variables
    float x,y,sum,product;
    //Prompt for x input
    cout<<"Input first values"<<endl;
    cout<<"Enter as xxx.xx"<<endl;
    cin>>x;
    //Prompt for time
    cout<<"Input second vaule"<<endl;
    cout<<"Enter as xxx.xx"<<endl;
    cin>>y;
    //Calculate Sum
    sum = x+y;
    cout<<"Sum ="<<sum<<endl;
    //Calculate for Product
    product = x*y;
    cout<<"Product ="<<product<<endl;
    return 0;
}

