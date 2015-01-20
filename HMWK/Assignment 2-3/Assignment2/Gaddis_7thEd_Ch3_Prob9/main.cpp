/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 17, 2015, 11:32 AM
 * Purpose:9. Automobile Costs
Write a program that asks the user to enter the monthly costs for the following
expenses incurred from operating his or her automobile: loan payment, insurance,
gas, oil, tires, and maintenance. The program should then display the total monthly
cost of these expenses, and the total annual cost of these expenses.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries 
//Global Constants
//Function Prototypes 

//Execution begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float loan, insur, gas, oil, tire, main;
    float total, month, year;
    //Asking for input
    cout<<" This program is meant to calculate the cost of your car."<<endl;
    cout<<" It will calculate the total cost in months and annual."<<endl<<endl;
    cout<<" What is your monthly loan payment?"<<endl;
    cin>>loan;
    cout<<" What is your monthly insurance cost?"<<endl;
    cin>>insur;
    cout<<" What is your monthly gas cost?"<<endl;
    cin>>gas;
    cout<<" What is your monthly oil cost?"<<endl;
    cin>>oil;
    cout<<" What is your monthly tire cost?"<<endl;
    cin>>tire;
    cout<<" What is your monthly maintenance cost?"<<endl;
    cin>>main;
    //Calculating input
    cout<<setprecision(2)<<fixed<<showpoint;
    total=loan+insur+gas+oil+tire+main;
    month=total;
    year=total*12;
    //Output results
    cout<<" The summary of your cost is: "<<endl;
    cout<<" Loan Payment: $"<<loan<<endl;
    cout<<" Car Insurance: $"<<insur<<endl;
    cout<<" Gas: $"<<gas<<endl;
    cout<<" Oil: $"<<oil<<endl;
    cout<<" Tires: $"<<tire<<endl;
    cout<<" Maintenance: $"<<main<<endl<<endl;
    cout<<" Your monthly car cost is $"<<month<<endl;
    cout<<" Your annual car cost is $"<<year<<endl;    
    //Exit Program 
    return 0;
}

