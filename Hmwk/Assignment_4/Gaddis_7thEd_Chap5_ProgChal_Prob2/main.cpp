/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on April 10, 2015, 2:37 PM
 *      Purpose: Sum of Numbers 
 */

#include <iostream>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int n = 0;	
    int num;
    int num1;
    int sum = 0;	
    //Input
    cout << "Please enter your numbers." << endl;
    //Output
    while (num > 0) {
     cin>>num;
     cin>>num1;
     sum=num+ num1;
     cout << sum;
	if (num < 0) {
	cout<<"Error you entered negative numbers." << endl;
	}
	else;
        }
	sum = num + num1;
	cout << sum << endl;
    return 0;
}

