/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 * Created on January 18, 2015, 11:46 PM
 * Purpose: 16 The following is a short program that computes the volume
 * of a sphere given the radius. It will compile and run, but it does not adhere to the program
 * style recommended. Rewrite the program using the style described in the chapter 
 * for indentation, adding comments, and appropriately named constants
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries 
//Global Constants
const float PI=3.1415;
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaring Variables
    float radius,vm;// Radius and volume
    //Asking for inputs
    cout<<"This program will compute the volume of a sphere given the radius.\n";
    cout<<" Enter radius of a sphere."<<endl;
    cin>>radius;//Input of the radius
    //Calculating 
    vm=(4.0/3.0)*PI*radius*radius*radius;//Calculates the volume with the radius
   //Output Results 
    cout<<" The volume is "<<vm<<endl;
    //Exit        
    return 0;
}

