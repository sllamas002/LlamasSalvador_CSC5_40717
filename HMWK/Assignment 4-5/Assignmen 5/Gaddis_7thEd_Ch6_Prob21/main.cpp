/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 25, 2015,
 * Purpose: 21. isPrime Function
A prime number is a number that is only evenly divisible by itself and 1. For example,
the number 5 is prime because it can only be evenly divided by 1 and 5. The number
6, however, is not prime because it can be divided evenly by 1, 2, 3, and 6.
Write a function name isPrime, which takes an integer as an argument and returns
true if the argument is a prime number, or false otherwise. Demonstrate the function
in a complete program.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries 
//Global Constants
//Function Prototype
bool isPrime(int);
//Execution begins here!
int main(int argc, char** argv) {
    //Declaring variables
    float numb;//number
    //Prompt user
    cout<<"This program will take an integer as an argument and return true or false\n";
    cout<<"if the number is a prime number.\n\n"<<endl;
    cout<<" Please enter a number."<<endl;
    cin>>numb;//Asking for input
    if(isPrime(numb))//Calling Function
        cout<<"Your number is a prime number."<<endl;//True
    else 
       cout<<"Your number is not a prime number."<<endl;//False
            
//Exit Program 
    return 0;
}

bool isPrime(int num){
    int sum=0;
    for (int i=2;i<=num/2;i++)//Loop
    {
        if(num%i==0)
            sum++;//Repeats
    }
    if (sum>0)//Return if statement
        return false;
    else 
        return true;
}
