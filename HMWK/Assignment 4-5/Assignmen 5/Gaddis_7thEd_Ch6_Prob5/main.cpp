/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 26, 2015, 
 * Purpose:5. Falling Distance
When an object is falling because of gravity, the following formula can be used to
determine the distance the object falls in a specific time period:
d = 1/2 gt2
The variables in the formula are as follows: d is the distance in meters, g is 9.8, and t
is the amount of time, in seconds, that the object has been falling.
Write a function named fallingDistance that accepts an object s falling time (in
seconds) as an argument. The function should return the distance, in meters, that the
object has fallen during that time interval. Write a program that demonstrates the
function by calling it in a loop that passes the values 1 through 10 as arguments, and
displays the return value.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants 
const float G=9.807;
//Function Prototype
float fallingdistance(float);//Function name  time
//Execution Begins here!
int main(int argc, char** argv) {
    //Declare variables 
    float distance;//distance
    cout<<setprecision(2)<<fixed<<endl;
 //Loop for the distance  
    for (int i=1;i<=10;i++){
        distance=fallingdistance(i);  
        cout<<"Outputting time intervals "<<i<<" in meter is "<<distance<<endl;
     }
    //Exiting Program 
    return 0;
}

float fallingdistance(float time){
    float distance;
    distance=(.5*G*time*time);
    return distance;   
}