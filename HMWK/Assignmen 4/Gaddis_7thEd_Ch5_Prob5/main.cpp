/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 25, 2015, 4:20 PM
 * Purpose:5. Membership Fees Increase
A country club, which currently charges $2,500 per year for membership, has
announced it will increase its membership fee by 4% each year for the next six years.
Write a program that uses a loop to display the projected rates for the next six years.
 */

#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants 
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    //Declaring Variables
    float year,total(2500);
    //Prompt User 
    cout<<"This program calculates the increase fee for membership for the next\n";
    cout<<" 6 years."<<endl;
    //Loop
    for (year=1;year<=6; year++){
    total+=total*.04;
    //Outputting Results
    cout<<"The total fee for the membership per year is "<<endl;
    cout<<"Year ="<<year<<" Total = $"<<total<<endl;
    cout<<endl<<endl;
    }
    //Exit Program 
    return 0;
}

