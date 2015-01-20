/* 
 * File:   main.cpp
 * Author:Salvador Llamas
 * Created on January 19, 2015, 3:30 PM
 * Purpose:16. Fat Gram Calculator
Write a program that asks for the number of calories and fat grams in a food. The
program should display the percentage of calories that come from fat. If the calories
from fat are less than 30% of the total calories of the food, it should also display a
message indicating that the food is low in fat.
One gram of fat has 9 calories, so
Calories from fat = fat grams * 9
The percentage of calories from fat can be calculated as
Calories from fat ÷ total calories
Input Validation: Make sure the number of calories and fat grams are not less than 0.
Also, the number of calories from fat cannot be greater than the total number of calories.
If that happens, display an error message indicating that either the calories or fat
grams were incorrectly entered.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Function Prototypes
//Global Constants
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    float nu,fat,per,total;//Number of Calories,Fat gram, percentage, total calories
    float gram;//conversion of fat gram to calories
    //Outputting for input
    cout<<"The program will ask for number of calories and fat grams in a food. \n";
    cout<<"It will then display the percentage of calories that come from fat. \n";
    cout<<"Also will display message indicating that the food is low in fat.\n"<<endl;
    cout<<" Please input the number of calories in your food."<<endl;
    cin>>nu;//number of calories in food
    cout<<" Please input amount of gram fat in your food."<<endl;
    cin>>fat;//Fat grams in food
    //Calculate
    gram=fat*9;//Conversion of fat gram times 9
    per=(gram/nu)*100;//Percentage of calories
    //Output results
    cout<<"The percentage of calories that come from fat is ="<<per<<"%"<<endl;
    if (per<30)//If percentage is less than30%
        cout<<"Your food is low in fat."<<endl;
    if (nu<fat)// If total is incorrect due to incorrect input
        cout<<"You incorrectly entered  the amount of calories or fat grams."<<endl;       
    //Exit Program
    return 0;
}

