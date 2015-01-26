/* 
 * File:   main.cpp
 * Author: chava408
 *
 * Created on January 25, 2015, 4:51 PM
 * Purpose:7. Pennies for Pay
Write a program that calculates how much a person would earn over a period of time
if his or her salary is one penny the first day and two pennies the second day, and continues
to double each day. The program should ask the user for the number of days.
Display a table showing how much the salary was for each day, and then show the
total pay at the end of the period. The output should be displayed in a dollar amount,
not the number of pennies.
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants 
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    //Declaring Variables
    float day,total(1);
    //Prompt User 
    cout<<" This program will calculate the salary per day being paid 1 penny a day\n ";
    cout<<" and kept double every day, base on the amount of days they worked."<<endl;
    //Asking for input
    cout<<" How many day did you work?"<<endl;
    cin>>day;
    //Loop calculation
     cout<<setprecision(2)<<fixed<<endl;
    for(int i=1;i<=day;i++){
        total=total+total;
    cout<<i<<"    $"<<total/100<<endl;
    }
    //Exit Program 
    return 0;
}

