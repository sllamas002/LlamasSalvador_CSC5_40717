/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 25, 2015
 * Purpose:6. Distance Traveled
The distance a vehicle travels can be calculated as follows:
distance = speed * time
For example, if a train travels 40 miles per hour for 3 hours, the distance traveled is
120 miles.
Write a program that asks the user for the speed of a vehicle (in miles per hour) and
how many hours it has traveled. The program should then use a loop to display the
distance the vehicle has traveled for each hour of that time period. Here is an example
of the output:
What is the speed of the vehicle in mph? 40
How many hours has it traveled? 3
Hour Distance Traveled
--------------------------------
1 40
2 80
3 120
Input Validation: Do not accept a negative number for speed and do not accept any
value less than 1 for time traveled.
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
    //Declaring Variables 
    float mile,hr,dis;
    //Prompt user
    cout<<"This program will calculate the distance your car traveled"<<endl;
    cout<<" for every hour driving."<<endl;
    //Asking for input
    cout<<" What is the speed of the vehicle in mph?"<<endl;;
    cin>>mile;
    cout<<" How many hours has it traveled?"<<endl;
    cin>>hr;
    //Outputting Results 
    cout<<"The total amount of hour and distance traveled is "<<endl;
    cout<<" Hour      Distance\n";
    //Loop
    for (int i=1;i<=hr;i++){
        dis+=mile*hr;//Equation Calculating distance
    cout<<i<<"          "<<dis<<endl; }
    //Exit Program 
    return 0;
}

