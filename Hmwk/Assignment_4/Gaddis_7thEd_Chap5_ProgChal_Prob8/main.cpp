/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on April 10, 2015, 4:46 PM
 *      Purpose: Calories Burned
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int calories = 3.9; 
    int calburn;
    //Output
    for (int minutes = 10; minutes < 30; minutes += 5){
        calburn= calories * minutes;
       cout<<"Calories burned in "<<minutes<<" minutes: "<<calburn<<endl; 
    }
    return 0;
}

