/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 8, 2015, 11:28 AM
 * Purpose:10. Miles per Gallon
A car holds 12 gallons of gasoline and can travel 350 miles before refueling. Write a
program that calculates the number of miles per gallon the car gets. Display the result
on the screen.
Hint: Use the following formula to calculate miles per gallon (MPG):
MPG = Miles Driven / Gallons of Gas Used
 */
//System Libraries 
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*User Libraries
 * Global Constants
 * Prototype Function
 * 
 * Execution Begin Here!!
 */
int main(int argc, char** argv) {
    //Declaring Variables
    float mil, gal;
    float mpg;
    //Asking for input
    cout<<"The program will calculate your Mile Per Gallon."<<endl;
    cout<<"Please input the amount of miles that you traveled"<<endl;
    cin>>mil;
    cout<<"Please input the amount of gallons of gasoline your car holds."<<endl;
    cin>>gal;
    //Calculating 
    mpg=mil/gal;//Finding mpg
    //Output results
    cout<<"The MPG for your car is "<<mpg<<endl;
    //Exit
    return 0;
}

