/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on April 10, 2015, 4:40 PM
 *      Purpose: Chapter 5 Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
//General Menu Format
    //Display the selection
        cout<<"Type 0 to solve Sum Of Numbers Problem 0"<<endl;
        cout<<"Type 1 to solve Distance Traveled Problem 1"<<endl;
        cout<<"Type 2 to solve Celsius To Fahrenheit Problem 2"<<endl;
        cout<<"Type 3 to solve Speed Conversion Problem 3"<<endl;
        cout<<"Type 4 to solve Ocean Levels Problem 4"<<endl;
        cout<<"Type 5 to solve Calories Burned Problem 5"<<endl;
        cout<<"Type 6 to solve Membership Fee Increase Problem 6"<<endl;
        cout<<"Type 7 to solve The Greatest and Least of TheseProblem 7"<<endl;
        cout<<"Type 8 to solve Rate of Inflation Problem 8"<<endl;
        cout<<"Type 9 to solve Problem 9"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        char choice;
        cout<<"I would like to solve a problem"<<endl;
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case '0':{
                    int n = 0;	
                    int num;
                    int num1;
                    int sum = 0;	
                    cout << "Please enter your numbers." << endl;
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
                    break;
                }
                case '1':{
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
                    break;
                }
                case '2':{
                    float fhrnht;//Temperature in Fahrenheit
                    float celsius;//Temperature in Celsius
                    celsius = 0;
                    //Calculation begins here with a loop!
                    while (celsius <= 20){
                    fhrnht=static_cast<float>((celsius*9)/5)+32;
                    cout<<"When the temperature in celsius "<<celsius<<" the temperature in fahrenheit is"<<fhrnht<<" degrees"<<endl;
                    celsius++;
                    }
                    break;
                }
                case '3':{
                    //Global Constants
                    float KMTM=.6214;
                    //Declare Variables
                    unsigned int kph;
                    kph=60;//Starts at 60 KPH
                    float mph;
                        //Loop
                        while (kph<=130)
                        mph=kph*KMTM;
                        cout<<"At "<<kph<<" kilometers per hour, you are traveling at "<<mph<<" miles per hour"<<endl;
                        kph+=5;//At 5 km intervals
                    break;
                }
                case '4':{
                    float rLvl,num;
                    num=1;
                    while(num<=25){
                        rLvl+=3.1;
                        cout<<"The ocean level in "<<num<<" years, will rise "<<rLvl<<" mm"<<endl;
                        num++;
                    }
                    break;                  
                }
                case '5':{
                    int calor = 3.9; 
                    int calburn;
                    //Output
                    for (int minutes = 10; minutes < 30; minutes += 5){
                    calburn= calor * minutes;
                    cout<<"Calories burned in "<<minutes<<" minutes: "<<calburn<<endl; 
                    }
                    break;                   
                }
                case '6':{
                    int n;
                    float cost = 2500, inc = 1.04;
                    //Input
                    cout.precision(2);
                    //Loop
                    for (n=1; n<=6; n++){
                    cost*=inc;
                    cout<<"Year: "<<n<<" Cost: "<<cost<<endl;
                    }
                    break;
                }  
                case '7':{
                   int num;
                    //Input
                    cout << "How many numbers would you like to enter?" << endl;
                    cin >> num;
                    cout << "You would like to enter" << num << "numbers"<<endl;
                    cout << "Please enter your numbers: "<<endl;
                    //Output
                    int highNum;
                    cin >> highNum;// save 1st value as highest
                    int inNum;// for reading the rest of the values
                    //Looping
                    for(int i = 2; i <= num; ++i )
                    {
                        cin >> inNum;// read input
                        if( inNum > highNum )// compare to highest yet
                            highNum = inNum;// replace highest
                    }
                    cout << "The highest number entered was: " << highNum;
                    break;
                }
                case '8':{
                   float money, infl, rate, num;
                    num=1;
                    money=1000;
                    cout<<"Enter the yearly inflation rate as xx.xx"<<endl;
                    cin>>infl;
                    rate=infl/100;
                    rate=1-rate;
                    cout<<fixed<<showpoint<<setprecision(2);
                    if(infl<=15 && infl>=1){
                        while(num<=10){
                            money*=rate;
                            cout<<"The purchasing power for year "<<num<<" is "<<money<<" dollars"<<endl;
                            num++;
                        }
                    }else 
                        cout<<"Please repeat the whole problem again"<<endl;
                    break;
                }
                 case '9':{
                    
                    break;
                }
                default:{
                    cout<<"Exit?"<<endl;
                }
        }
    return 0;
}

