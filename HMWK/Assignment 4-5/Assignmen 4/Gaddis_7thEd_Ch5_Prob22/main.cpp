/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 25, 2015, 
 * Purpose:22. Square Display
Write a program that asks the user for a positive integer no greater than 15. The program
should then display a square on the screen using the character X . The number
entered by the user will be the length of each side of the square. For example, if the
user enters 5, the program should display the following:
XXXXX
XXXXX
XXXXX
XXXXX
XXXXX
If the user enters 8, the program should display the following:
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
XXXXXXXX
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototype
//Execution Begins Here!

int main(int argc, char** argv) {
    //Declaring Variables 
    float numb;
    //Prompt User 
    cout<<" This program will use a positive integer no greater than 15."<<endl;
    cout<<" Then it will output a display of a square on screen using character";
    cout<<" X."<<endl<<endl;//Input of the number
    cout<<"Enter the positive number."<<endl;
    cin>>numb;
    //Loops 
    if (numb>15){//And if statement for greater than 15
        cout<<" The number is out of rage."<<endl;}
    else 
    { //Outputting the number of X
        for (int x=0;x<numb;x++){
           for(int i=0;i<numb;i++)
               cout<<"X";
                cout<<endl;
        }
    } 
    //Exit Program
    return 0;
}

