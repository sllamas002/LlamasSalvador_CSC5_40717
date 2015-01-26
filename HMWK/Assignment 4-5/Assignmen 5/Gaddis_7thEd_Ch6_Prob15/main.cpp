/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 25, 2015,
 * Purpose:15. Population
In a population, the birth rate is the percentage increase of the population due to
births and the death rate is the percentage decrease of the population due to deaths.
Write a program that displays the size of a population for any number of years. The
program should ask for the following data:
* The starting size of a population
* The annual birth rate
* The annual death rate
* The number of years to display
Write a function that calculates the size of the population for a year. The formula is
N = P + BP - DP
where N is the new population size, P is the previous population size, B is the birth
rate, and D is the death rate. 
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries 
//Global Constants 
//Function Prototype
float size(float,float,float);//Population, Birth Population,Death Population
//Execution Begins here!
int main(int argc, char** argv) {
    //Declaring variables 
    float stsize,brate,drate,yr,np;//Starting population,Birth rate, Death Rate, Years,New population
    //Prompting the user
    cout<<"This program will calculate the population size depending on \n";
    cout<<"population size.\n\n";
    //Asking for input
    cout<<"What is the starting size of a population?"<<endl;
    cin>>stsize;
    cout<<"What is the annual birth rate?"<<endl;
    cin>>brate;
    cout<<"What is the annual death rate?"<<endl;
    cin>>drate;
    cout<<"What is the number of years to display?"<<endl;
    cin>>yr;
   //Loop/Calculation 
    cout<<"Years    Growing Population"<<endl;
    for(int i=1;i<=yr; i++){
        np+= size(stsize,brate,drate);//Calling to the function
    cout<<i<<"              "<<np<<endl;  //Outputting results
    }
   //Exit Program 
    return 0;
}

float size(float p,float bp,float dp){
    float n;
    n=p+bp-dp;
    return n;   
}