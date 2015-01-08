/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 8, 2015, 9:00 AM
 * Purpose:4. Restaurant Bill
Write a program that computes the tax and tip on a restaurant bill for a patron with a
$44.50 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
be 15 percent of the total after adding the tax. Display the meal cost, tax amount, tip
amount, and total bill on the screen.
 */
//Systems Libraries 
#include <cstdlib>
#include <iostream>
using namespace std;

/*Users Libraries 
 * Global Constants 
 * Prototype Function
 * Execute Problem Here
 */
int main(int argc, char** argv) {
    //Declaring variables 
    float tax, tax2;
    float tip;
    float cost;
    float total;
    //Asking for input
    cout<<"Please input the meal charge. \n$"<<endl;
    cin>>cost;
    cout<<"Please input the tax amount in decimal form."<<endl;
    cin>>tax;
    //Calculates
    tax2=cost*tax;//calculates tax 
    tip=cost*.15;//calculates tip
    total=cost+tip+tax2;//Sum all the cost of the meal
    //Outputs the result from your meal
    cout<<"Your meal costed = $"<<cost<<endl;
    cout<<"The tax amount was = $"<<tax2<<endl;
    cout<<"The tip amount was = $"<<tip<<endl;
    cout<<"The total amount of your meal costed = $"<<total<<endl;
    //Exit
    return 0;
}

