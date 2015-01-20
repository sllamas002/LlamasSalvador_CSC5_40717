/* 
 * File:   main.cpp
 * Author:Salvador Llamas
 *
 * Created on January 8, 2015, 9:14 AM
 * Purpose: 7. Write a program that prints out "CS!" in large block
 * letters inside a border of *s followed by two blank lines then then message. 
 * Computer Science is Cool Stuff. The output should look as follows:
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

/*Users Libraries 
 * Global Constants 
 * Function Prototypes 
 * Execution begins Here!
 * 
 */
int main(int argc, char** argv) {
    //Outputting the message
    cout<<"**************************************************"<<endl<<endl;
    cout<<"      C  C  C                    S  S  S  S      !!"<<endl;
    cout<<"    C          C               S            S    !!"<<endl;
    cout<<"  C                           S                  !!"<<endl;
    cout<<"  C                            S                 !!"<<endl;
    cout<<"  C                              S  S  S  S      !!"<<endl;
    cout<<"  C                                          S   !!"<<endl;
    cout<<"   C                                          S  !!"<<endl;
    cout<<"    C          C               S            S    !!"<<endl;
    cout<<"      C  C   C                   S  S  S  S      00"<<endl<<endl;
    cout<<"**************************************************"<<endl<<endl;
    cout<<"         Computer Science is Cool Stuff!!!    "<<endl;
    //Exit
    return 0;
}

