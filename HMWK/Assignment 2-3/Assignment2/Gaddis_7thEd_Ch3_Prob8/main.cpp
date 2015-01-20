/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 14, 2015, 3:13 PM
 * Purpose: 8. How Much Insurance?
Many financial experts advise that property owners should insure their homes or buildings
for at least 80 percent of the amount it would cost to replace the structure. Write a
program that asks the user to enter the replacement cost of a building and then displays
the minimum amount of insurance he or she should buy for the property.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries 

//Global Constants

//Function Prototypes 
// Execution Begin Here!


int main(int argc, char** argv) {
   //Declare variables 
   float percent;
   float cost;
   float amount;
   //Asking for Input
   cout<<"This program will calculate the minimum amount of insurance";
   cout<<" that customer should buy for there property."<<endl<<endl;
   cout<<"Please enter the replacement cost of your building in dollars?"<<endl;
   cin>>cost;
   //Calculating
   cout<<setprecision(1)<<fixed<<endl;
   percent=.80;
   amount= cost* percent;
   //Display the results
   cout<<"The minimum amount of insurance he or she should buy is $"<<amount<<
   cout<<" dollars"<<endl;
          
    return 0;
}

