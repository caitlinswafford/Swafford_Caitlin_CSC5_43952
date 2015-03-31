/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 23, 2015, 8:32 AM
 *      Purpose: Roman Numeral Converter
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
    int number;
    string RomNum;
    enum RomNum { I, II, III, IV, V, VI, VII, VIII, IX, X};
    //Prompt Inputs
    cout<<"Enter a number (1-10)."<<endl;
    cin>>number;
    switch (number){
        case 1:cout<<"The Roman numeral version of "<<number<<" is I"<<endl;
                break;
            case 2:cout<<"The Roman numeral version of "<<number<<" is II"<<endl;
                break;
            case 3:cout<<"The Roman numeral version of "<<number<<" is III"<<endl;
                break;
            case 4:cout<<"The Roman numeral version of "<<number<<" is IV"<<endl;
                break;
            case 5:cout<<"The Roman numeral version of "<<number<<" is V"<<endl;
                break;
            case 6:cout<<"The Roman numeral version of "<<number<<" is VI"<<endl;
                break;
            case 7:cout<<"The Roman numeral version of "<<number<<" is VII"<<endl;
                break;
            case 8:cout<<"The Roman numeral version of "<<number<<" is VIII"<<endl;
                break;
            case 9:cout<<"The Roman numeral version of "<<number<<" is IX"<<endl;
                break;
            case 10:cout<<"The Roman numeral version of "<<number<<" is X"<<endl;
                break;
            default: cout<<"Invalid entry"<<endl;
    }
    return 0;
}

