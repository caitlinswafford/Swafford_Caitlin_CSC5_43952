/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 9, 2015, 11:48 AM
 *      Purpose: Change * to +
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Function Prototypes

//Global Constants 

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
int number_of_pods, peas_per_pod, total_peas;
    //Prompt for Input
 cout << "Press return after entering a number.\n";
 cout << "Enter the number of pods:\n";
 cin >> number_of_pods;
 cout << "Enter the number of peas in a pod:\n";
 cin >> peas_per_pod;
    //Calculate
 total_peas = number_of_pods + peas_per_pod;
    //Output
 cout << "If you have ";
 cout << number_of_pods;
 cout << " pea pods\n";
 cout << "and ";
 cout << peas_per_pod;
 cout << " peas in each pod, then\n";
 cout << "you have ";
 cout << total_peas;
 cout << " peas in all the pods.\n";
    return 0;
}

