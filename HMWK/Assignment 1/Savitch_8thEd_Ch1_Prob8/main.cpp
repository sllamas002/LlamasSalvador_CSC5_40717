/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 8, 2015, 10:32 AM
 * Purpose: Write a program that allows the user to enter a number
 * of quarters, dimes, and nickels and then outputs the monetary value of the
 * coin in cents. For example, if the user enters 2 for the number of quarters, 
 * 3 for the number of dimes, and 1 for the number of nickels, then the program
 * should output that the coins are worth 85 cents. 
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

/*User Libraries
 * Global Constants 
 * Prototypes Function
 * 
 * Execution begins Here!
 */
int main(int argc, char** argv) {
    //Declaring Variables
    float quat, dime,nick;
    float quat2,dime2,nick2;
    float penn;
    //Asking for Input
    cout<<"This program will calculate monetary value of quarters,dimes, and";
    cout<<" nickels into pennies."<<endl<<endl;
    cout<<"Please input the amount of quarters you have."<<endl;
    cin>>quat;
    cout<<"Please input the amount of dimes you have." <<endl;
    cin>>dime;
    cout<<"Please input the amount of nickels you have."<<endl;
    cin>>nick;
    //Calculating
    quat2=quat*25;//Converting 
    dime2=dime*10;//Converting
    nick2=nick*5;//Converting
    penn=quat2+dime2+nick2;   //Getting the total amount of pennies
    //Outputting the Results
    cout<<"Your amount of pennies is "<<penn<<" pennies"<<endl;       
    //Exit
    return 0;
}

