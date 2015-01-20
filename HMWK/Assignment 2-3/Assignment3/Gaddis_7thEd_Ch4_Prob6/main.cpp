/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 * Created on January 19, 2015, 2:53 PM
 * Purpose:6. Mass and Weight
Scientists measure an object s mass in kilograms and its weight in newton. If you
know the amount of mass that an object has, you can calculate its weight, in newton,
with the following formula:
Weight = mass × 9.8
 Write a program that asks the user to enter an object s mass, and then calculates and
displays its weight. If the object weighs more than 1,000 newton, display a message
indicating that it is too heavy. If the object weighs less than 10 newton, display a
message indicating that the object is too light.
 */
//System Libraries 
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes 
//Execution begins here!
int main(int argc, char** argv) {
    //Declaring variables 
    float wi,newt,mass;//Weight, newton, mass
    //Outputting input
    cout<<" This program will calculate and display the weight of your object.\n";
    cout<<" by using mass to indicate the weight.\n\n"<<endl;
    cout<<" What is the objects mass."<<endl;
    cin>>mass;
    //Calculate
    wi=mass*9.8;
    //Results
    cout<<"The weight of your object is "<<wi<<" newton"<<endl;
    if (wi>1000)
        cout<<" Your object is more than 1000 newton, its two heavy!! ="<<wi<<endl;
    if (wi<10)
        cout<<" Your object is less than 10 newton,  its too light. ="<<wi<<endl;
    
    //Exit Program
    return 0;
}

