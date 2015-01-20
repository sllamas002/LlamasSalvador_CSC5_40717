/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 13, 2015, 10:59 AM
 * Purpose: Converting ounces  to metric tons
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//User Libraries
 
//Global Constants 
const float CMTNONS=3.527392e4f;//Conversion from Metric Tons
//Function Prototypes

  
//Execution begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float wtPackOz;//Weight of cereal constents in ounces
    float wtPackTn;//Weight of cereal constents in tons
    float nPackTn; //Number of cereal boxes in  tons
    //Prompt user for cereal weights.
    cout<<"Input the number of ounces on the cereal";
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float. ddd.ddd(onces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;    
    nPackTn=1/wtPackOz;
    //Output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<" (metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric ton =>"<<nPackTn<<endl;
           
    cout<<"Would you like to repeat the calculation?"<<endl;
    cout<<"or make a new calculation"<<endl;
    cout<<"Type Y for yes and N for no."<<endl;
     char answer;
    cin>>answer;
   /*if(answer=='Y'||'y')
    {
     cout<<"Input the number of ounces on the cereal";
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float. ddd.ddd(onces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;    
    nPackTn=1/wtPackOz;
    //Output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<" (metric tons)"<<endl;
    cout<<"Number of cereal boxes in a metric ton =>"<<nPackTn<<endl;
    }
    else return 0;
    
    */
    return 0;
}

