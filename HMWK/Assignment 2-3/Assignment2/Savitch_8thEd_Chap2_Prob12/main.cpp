/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 13, 2015, 11:34 AM
 * Purpose: Bablonian  
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes

//Execution begins Here!
int main(int argc, char** argv) {
    float number, guess , r;
    //Input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format fill be positive float"<<endl;
    cin>>number;
    //First pass
    guess=number/2;
    r=number/guess;
    guess=(guess+r)/2;
    //Output the first pass
    cout<<"First Pass calculate -> " <<guess<<endl;
     //Second pass  
    r=number/guess;
    guess=(guess+r)/2;
    //Output the Second pass
    cout<<"Second Pass calculate -> " <<guess<<endl;
     //Third pass  
    r=number/guess;
    guess=(guess+r)/2;
    //Output the Third pass
    cout<<"Third Pass calculate -> " <<guess<<endl;
     //Fourth pass 
    r=number/guess;
    guess=(guess+r)/2;
    //Output the Fourth pass
    cout<<"Fourth Pass calculate -> " <<guess<<endl;
    //Exit stage right
    return 0;
}

