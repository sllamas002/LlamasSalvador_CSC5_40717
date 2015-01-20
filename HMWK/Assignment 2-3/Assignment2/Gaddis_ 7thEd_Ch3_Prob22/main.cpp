/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 * Created on January 17, 2015, 12:37 PM
 * Purpose:22. Word Game
Write a program that plays a word game with the user. The program should ask the
user to enter the following:
* His or her name
* His or her age
* The name of a city
* The name of a college
* A profession
* A type of animal
* A pet s name
After the user has entered these items, the program should display the following story,
inserting the user s input into the appropriate locations:
There once was a person named NAME who lived in CITY. At the age of
AGE, NAME went to college at COLLEGE. NAME graduated and went to work
as a PROFESSION. Then, NAME adopted a(n) ANIMAL named PETNAME. They
both lived happily ever after!
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
//User Libraries 
//Global Constants 
//Function Prototype 
int main(int argc, char** argv) {
    //Declare Inputs
    string  fname; //Name
    int     age; //Age
    string city; //City 
    string college; //College attending
    string pro; //Profession
    string anim; //Type of animal
    string pname; //Name for the animal
    //Output for Input
    cout<<" This program will ask you question so that you can input.";
    cout<<" Then it will output a short story."<<endl<<endl;
    cout<<" What is your name?"<<endl;
    getline(cin, fname);
    cout<<" What is your age?"<<endl;
    cin>> age;
    cin.get();
    cout<<" What city are you from?"<<endl;
    getline(cin, city);
    cout<<" What college do you attended?"<<endl;
    getline(cin, college);
    cout<<" What is your profession?"<<endl;
    getline(cin, pro);
    cout<<" What type of pet do you want?"<<endl;
    getline(cin, anim);
    cout<<" What do you want to name your pet?"<<endl;
    getline(cin, pname);
    //Output story.
    cout<<"\n\nThere once was a person named "<<fname<<" who lived in "<<city<<".";
    cout<<" At the age of "<<age<<", "<<fname<<" went to \ncollege at "<<college<<". ";
    cout<<fname<<" graduated and went to work as a "<<pro<<"."<< " Then, "<<fname;
    cout<<" \nadopted a(n) "<<anim<<" named "<< pname<<". They both lived happily ever after!"<<endl;
   //Exit 
    return 0;
}

