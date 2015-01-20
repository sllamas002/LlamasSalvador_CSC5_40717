/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 8, 2015, 11:02 AM
 * 8. Total Purchase
A customer in a store is purchasing five items. The prices of the five items are:
Price of item 1 = $12.95
Price of item 2 = $24.95
Price of item 3 = $6.95
Price of item 4 = $14.95
Price of item 5 = $3.95
Write a program that holds the prices of the five items in five variables. Display each
items price, the subtotal of the sale, the amount of sales tax, and the total. Assume
the sales tax is 6%.
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

/*User Libraries
 * Global Constants
 * Prototype Function
 * 
 * Execution Being Here! 
 */
int main(int argc, char** argv) {
    //Declaring Variables
    float itm1,itm2,itm3,itm4,itm5;
    float tax,tax2;
    float total, total2;
    itm1 = 12.95;
    itm2 = 24.95;
    itm3 = 6.95;
    itm4 = 14.95;
    itm5 = 3.95;
    tax=.06;
    //Calculations
    total=itm1+itm2+itm3+itm4+itm5;//subtotal
    tax2=total*tax;//Find the sale tax
    total2=tax2*total;//Total
    //Outputting the prices of the items
    cout<<"Price of item 1 = $12.95"<<endl;
    cout<<"Price of item 2 = $24.95"<<endl;
    cout<<"Price of item 3 = $6.95"<<endl;
    cout<<"Price of item 4 = $14.95"<<endl;
    cout<<"Price of item 5 = $3.95"<<endl;
    cout<<"The subtotal of the sale is $"<<setprecision(2)<<fixed<<total<<endl;
    cout<<"The amount of sale tax is $" <<setprecision(2)<<fixed<<tax2<<endl;
    cout<<"Your total amount of the purchase is $"<<setprecision(2)<<fixed<<total2<<endl;
    cout<<"Thank you for shopping!!!"<<endl; 
    //Ext
    return 0;
}

