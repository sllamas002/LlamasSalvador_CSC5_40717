/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 25, 2015, 3:56 PM
 * Purpose:1. Sum of Numbers
Write a program that asks the user for a positive integer value. The program should
use a loop to get the sum of all the integers from 1 up to the number entered. For
example, if the user enters 50, the loop will nd the sum of 1, 2, 3, 4, ... 50.
Input Validation: Do not accept a negative starting number.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants 
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaring Variables
    float num,sum,x;
    //Prompting User
    cout<<"This program will get the sum of all the integers from 1 to the number\n";
    cout<<"that you input.\n";
    cout<<"Please input the number which you wish to sum."<<endl;
    //Asking for input
    cin>>num;
    //Calculating
    for (x=1;x<=num; x++){
      sum+=x; 
    }
    //Outputting results
    cout<<"The sum from the number that you inputed is "<<sum<<endl;
    //Exiting Program
    return 0;
}

