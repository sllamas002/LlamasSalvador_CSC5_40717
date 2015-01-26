/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 26, 2015, 
 * Purpose:7. Celsius Temperature Table
The formula for converting a temperature from Fahrenheit to Celsius is
 * C=5/9(F-32)
where F is the Fahrenheit temperature and C is the Celsius temperature. Write a function
named celsius that accepts a Fahrenheit temperature as an argument. The function
should return the temperature, converted to Celsius. Demonstrate the function by
calling it in a loop that displays a table of the Fahrenheit temperatures 0 through 20
and their Celsius equivalents.
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants 
//Function Prototype
float celsius(float);//Fahrenheit input
//Execution Begins here!
int main(int argc, char** argv) {
    //Declaring Variables
    float cel,f=0;//Celsius , Fahrenheit starting at 0
    //Loop
    cout<<setprecision(2)<<fixed<<endl;//Two decimal precision
    for(int i=0;i<=20;i++){//Loop
        cel= celsius(f);//Calling to the function
        cout<<"The temperature is in Celsius  "<<i<<" then convert to  "<<cel<<" Fahrenheit"<<endl;
        f++;//Repeats the action till its wrong
    }
    //Exit Program 
    return 0;
}

float celsius(float f){
    float cel;
    cel=((5.0/9.0)*(f-32));//Formula
    return cel;
}