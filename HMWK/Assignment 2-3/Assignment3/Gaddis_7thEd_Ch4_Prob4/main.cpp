/* 
 * File:   main.cpp
 * Author:Salvador Llamas
 * Created on January 19, 2015, 7:01 PM
 * Purpose:4. Areas of Rectangles
The area of a rectangle is the rectangle s length times its width. Write a program that
asks for the length and width of two rectangles. The program should tell the user
which rectangle has the greater area, or if the areas are the same.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution begins here 
int main(int argc, char** argv)
{
    //Declare variables
    float rect1L, rect2L;//Lengths of rectangles
    float rect1W, rect2W;//Widths of rectangles
    float rect1A, rect2A;//Areas of rectangles
    //Output for input.
    cout<<"This program will take the length and width of 2 rectangles and";
    cout<<" calculate which of the two rectangles has a larger area."<<endl;
    cout<<"Please enter the length and width of the first rectangle in that";
    cout<<" order: "<<endl;
    cin>>rect1L>>rect1W;//Input of L and W of first Rectangles.
    //Output for input of 2nd rectangles.
    cout<<"Please enter the length and width of the second rectangle in that";
    cout<<" order: "<<endl;
    cin>>rect2L>>rect2W; //Input of L and W of second rectangles
    //Calculation
    rect1A=rect1L*rect1W;
    rect2A=rect2L*rect2W;
    if (rect1A>rect2A)
    {
        cout<<"Rectangle 1 has a greater area than Rectangle 2. "<<endl;
        cout<<endl;
    }
    if (rect1A<rect2A)
    {
        cout<<"Rectangle 1 has a smaller area than Rectangle 2. "<<endl;
        cout<<endl;
    }
    if (rect1A==rect2A)
    {
        cout<<"Rectangle 1 and Rectangle 2 have same area. "<<endl;
        cout<<endl;
    }
    return 0;
}

