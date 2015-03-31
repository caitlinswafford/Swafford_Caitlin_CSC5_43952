/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 23, 2015, 10:52 AM
 *      Purpose:Magic Dates
 */
//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//User Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int day, month, year, mYear;
    //Input
    cout<<"Enter a Month."<<endl;
    cin>>month;
    cout<<"Enter a Day."<<endl;
    cin>>day;
    cout<<"Enter a Year."<<endl;
    cin>>year;
    //Calculate
    mYear=day*month;
    //Magic Year
    if (year==mYear){
        cout<<"It is a Magic Year!";
    }
        else{  
        cout<<"It is not a Magic Year!";
    cout<<endl;
    }
    return 0;
}

