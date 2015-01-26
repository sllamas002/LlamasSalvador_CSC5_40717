/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 25, 2015, 
 * 17. Paint Job Estimator
A painting company has determined that for every 115 square feet of wall space, one
gallon of paint and eight hours of labor will be required. The company charges
$18.00 per hour for labor. Write a modular program that allows the user to enter the
number of rooms that are to be painted and the price of the paint per gallon. It should
also ask for the square feet of wall space in each room. It should then display the
following data:
* The number of gallons of paint required
* The hours of labor required
* The cost of the paint
* The labor charges
* The total cost of the paint job
Input validation: Do not accept a value less than 1 for the number of rooms. Do not
accept a value less than $10.00 for the price of paint. Do not accept a negative value
for square footage of wall space.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants 
//Function Prototype
float jobprice(float,float);//Wall space, price
//Execution Begins here!

int main(int argc, char** argv) {
    //Declaring Variables
    float price,room,wall,sum;
    //Prompt user
    cout<<"This program will calculate the total cost for a paint job.\n\n"<<endl;
    cout<<"How many rooms will be painted?"<<endl;
    cin>>room;
    while(room<1){//validating the amount of rooms
        cout<<"Error you need to input more than 1 room."<<endl;
        cout<<"Enter the number of rooms"<<endl;
        cin>>room;
    }
    for(int i=1;i<=room;i++){
        cout<<"Now enter the amount of wall space for room "<<i<<": "<<endl;
        cin>>wall;
        while(wall<=115){
            cout<<"Error wall space has to be bigger then 115"<<endl;
            cout<<"Enter right wall space."<<endl;
            cin>>wall;
        }
         sum=sum+wall; //Add all the wall sizes 
    }
    cout<<"Now enter the price per gallon?"<<endl;
    cin>>price;
    while (price<10){//Verify the actual amount 
        cout<<"Price can not be under $10 dollars"<<endl;
        cout<<"Enter correct price."<<endl;
        cin>>price;}
    jobprice(sum,price);//Call to Function  
    //Exit Program 
    return 0;
}

float jobprice(float sum,float price){
    //Declaring variables 
    float galpaint(0),hrlab(0),cstpat(0),cstlab(0),total(0);//Gallons Need,Hour Labor,cost of paint,cost of labor,total charges
    //Calculation total cost for the paint job
    galpaint=galpaint+sum/115;//Amount of Gallons needed
    hrlab=hrlab+(galpaint*8);//1 gallon = 8 hours of labor
    cstpat=cstpat+price*galpaint;//cCost of Paint,Price * Gallon of paint
    cstlab=cstlab+(hrlab*18);//Cost of labor
    total=total+cstpat+cstlab;//Total cost
    //Outputting Results
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The number of paint required was = "<<galpaint<<" gallons"<<endl;
    cout<<"The hours of labor required is ="<<hrlab<<" hours"<<endl;
    cout<<"The cost of paint is =$"<<cstpat<<endl;
    cout<<"The cost for labor is =$"<<cstlab<<endl;
    cout<<"The total charges is =$"<<total<<endl;
    
}
