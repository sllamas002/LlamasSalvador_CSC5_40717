/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 7, 2015, 5:36 PM
 * Purpose: 
 * 4. Restaurant Bill
Write a program that computes the tax and tip on a restaurant bill for a patron with a
$44.50 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
be 15 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen.
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

/*//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
 * 
 */

int main(int argc, char** argv) {
    //Naming 
   float tax ,tax2;
   float tip, tip2;
   float total;
   float  cost;
   //Outputting Inputs
    cout<< "Input the meal charges "<<endl;
    cin>>cost;
    cout<< "Input tax amount in decimal "<<endl;
    cin>>tax;
    //Calculating 
    tip=.15;
    tax2= cost*tax;
    tip2= cost*tip;
    total= cost+tax2+tip2;
    //Output calculation
    cout<< "The meal charge is $"<<cost<<endl;
    cout<< "The tax amount  is  $"<<tax2<<endl;
    cout<< "The tip amount is  $" <<tip2<<endl;
    cout<< "The total bill is $"<<total<<endl;
    //Exit
    return 0;
}

