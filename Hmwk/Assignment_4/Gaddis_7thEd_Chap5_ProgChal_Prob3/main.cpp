/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on April 10, 2015, 3:13 PM
 *      Purpose: Distance Traveled
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
    unsigned int distan, speed, time, number;
    number = 1;
    //Input
    cout << "I will calculate the distance you have gone per hour."<<endl;
    cout<<"How long have you traveled in hours?"<<endl;
    cin>>time;
    cout<<"What speed did you travel at?"<<endl;
    cin>>speed;
    //Loop
    while (number <= time){
        distan += speed;
        cout<<"On hour "<<number<<" you have traveled "<<distan<<endl;
        number++;
    }
    //Exit Stage Right
    return 0;
}

