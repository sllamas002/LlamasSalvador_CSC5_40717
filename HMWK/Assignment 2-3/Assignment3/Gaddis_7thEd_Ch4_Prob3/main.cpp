/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 * Created on January 19, 2015, 2:24 PM
 * Purpose: 3. Magic Dates
The date June 10, 1960 is special because when we write it in the following format,
the month times the day equals the year.
6/10/60
Write a program that asks the user to enter a month (in numeric form), a day, and a
two-digit year. The program should then determine whether the month times the day
is equal to the year. If so, it should display a message saying the date is magic. Otherwise
it should display a message saying the date is not magic.
 */
//System Libraries 
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here.
int main(int argc, char** argv) {
    //Declaring Variables
    float mth,day,yr;//Month, Day, Year
    float time;//Variable for months time day.
    //Outputting for input
    cout<<" This program will determine whether your date is magic or not.\n\n";
    cout<<" Please input a month in numbers.(2digits)"<<endl;
    cin>>mth;//Asking for months
    cout<<" Please input a day. (2digits)"<<endl;
    cin>>day;//Asking for days
    cout<<"Please input a year.(2digits)"<<endl;
    cin>>yr;//Asking for year
    //Calculations 
    cout<<"Your chosen date is " <<mth<<"/"<<day<<"/"<<yr<<endl<<endl;
    time=mth*day;
    if(time==yr) //Declaring if statements
        cout<<"Your day is magic!!!! \n";
    else
      cout<<"Your day is not magic... How sad... O'well!!\n";
    //Exit Program 
    return 0;
}

