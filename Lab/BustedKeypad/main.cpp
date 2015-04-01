/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on April 1, 2015, 7:59 AM
 *      Purpose: Busted Keypad
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short tAbove=999,tBelow=0,temp;
    //Prompt the user
    cout<<"Input a temperature from 0 to 999"<<endl;
    cin>>temp;
    //Exhaust Possible temperature choices
    for(int t100=0;t100<=9;t100++){
        for(int t10=0;t10<=9;t10++){
            for(int t1=0;t1<=9;t1=++){
                if(100==1||t10==1||t1==1)continue;
                if(100==4||t10==4||t1==4)continue;
                if(100==7||t10==7||t1==7)continue;
                unsigned int tloop=t100*100+t10*10+t1;
                unsigned int tdiffA=tAbove-tloop;
                unsigned int tdiffB=tloop-tBelow;
                if((tdiffA>0)&&(tdiffA<(tAbove-temp)))tAbove=tloop;
                if((tdiffB>0)&&(tdiffB<(temp-tBelow)))tBelow=tloop;
            }
        }
    }
    //Output the range of the temperature settings
    cout<<"The temp on the high side = "<<tAbove<<" degrees"<<endl;
    cout<<"Temp on the low side = "<<tBelow<<" degrees"<<endl;
    //Exit stage right
    return 0;
}
