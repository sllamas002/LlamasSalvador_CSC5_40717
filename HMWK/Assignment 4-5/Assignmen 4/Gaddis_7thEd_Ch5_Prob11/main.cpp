/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 25, 2015, 
 * Purpose:11. Population
Write a program that will predict the size of a population of organisms. The program
should ask the user for the starting number of organisms, their average daily population
increase (as a percentage), and the number of days they will multiply. A loop should
display the size of the population for each day.
Input Validation: Do not accept a number less than 2 for the starting size of the population.
Do not accept a negative number for average daily population increase. Do
not accept a number less than 1 for the number of days they will multiply.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants 
//Function Prototype 
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float stnum,endnum,aver,aver2,days;//Size of population,Average Daily, Number of Days
    //Prompt User for Input
    cout<<"This program will predict the size of a population of organisms.\n";
    cout<<endl;
    cout<<"What is the staring number of organism?"<<endl;
    cin>>stnum;
    cout<<"What is there average daily population increase? (In Percentage) "<<endl;
    cin>>aver;
    cout<<"What is the number of days that they will multiply."<<endl;
    cin>>days;
    //Loops and calculation
    cout<<setprecision(2)<<fixed<<endl;
    aver2=aver/100;//Making sure the result is in percentage
    cout<<"Days  , Population "<<endl;//Specify the results
    for (int x=1;x<=days;x++){
        stnum+=stnum*aver2;
    cout<<x<<"      "<<setw(4)<<stnum<<endl;    
    }   
    //Exit Program
    return 0;
}

