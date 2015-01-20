/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 19, 2015, 6:00 PM
 * Purpose:8. Change for a Dollar Game
Create a change-counting game that gets the user to enter the number of coins
required to make exactly one dollar. The program should ask the user to enter the
number of pennies, nickels, dimes, and quarters. If the total value of the coins entered
is equal to one dollar, the program should congratulate the user for winning the game.
Otherwise, the program should display a message indicating whether the amount
entered was more than or less than one dollar.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here
int main(int argc, char** argv)
{
    //Declare variables
    float quarter, dime, nickel, penny;
    float total;//Change total
    //Output for input
    cout<<"This program will challenge you to enter an amount of quarters, ";
    cout<<"dimes, nickels, and pennies that make a dollar."<<endl;
    cout<<"Input the number of Quarters, dimes, nickels and pennies in";
    cout<<" that specific order to start calculation."<<endl;
    cin>>quarter>>dime>>nickel>>penny;   //Input of change
    //Calculation
    total=(quarter*(25)+dime*(10)+nickel*(5)+penny*(1))/100;
    cout<<"= "<<total<<endl;
    if (total>1.0)
        cout<<" Im sorry the amount you entered is greater than $1.00"<<endl;
        cout<<endl;
    if (total<1.0)
        cout<<" Im sorry the amount you entered is less than $1.00"<<endl;
        cout<<endl;
    if (total==1.0){
        cout<<" Congratulations!!! you have won!! the amount entered total";
        cout<<" is $1.00!!!"<<endl;
        cout<<endl;}
        
    return 0;
}

