/* 
 * File:   main.cpp
 * Author: chava408
 *
 * Created on January 26, 2015, 
 * Purpose:6. Kinetic Energy
In physics, an object that is in motion is said to have kinetic energy. The following formula
can be used to determine a moving object s kinetic energy:
KE = 1
2 mv2
The variables in the formula are as follows: KE is the kinetic energy, m is the object s
mass in kilograms, and v is the object s velocity, in meters per second.
Write a function named kineticEnergy that accepts an object s mass (in kilograms)
and velocity (in meters per second) as arguments. The function should return the
amount of kinetic energy that the object has. Demonstrate the function by calling it in
a program that asks the user to enter values for mass and velocity.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Function Prototype
float energy(float,float,float);//Function name for mass,velocity,Kinetic Energy
//Execution Begins here!
int main(int argc, char** argv) {
    //Declaring Variables 
   float ma,ve,ke;//Mass,Velocity,Kinetic Energy
    //Prompting User
    cout<<"This program will calculate the Kinetic Energy from Mass and Velocity";
    cout<<endl<<endl;
    cout<<"Please input the mass of the object in Kilograms."<<endl;
    cin>>ma;
    cout<<"Please input the velocity in meters per second."<<endl;
    cin>>ve;
    //Output result
    cout<<setprecision(2)<<fixed<<endl;
    cout<<"The amount of Kinetic Energy is "<<energy(ma,ve,ke)<<endl;
    //Exit Program 
    return 0;
}

float energy(float ma,float ve,float ke){
    ke=.5*ma*ve*ve;//Formula
    return ke;
}

