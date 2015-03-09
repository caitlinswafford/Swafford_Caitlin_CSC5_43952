/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 2, 2015, 9:03 AM
 *      Purpose: Free fall problem from Savitch
 */

#include <iostream>//I/O Library 
using namespace std;//I/O Library under namespace

//User Libraries

//Global Constants 
const float G=3.2174e1f;//Acceleration in ft/sec^2 on earth
const float CNVFTMT=3.048e-1f;//Conversation from feet to meters

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float time,dstnce;
    //Prompt for time
    cout<<"Free Fall Problem"<<endl;
    cout<<"Input the time to drop x.xx (seconds)"<<endl;
    cin>>time;
    //Calculate the distance
    //dstnce=static_cast<float>(1)/2*G*time*time;
    //dstnce=1.0f/2*G*time*time;
    //dstnce=1/2.of*G*time*time;
    //dstnce=G*1/2*time*time;
    dstnce=G*1/2*time*time;
    //Output the results
    cout<<"Distance fallen ="<<dstnce<<"(feet)"<<endl;
    cout<<"Distance fallen ="<<dstnce*CNVFTMT<<"(meters)"<<endl;
    //Exit Stage Right!
    return 0;
}

