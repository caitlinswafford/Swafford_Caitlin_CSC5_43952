/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on April 10, 2015, 4:35 PM
 *      Purpose: Ocean Levels
 */

//System Libraries
#include <iostream>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float rLvl,num;
    num=1;
    while(num<=25){
        rLvl+=3.1;
        cout<<"The ocean level in "<<num<<" years, will rise "<<rLvl<<" mm"<<endl;
        num++;
    }
    return 0;
}

