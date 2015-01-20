/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 * Created on January 19, 2015, 2:35 PM
 * Purpose: 5. Body Mass Index
Write a program that calculates and displays a person s body mass index (BMI). The
BMI is often used to determine whether a person with a sedentary lifestyle is overweight
or underweight for his or her height. A person s BMI is calculated with the following
formula:
BMI = weight × 703 / height^2
where weight is measured in pounds and height is measured in inches. The program
should display a message indicating whether the person has optimal weight, is underweight,
or is overweight. A sedentary person s weight is considered to be optimal if his
or her BMI is between 18.5 and 25. If the BMI is less than 18.5, the person is considered
to be underweight. If the BMI value is greater than 25, the person is considered
to be overweight.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here!
int main(int argc, char** argv) {
    //Declaring variables
    float bmi,hi,wi;//BMI, Height, Weight
    //Outputting for input
    cout<<"This program will calculate and display a person body mass index(BMI)\n";
    cout<<"It will also determined if the person is overweight,underweight or \n";
    cout<<"sedentary."<<endl<<endl;
    cout<<"Please input your weight in pounds."<<endl;
    cin>>wi;//Input for weight
    cout<<"Please input your height in inches."<<endl;
    cin>>hi;//Input for height
    //Calculation 
    bmi=(wi*703)/(hi*hi); //Formula for BMI
    cout<<" Your Body Mass Index is "<<bmi<<endl<<endl;
    if(bmi>=18.5&&bmi<=25)//Sedentary weight
        cout<<" Your at a sedentary weight.\n";
    if(bmi<18.5)//Underweight
        cout<<" You are considered underweight. \n";
    if(bmi>25)//Overweight
        cout<<" You are considered overweight.\n";         
    //Exit Program 
    return 0;
}

