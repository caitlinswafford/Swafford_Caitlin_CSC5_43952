/* 
 * File:   main.cpp
 * Author: caitlinswafford
 *
 * Created on March 25, 2015, 8:47 AM
 *      Purpose: Personal Best
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables 
    	string run1 , run2 , run3;
	float time1 , time2 , time3;
	int first , second , third;
    //Input
    	cout << "This displays who came 1st , 2nd, 3rd.\n\n";
        cout << " Enter the name of the runners and their time.\n Separate name and time with a space.";
        cout << "\n Enter the name of runner 1 and the time: ";
        cin >> run1 >> time1;
        cout << " Enter the name of runner 2 and the time: ";
        cin >> run2 >> time2;
        cout << " Enter the name of runner 3 and the time: ";
        cin >> run3 >> time3;
    {    //check if runner one came in first
        if(time1 < time2 && time1 < time3)
  {
        if(time2 < time3)
     {
        cout<<run1<<" came in first with a score of "<<time1<<endl;
        cout<<run2<<" came in second with a score of "<<time2<<endl;
        cout<<run3<<" came in third with a score of "<<time3<<endl;
     }
    else
     {
        cout<<run1<<" came in first with a score of "<<time1<<endl;
        cout<<run3<<" came in second with a score of "<<time3<<endl;
        cout<<run2<<" came in third with a score of "<<time2<<endl;
     }
    }
    }
    { // check if 2 came first
        if(time2 < time1 && time2 < time3)
  {
         if(time1 < time3) 
     {
        cout<<run2<<" came in first with a score of "<<time2<<endl;
        cout<<run1<<" came in second with a score of "<<time1<<endl;
        cout<<run3<<" came in third with a score of "<<time3<<endl;
     }
        else
     {
        cout<<run2<<" came in first with a score of "<<time2<<endl;
        cout<<run3<<" came in second with a score of "<<time3<<endl;
        cout<<run1<<" came in third with a score of "<<time1<<endl;
     }
  }
}
{ // check if 3 came first
        if(time3 < time1 && time3 < time2)
  {
        if(time2 < time1) 
     {
        cout<<run3<<" came in first with a score of "<<time3<<endl;
        cout<<run2<<" came in second with a score of "<<time2<<endl;
        cout<<run1<<" came in third with a score of "<<time1<<endl;
     }
        else
     {
        cout<<run3<<" came in first with a score of "<<time3<<endl;
        cout<<run1<<" came in second with a score of "<<time1<<endl;
        cout<<run2<<" came in third with a score of "<<time2<<endl;
     }
  }
}
	return 0;
}

