/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 * Created on January 19, 2015, 2:08 PM
 * Purpose: 1. Minimum/Maximum
Write a program that asks the user to enter two numbers. The program should use the
conditional operator to determine which number is the smaller and which is the larger.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Function Prototypes
//Global Constants
//Execution Begins Here
int main(int argc, char** argv) {
    //Declaring Variables
    float n1,n2;//Two number variables 
   //Outputting for input
    cout<<" This program will determine which number is the smaller than\n";
    cout<<" or larger depend on your two entered numbers."<<endl<<endl;
    cout<<"Please input two numbers."<<endl;
    cin>>n1;//First number input
    cin>>n2;//Second number input
    //Calculating if statements
       cout<<"Your two numbers are "<<n1<<" and "<<n2<<endl;
    if (n1>n2) //larger then
        cout<<n1<<" is larger then "<<n2<<endl;
    if (n2>n1) //larger then
        cout<<n2<<" is larger then "<<n1<<endl;
    if (n1<n2) // smaller then 
        cout<<n1<<" is smaller then "<<n2<<endl;
    if (n2<n1) //smaller then
        cout<<n2<<" is smaller then "<<n1<<endl;
    //Exit program 
     return 0;
}

