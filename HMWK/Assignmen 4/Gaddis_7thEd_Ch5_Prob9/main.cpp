/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 25, 2015, 
 * Purpose:9. Hotel Occupancy
Write a program that calculates the occupancy rate for a hotel. The program should
start by asking the user how many floors the hotel has. A loop should then iterate
once for each floor. In each iteration, the loop should ask the user for the number of
rooms on the floor and how many of them are occupied. After all the iterations, the
program should display how many rooms the hotel has, how many of them are occupied,
how many are unoccupied, and the percentage of rooms that are occupied. The
percentage may be calculated by dividing the number of rooms occupied by the number
of rooms.
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
    //Declaring Variables
    float rm,rmtot,floor,occ,unoc,per;//Room,Floor,Occupied,Unoccupied,Percentage
    //Prompt User
    cout<<"This program will calculate the occupancy rate for a hotel. "<<endl;
    cout<<"How many floors does the hotel have?"<<endl;
    cin>>floor;
    //Loop
    
    for(int x=1;x<=floor;x++){
    cout<<"How many room are on the floor?"<<endl;
    cin>>rm;
    cout<<"How many rooms are occupied?"<<endl;
    cin>>occ;
    //Calculating room left 
    rmtot=rm*floor;
    unoc=rmtot-occ;
    per=occ/rmtot;
    cout<<"The number of room that the hotel has is "<<rmtot<<endl;
    cout<<"The amount of room occupied are "<<occ<<endl;
    cout<<"The amount of room unoccupied are "<<unoc<<endl;
    cout<<"The percentage of rooms that are occupied is "<<setprecision(2)<<fixed<<per<<"%'"<<endl;
    return 0;
    }
    return 0;
}

