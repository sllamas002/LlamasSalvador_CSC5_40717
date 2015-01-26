/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 25, 2015, 
 * Purpose:12. Celsius to Fahrenheit Table
In Programming Challenge 10 of Chapter 3 you were asked to write a program that
converts a Celsius temperature to Fahrenheit. Modify that program so it uses a loop
to display a table of the Celsius temperatures 0 20, and their Fahrenheit equivalents.
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
    float fahr;
    //Ask for input
    cout<<" This program will convert your Celsius Temperatures (0-20)into Fahrenheit Temperature"<<endl<<endl;
    //Calculate  by Converting 
    //Loop
    cout<<"Celsius   Fahrenheit"<<endl;
    for (int x=0;x<=20;x++){
    fahr=((9*x)/5)+32;
    fahr++;
    cout<<x<<"  "<<fahr<<endl;
    }
    //Output results 
    cout<<"Your last Fahrenheit Temperature  is "<<fahr<<" Degrees"<<endl;
    //Exit
    return 0;
}