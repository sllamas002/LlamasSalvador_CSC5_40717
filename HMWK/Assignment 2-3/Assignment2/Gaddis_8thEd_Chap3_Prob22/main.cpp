/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 12, 2015, 10:54 AM
 * Purpose: Use Sin, Cos, and Tan 
 */
//System Libraries
#include <cstdlib>  //Random rand(), srand()
#include <iostream> //Keyboard/Monitor I/O
#include <fstream>  //File I/O
#include <ctime>  //TIme Functions
#include <cmath>  //Math Function 
#include <iomanip> //Format Librarie
using namespace std;

//User Libraries

//Global Constants
const float PIDIV4=atan(1);
const float CNVDGRD=PIDIV4/45;

//Function Prototypes 

//Execution begins here!
/*
 * 
 */
int main(int argc, char** argv) {
    //Set the random number seed 
    srand(static_cast<unsigned int>(time(0)));
    //Declare a file object 
    ofstream output;
    //Open the file 
    output.open("SinCosTan.dat");
    //Declare the angle variable as an integer 
    //in degrees, and the radian angle as a float
    int angDeg=rand()%361-180;//Angle [-180,180]
    float angRad=angDeg*CNVDGRD;
    //Output the angle to the screen 
    cout<<"Angle in degrees => "<<angDeg<<endl;
    cout<<"Angle in radians => "<<angRad<<endl;
    //Output the sin,cos,tan
    cout<<fixed<<setprecision(4);
    cout<<"Sin("<<angDeg<<") = "<<setw(8)<<sin(angRad)<<endl;
    cout<<"Cos("<<angDeg<<") = "<<setw(8)<<cos(angRad)<<endl;
    cout<<"Tan("<<angDeg<<") = "<<setw(8)<<tan(angRad)<<endl;  
    //Output
    //Close the stream 

    //CLose the stream
    output.close();
    
    return 0;
}


