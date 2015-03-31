/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 25, 2015, 11:18 AM
 *      Purpose: Geometry Calculator
 */

//System Libraries
#include <iostream>
#include <math.h>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables 
    int area;
    //Input
    cout<<"Choose one of the following options"<< endl; 
    cout<<"Enter 1 to calculate the area of a circle"<<endl; 
    cout<<"Enter 2 to calculate the area of a rectangle"<<endl;  
    cout<<"Enter 3 to calculate the area of a triangle"<<endl; 
    cout<<"Enter 4 to quit the program"<<endl; 
    cin>>area; 

    switch (area) 
    { 
    case 1: 
    int radius; 
    cout<<"Enter the radius of a circle"<<endl; 
    cin>>radius; 
    while(radius<0)
    {
        cout<<"Please enter a valid number!"<<endl;
        cin>>radius;
    }
    cout<<"Area of Circle = "<<3.14159 * radius * radius<<endl; 
    break; 

    case 2: 
    int width, length; 
    cout<<"Enter the width of a rectangle"<<endl; 
    cin>>width; 
    while(width<0)
    {
        cout<<"Please enter a valid number!"<<endl;
        cin>>width;
    }
    cout<<"Enter the length of the rectangle"<<endl; 
    cin>>length; 
    while(length<0)
    { 
        cout<<"Please enter a valid number!"<<endl;
        cin>>length;
    }
    cout<<"Area of Rectangle = "<<width * length<<endl; 
    break; 

    case 3: 
    int base, height; 
    cout<<"Enter the length of the base of the triangle"<<endl; 
    cin>>base; 
    while(base<0)
    {
        cout<<"Please enter a valid number!"<<endl;
        cin>>base;
    }
    cout<<"Enter the perpendicular height of the triangle"<<endl; 
    cin>>height; 
    while(height<0)
    {
        cout<<"Please enter a valid number!"<<endl;
        cin>>height;
    }
    cout<<"Area of Triangle = "<<0.5 * base * height<<endl; 
    break; 
    
    case 4://Quit
      break;
    default:  cout<<"Please Choose a Number (1-4)"<<endl;
    return 0; 
    } 
 
    return 0;
}

