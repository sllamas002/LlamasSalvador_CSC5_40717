/* 
 * File:   main.cpp
 * Author:Salvador Llamas
 *
 * Created on January 8, 2015, 9:34 AM
 * Write a program that inputs a character from the keyboard and then outputs
 * a large block letter"C" composed of that character. For example, if the 
 * user inputs the character "X," then the output should look as follows:
 */
//System Libraries 
#include <cstdlib>
#include<iostream>
using namespace std;

/*User Libraries
 * Global Constants
 * Prototype Function
 * 
 * Execution Beings Here!
 */
int main(int argc, char** argv) {
    //Declare Char
    char C;
    //Asking for input
    cout<<" Please input a letter which will be converted into a C image."<<endl;
    cin>>C;
    //Outputs the results
    cout<<endl<<endl;
    
    cout<<"     "<<C<<C<<C<<endl;
    cout<<"    "<<C<< "    "<<C<<endl;
    cout<<"   "<<C<<""<<endl;
    cout<<"   "<<C<<endl;
    cout<<"   "<<C<<endl;
    cout<<"   "<<C<<endl;
    cout<<"   "<<C<<endl;
    cout<<"    "<<C<<endl;
    cout<<"     "<<C<<"   "<<C<<endl;
    cout<<"      "<<C<<C<<C<<endl;
    //Exit
    return 0;
}

