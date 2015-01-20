/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 17, 2015, 11:54 AM
 * Purpose:10. Celsius to Fahrenheit
Write a program that converts Celsius temperatures to Fahrenheit temperatures. The
formula is
 * F=(9/5)C+32
F is the Fahrenheit temperature and C is the Celsius temperature.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries 
//Global Constants 
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
    //Define variables
    float fahr,cel;
    //Ask for input
    cout<<" This program will convert your Celsius Temperatures into Fahrenheit Temperature"<<endl<<endl;
    cout<<" Please input the temperature you want to convert?"<<endl;
    cin>>cel;
    //Calculate  by Converting 
    fahr=((9*cel)/5)+32;
    //Output results 
    cout<<" Your Fahrenheit Temperature  is "<<fahr<<" Degrees"<<endl;
    //Exit
    return 0;
}

