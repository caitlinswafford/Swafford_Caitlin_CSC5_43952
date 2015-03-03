/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 2, 2015, 7:31 PM
 *      Purpose:Number of Quarters, Dimes, Nickels 
 */

#include <iostream>//I/O Library
using namespace std;//I/O System Library using namespace

//User Libraries

//Global Constants
const int qrtr=25;
const int nckl=5;
const int dime=10;

//Function Prototypes

//Execution Begins Here!!

int main(int argc, char** argv) {
    //Delcare Variables
    int total,x,y,z,qvalue,dvalue,nvalue
    //Prompt Input
    cout<<"How many quarter(s)?"<<endl;
    cout<<"Input as xxx."<<endl;
    cin>>x;
    cout<<"How many nickel(s)?"<<endl;
    cout<<"Input as xxx."<<endl;
    cin>>z;
    cout<<"How many dime(s)?"<<endl;
    cout<<"Input as xxx."<<endl;
    cin>>y;
    //Calculate 
    qvalue= qrtr * x;
    dvalue= dime * y;
    nvalue= nckl * z;
    //Output
    total=qvalue+dvalue+nvalue;
    cout<<"You have"<<total<<"cents"<<endl;
    //Exit Stage Right!
    return 0;
}

