/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 25, 2015, 4:09 PM
 * Purpose:4. Calories Burned
Running on a particular treadmill you burn 3.9 calories per minute. Write a program
that uses a loop to display the number of calories burned after 10, 15, 20, 25, and 30
minutes.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants 
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    //Declaring variables
    float cal,min;
    //Prompting User
    cout<<" This program will calculate the amount of calories burn after 10-30 min\n";
    //Calculating Loop
    for (min=10; min<=30; min+=5){
        cal=(3.9)*min;
    cout<<"Calories burn\n";
    cout<<"Amount of minutes ="<<min<<endl;
    cout<<"Amount of calories burn ="<<cal<<endl;
    cout<<"\n\n";
    }
    //Exit Program
    return 0;
}

