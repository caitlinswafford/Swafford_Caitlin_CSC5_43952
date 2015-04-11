/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on April 10, 2015, 5:02 PM
 *      Purpose: Membership Fee Increase
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
    int n;
    float cost = 2500, inc = 1.04;
    //Input
    cout.precision(2);
    //Loop
    for (n=1; n<=6; n++){
        cost*=inc;
        cout<<"Year: "<<n<<" Cost: "<<cost<<endl;
    }
    return 0;
}

