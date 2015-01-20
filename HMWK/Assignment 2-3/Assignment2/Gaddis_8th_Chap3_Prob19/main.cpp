/* 
 * File:   main.cpp
 * Author: Salvador Llamas 
 *
 * Created on January 12, 2015, 11:38 AM
 * Purpose: 
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries 
//Global Constants 
//Function Prototypes 
//Execution Begins here! 

int main(int argc, char** argv) {
    //Declare variables 
    float intRate=0.0319f/12; //www.captilone.com
    float msrplus=4e4f;//Loan Amount for Buick Avenir
    char  nPaymnt=60; //Number of monthly Payments 
    //Calculate the monthly payments 
    float temp=pow((1+intRate),nPaymnt);
    float mPay=intRate*temp*msrplus/(temp-1);
    //Output the inputs 
   
    cout<<"Interest per year in percent = "<<intRate*100*12<<endl;
    cout<<"Number of payments = " <<static_cast<int>(nPaymnt)<<endl;
    cout<<"Loan Amount = $"<<msrplus<<endl;
    //Output our care payment
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<" My Avenir will cost $"<<mPay<<endl;
    return 0;
}

