/* 
 * File:   main.cpp
 * Author: Salvador Llamas 
 *Created on January 19, 2015, 6:37 PM
 * Purpose: 21. Geometry Calculator
Write a program that displays the following menu:
Geometry Calculator
1. Calculate the Area of a Circle
2. Calculate the Area of a Rectangle
3. Calculate the Area of a Triangle
4. Quit
Enter your choice (1-4):
If the user enters 1, the program should ask for the radius of the circle and then display
its area. Use the following formula:
area = *r2
Use 3.14159 for * and the radius of the circle for r. If the user enters 2, the program
should ask for the length and width of the rectangle and then display the rectangle s
area. Use the following formula:
area = length * width
If the user enters 3 the program should ask for the length of the triangle s base and its
height, and then display its area. Use the following formula:
area = base * height * .5
If the user enters 4, the program should end.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here.
int main(int argc, char** argv) {
    //Declaring variables 
    int chi;//Choice
    //Start do-while
    do
    {
        cout<<endl
            <<"Choose one of the following. \n"
            <<"1. Calculate the Area of a Circle. \n"
            <<"2. Calculate the Area of a Rectangle. \n"
            <<"3. Calculate the Area of a Triangle. \n"
            <<"4. Quit. \n";
        cin>>chi;
        switch(chi)
        {
         case 1:
                //Declare variable 
                float radius, area;
                cout<<"Enter radius: \n";//Output for input
                cin>>radius;//Input radius
                //Calculation of area
                cout<<setprecision(2)<<fixed<<showpoint;
                area=3.14159*(radius*radius);
                // Result
                cout<<"The Area of circle is: "<<area<<endl;
                cout<<endl;
                break;
         case 2:
                float length,width,area1; //Declare variable
                cout<<"Enter Length \n";//Output for input
                cin>>length;//Input length
                cout<<"Enter Width \n"; //Output  for input
                cin>>width;//Input width
                //Calculation of area
                cout<<setprecision(2)<<fixed<<showpoint;
                area1=length*width;
                //Output result
                cout<<"The Area of Rectangle is: "<<area1<<endl;
                cout<<endl;
                break;
         case 3:  
                float base, height, area2;  //Declare variable
                cout<<"Enter the length of Triangle base: \n";  //Output for input
                cin>>base; //Input Base
                cout<<"Enter height of Triangle: \n";//Output for input
                cin>>height;//Input height
                cout<<setprecision(2)<<fixed<<showpoint;//Calculation of area
                area2=(base*height)*.5;
                cout<<"Area of Triangle is: "<<area2<<endl;//Output result
                cout<<endl;
                break;
            case 4:
                cout<<" Bye! \n";
                cout<<endl;
                break;
            default:
                cout<<"Not a valid choice. \n"
                    <<"Choose again. \n";
        }
    }while (chi !=4);
    //Exit program 
    return 0;
}

