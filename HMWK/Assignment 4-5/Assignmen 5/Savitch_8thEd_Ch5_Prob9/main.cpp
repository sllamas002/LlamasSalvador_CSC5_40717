/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 25, 2015, 
 * Purpose: 9 The program reads in a weight in pounds and ounces and outputs
    the equivalent weights in kilograms and grams
 */

#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constant
//Function Prototype
float input();
float calculate(float,float);
float output(float,float);
int main(int argc, char** argv) {
    //Prompt User
    cout<<"The program reads in a weight in pounds and ounces and outputs\n";
    cout<<"the equivalent weights in kilograms and grams.\n\n"<<endl;
    input();
    return 0;
}
float input(){
      //Declaring Variables
    float wi,ou;//Weight, Ounces
    //Asking for input
    cout<<"Enter the weight in pounds."<<endl;
    cin>>wi;
    cout<<"Enter the weight in ounces."<<endl;
    cin>>ou;
    calculate(wi,ou);//Calling Calculation function 
}

float calculate(float wi,float ou){
    float kilog,gram,pound;//Kilogram,Grams
    kilog=2.2046; //1 kilogram =2.2046pounds
    gram=1000;//1000grams = 1 kilogram
    pound=16;//1 pound = 16 ounces
    kilog=kilog*wi;//Converted Pounded into kilograms
    gram=gram*wi;//Converted Kilo into Grams
   output(kilog,gram);//Calling Output function
}

float output(float kilog,float gram){
    int ex;//Exit declaration
    //Outputting results
    if(ex!=0){
    cout<<"Your total weight from pounds to kilogram is "<<kilog<<endl;
    cout<<"Your total weight from ounces to gram  is "<<gram<<endl;
    cout<<"Enter 0 to exit or 1 to repeat"<<endl;
    cin>>ex;
    //IF statement 
    if(ex==1){
        input(); }
    else  return 0;
    }}

 
    