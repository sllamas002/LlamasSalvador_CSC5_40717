/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 8, 2015, 11:47 AM
 * Purpose:17. Stock Commission
   Kathryn bought 600 shares of stock at a price of $21.77 per share. She must pay her
stock broker a 2 percent commission for the transaction. Write a program that calculates
and displays the following:
* The amount paid for the stock alone (without the commission)
* The amount of the commission
* The total amount paid (for the stock plus the commission)
 */
//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;

/*User Libraries
 * Global Constants
 * 
 * Execution Begin Here!
 */
int main(int argc, char** argv) {
    //Declaring Variables
    float stock,comm,com,shares,price,total;
    shares=600;
    price=21.77;
    comm=.02;
    //Calculating
    stock=shares*price;//Stock Price
    com=comm*stock;//Commission Amount
    total=com+stock;//Overall total
    //Outputting answers
    cout<<"The amount paid for the stock alone = $"<<stock<<endl;
    cout<<"The amount of the commission = $"<<com<<endl;
    cout<<"The total amount paid = $"<<total<<endl;
    //Exit
    return 0;
}
