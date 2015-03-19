/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 18, 2015, 10:53 AM
*      Purpose: How many sodas can you drink before you die?
 */
//System Library
#include <iostream>
using namespace std;
//User Libraries

//Global Constants
const short CONVPTG = 454;
//Function Prototype

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int urWtGs;
    float lethSgr, nCans;
    unsigned short urWtLbs;
    short oneSoda = 350;
    unsigned char lethal= 7;
    //Prompt User for Inputs
    cout<<"I will inform you how many sodas you may consume before death. "<<endl;
    cout<<"Please enter your weight in pounds."<<endl;
    cin>>urWtLbs;
    //Calculate Number of Cans
    urWtGs = urWtLbs * CONVPTG;
    lethSgr = urWtGs / lethal;
    nCans = lethSgr / oneSoda;
    //Output Results
    cout<<"You may drink "<<nCans<<" cans of soda before consuming a lethal amount of artificial sugar"<<endl;
    //Execution Begins Here
    return 0;
}


