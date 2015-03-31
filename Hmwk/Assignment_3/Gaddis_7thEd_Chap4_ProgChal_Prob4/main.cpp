/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 23, 2015, 8:17 PM
 *      Purpose: Area of Rectangles
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
    int area,width,length;
    int area2, width2, length2;
    //Input Area
    cout << "what is the length of the rectangle"<<endl;
    cin >> length;
    cout << "what is the width of the rectangle"<<endl;
    cin >> width;
    //Calculate Rectangle 1
    area = length * width;
    //Input area
    cout << "what is the length of the second rectangle?"<< endl;
    cin >> length2;
    cout << "what is the width of the second rectangle? "<<endl;
    cin >> width2;
    //Calculate Rectangle 2
    area2 = length2 * width2;
    if ( area > area2)
        cout << "the first rectangle has a bigger area"<<endl;
    else
        cout << "the second rectangle has a bigger area"<<endl;
    return 0;
}

