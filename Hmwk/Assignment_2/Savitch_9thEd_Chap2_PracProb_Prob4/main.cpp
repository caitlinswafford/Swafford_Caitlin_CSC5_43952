/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 9, 2015, 12:49 PM
 *      Purpose: Mad Libs
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Function Prototypes

//Global Constants

//Execution Begins Here!!
int main(int argc, char** argv) {
  //Declare Variables
    string instructors_name;
    string first_name, last_name;
    string food_name;
    int int_variable;
    string adjective_name;
    string color_name;
    string animal_name;
    //Input
    cout<<"Enter the Last name of your instructor"<<endl;
    cin>>instructors_name;
    cout<<"Enter your First name and Last name"<<endl;
    cin>>first_name;
    cout<<"Enter a type of food"<<endl;
    cin>>food_name;
    cout<<"Enter a number between 100 and 120"<<endl;
    cin>>int_variable;
    cout<<"Enter a adjective"<<endl;
    cin>>adjective_name;
    cout<<"Enter a name of color"<<endl;
    cin>>color_name;
    cout<<"Enter a name of an animal"<<endl;
    cin>>animal_name;
    //Output 
    cout<<"Dear Instructor "<<instructors_name<<","<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time."<<endl;
    cout<<"First, I ate a rotten "<<food_name<<",which made me turn "<<color_name<<" and extremely ill."<<endl;
    cout<<"I came down with a fever of "<<int_variable<<"."<<endl;
    cout<<"Next, my "<<adjective_name<<" pet "<<animal_name<<" must have a smelled the remains of the "<<food_name<<" on my homework, because he ate it."<<endl;
    cout<<"I am currently rewriting my homework and hope you will accept it late"<<endl;
    return 0;
}

