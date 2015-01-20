/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 * Created on January 18, 2015, 10:39 PM
 * Purpose: 14. Write a program that plays the game of Mad Lib. Your program should
 * prompt the user to enter the following strings:
 * The first or last name of your instructor
 * Your name
 * A food
 * A number between 100 and 120
 * An adjective
 * A color
 * An animal
 * After it will be substituted into a story. 
 */
//System Libraries 
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declaring Variables
    string in;// Instructor Name
    string na;// Students Name
    string fo;// Food choice
    int    num;// Number from 100 to 120
    string adj;// An adjective 
    string col;// Color 
    string ani;// Animal
    //Asking for input
    cout<<"This program will play the game of Mad Lib, so it will ask for input.\n ";
    cout<<"What is your Instructor Last name?"<<endl;
    getline(cin,in);
    cout<<" What is your Full name?"<<endl;
    getline(cin,na);
    cout<<" Pick any type of food?"<<endl;
    getline(cin,fo);
    cout<<" Now pick a number from 100 and 120"<<endl;
    cin>>num;
    cin.get();
    cout<<"Input a random adjective."<<endl;
    getline(cin,adj);
    cout<<" What is your favorite color?"<<endl;
    getline(cin, col);
    cout<<" What is your favorite animal?"<<endl;
    getline(cin, ani);
    cout<<endl<<endl;
    //Output results
    cout<<"Dear Instructor "<<in<<endl<<endl;
    cout<<"I am sorry that I am unable to turn in my homework at this time.\n";
    cout<<"First, I ate a rotten "<<fo<<", which made me turn "<<col<<" and ";
    cout<<"extremely ill. I came down with a fever of "<<num<<". Next, my \n";
    cout<<adj<<" pet "<<ani<<" must have smelled the remains of the "<<fo<<" on my";
    cout<<" homework, because he ate it.\nI am currently rewriting my homework and hope";
    cout<<" you will accept it late."<<endl<<endl;
    cout<<"Sincerely \n "<<na<<endl;
    //Exit program 
    return 0;
}

