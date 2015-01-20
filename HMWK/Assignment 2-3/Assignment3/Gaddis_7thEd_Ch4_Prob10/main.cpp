/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 * Created on January 19, 2015, 6:04 PM
 * Purpose:10. Software Sales
A software company sells a package that retails for $99. Quantity discounts are given
according to the following table.
Quantity Discount
10-19 20%
20-49 30%
50-99 40%
100 or more 50%
Write a program that asks for the number of units sold and computes the total cost of
the purchase.
Input Validation: Make sure the number of units is greater than 0.
 * 
 */
//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototype
// Execution begins here!
int main(int argc, char** argv) {
    //Declaring Variables
    float unit,cost,total,total2,dis;
    //Asking for input
    cout<<"How many units do you wanna buy?"<<endl;
    cin>>unit;
    //Calculate
    if((unit>=10)&&(unit<=19))
        dis=.20;
    else if ((unit>=20)&&(unit<=49))
        dis=.30;
    else if ((unit>=50)&&(unit<=99))
        dis=.40;
    else if (unit>100)
           dis=.50;
     total=unit*99;
     cost=total*dis;
     total2=total-cost;
    //Results 
     cout<<" Your total cost is $"<<total<<endl;
     cout<<" Your discount was $"<<cost<<endl;
     cout<<" Your overall cost is $"<<total2<<endl;
    return 0;
}

