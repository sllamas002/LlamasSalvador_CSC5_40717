/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 19, 2015, 12:24 
 * Purpose: 7 An employee is paid at a rate of $16.78 per hour for the first 40 hours
 * worked in a week. Any hours over that are paid at the overtime rate of 1.5times that.
 * From the worker's gross pay, 6% is withheld for Social Security tax, 14% is withheld
 * for federal income tax, 5% is withheld for state income tax, and $10 per week is withheld
 * for union dues. If the worker has three or more dependents, then an additional $35 is withheld
 * to cover the extra cost of health insurance beyond what the employer pays.
 * 
 * Write a program that will read in the number of hours worked in a week and the number
 * of dependents as input and will then output the workers gross pay each withholding amount,
 * and the net take-home pay for the week. For a harder version, write your program so that it allows
 * the calculation to be repeated as often as user wishes.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Function Prototypes
//Global Constants

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float pay(16.78),hr; //Payrate and hours
    float ovtm;//Overtime rate
    float ss;//Social Security Tax
    float fed;//Federal Income Tax
    float state;//State Tax
    float un;//Union Dues
    float dep,heal;//Dependents and Cost
    float gross,total;//Net and Total
    //Ask for input
    cout<<"This program will calculate your gross and net income by taking into\n";
    cout<<" account your tax and union dues."<<endl<<endl;
    cout<<" How many hours do you work a week?"<<endl;
    cin>>hr;
    cout<<" How many dependents do you have?"<<endl;
    cin>>dep;
    //Calculate
    cout<<setprecision(2)<<fixed<<showpoint;
    gross=pay*hr;//Calculate hour rate
    ss=gross*.06;//Social Security Tax
    fed=gross*.14;//Federal Income Tax
    state=gross*.05;//State Income Tax
    un=-10;//Unions
    if (dep>=3)//If the are 3 or more dependant subtract $35
    {total=total-35;}
    if (hr>40)//Calculate Overtime if hours is over 40 
     {  hr=hr-40;
        pay=16.78*1.5;
        ovtm=hr*pay;
      }  
    total=gross+ss+fed+state+un+ovtm;// total amount
    //Output results 
    cout<<"So the Net amount of income will be $"<<total<<"."<<endl;
    //Exit
    return 0;
}

