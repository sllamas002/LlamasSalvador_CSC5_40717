/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 21, 2015, 8:21 AM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
const float PI=4*atan(10);

const float MAXRAND=pow(2,31)-1;
//Function Prototype
//Execution 
int main(int argc, char** argv) {
    //
    srand(static_cast<unsigned int>(time(0)));
    //Declare a max variable
    int loop=1000000;
    int max=rand();
    cout<<setprecision(2)<<fixed;
    //Now loop to find the maximum random number
    for(int i=2;i<=loop;i++){
        int r=rand();
    if (r>max)max=r;
}
    //NOw output the result
    cout<<endl<<endl;
    cout<<"2^31 ="<<MAXRAND<<endl;
    cout<<" Maximum found  ="<<max<<endl;
           
    return 0;
}

