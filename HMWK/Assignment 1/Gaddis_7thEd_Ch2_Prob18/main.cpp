/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 8, 2015, 8:19 AM
 * Purpose:18. Energy Drink Consumption
A soft drink company recently surveyed 12,467 of its customers and found that
approximately 14 percent of those surveyed purchase one or more energy drinks per
week. Of those customers who purchase energy drinks, approximately 64 percent of
them prefer citrus avored energy drinks. Write a program that displays the following:
* The approximate number of customers in the survey who purchase one or more
energy drinks per week
* The approximate number of customers in the survey who prefer citrus flavored
energy drinks
 * 
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries

//GLobal Constants
 const float CONVPCT=100;//Percent COnversion
 
 //FUncitons Prototypes 
 
 
 
//Execute Program Here!
int main(int argc, char** argv) {
    //Declare variables 
    short custSrv=12467;//Customers Surveyed
    char perEDrk=14;//Percentage Energy Drinkers
    char perCDrk=64;//Percentage Citrus Drinkers
// Calculate customer numbers requested
    short custE=custSrv*perEDrk/CONVPCT;//Energy Drinker
    short custC=custE*perCDrk/CONVPCT;//Citrus Drinker
    //Output the results
    cout<<"Customers surveyed that are Energy Drinkers =";
    cout<<custE<<endl; 
    cout<<"Customers surveyed that are Citrus Drinkers =";
    cout<<custC<<endl;          
    return 0;
}

