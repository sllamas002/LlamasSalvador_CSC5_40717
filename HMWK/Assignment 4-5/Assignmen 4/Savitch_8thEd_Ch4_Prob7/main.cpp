/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 21, 2015, 11:37 AM
 * Purpose:
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries
//Global Constants
const float G=6.673e-8f;//Weak Force attraction cm^3/g/sec^2
//Function Prototype
// F            m1     m2   d
float atrForc(float,float,float);


int main(int argc, char** argv) {
    //Declare Variables, Values found of Google
    float mEarth=5.972e24f;//Mass of eartth in Kilogram
    float wt;//weight in lbs
    float rEarth=6.371e3;//Radius of Earth in Kilometer
    //Prompt user
    cout<<"Input your weight in lbs"<<endl;
    cin>>wt;
   //Conversion for consistent units
    mEarth*=1e3;//Convert to grams -> 10^3g/Kg
    float mass=wt*453.59;//Conversion of lbs to gram
    rEarth*=(1e3f*1e2f);//Conversion 10^3m/km*10^2cm/m
    //Calculate the attractive force in dynes
    float dynes=atrForc(mEarth,mass,rEarth);
    float lbs=dynes/4.44822e5f; //Conversion 1lbs/4.4dynes
    //Output the results
    cout<<"Your weight in dynes ="<<dynes<<endl;
    cout<<"Your weight in lbs   ="<<lbs<<endl;
    //Exit stage right
    return 0;
}

float atrForc(float m1,float m2,float d){
    return G*m1*m2/d/d;
    
}