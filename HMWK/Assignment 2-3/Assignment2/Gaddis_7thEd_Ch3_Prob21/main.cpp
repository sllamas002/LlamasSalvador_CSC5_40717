/* 
 * File:   main.cpp
 * Author: Salvador Llamas
 *
 * Created on January 18, 2015, 9:10 PM
 * Purpose:21. Stock Transaction Program
Last month Joe purchased some stock in Acme Software, Inc. Here are the details of
the purchase:
The number of shares that Joe purchased was 1,000.
When Joe purchased the stock, he paid $32.87 per share.
Joe paid his stock broker a commission that amounted to 2% of the amount he
paid for the stock.
Two weeks later Joe sold the stock. Here are the details of the sale:
The number of shares that Joe sold was 1,000.
He sold the stock for $33.92 per share.
He paid his stock broker another commission that amounted to 2% of the
amount he received for the stock.
 * Write a program that displays the following information:
* The amount of money Joe paid for the stock.
* The amount of commission Joe paid his broker when he bought the stock.
* The amount that Joe sold the stock for.
* The amount of commission Joe paid his broker when he sold the stock.
* Display the amount of profit that Joe made after selling his stock and paying the
two commissions to his broker. (If the amount of profit that your program displays
is a negative number, then Joe lost money on the transaction.)
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Function Prototypes
//Global Constants

//Execution Begins Here!
int main(int argc, char** argv) {
    //Define Variables 
    float shr,shr2;// Shares 1 and 2 
    float com;// Commission 
    float bro, bro2;//brokers 2% earning 
    float shpr, shpr2;// Share prices
    float purch(1000); //1,000 share bought
    float total, total2; // amount of money 
    float profit, profit2;//Total profit with commission
    //Calculation
    com=.02; // 2% commission
    shpr=32.87;// Purchased stock price
    shpr2=33.92;//Sold stock price 
    total=shpr*purch; //Total amount for Joe purchase 
    total2=shpr2*purch;//Total amount for Joe sell
    bro=com*total; // Commission on purchase
    bro2=com*total2;//Commission on Sell
    profit=total2-total;//Profit from buy and selling stocks
    profit2=profit-bro-bro2;//Profit overall
    //Outputting Info
    cout<<"This program will calculate the purchases and sells of Joe shares\n";
    cout<<"It will show the amount of money Joe spent and if he made profit\n";
    cout<<"Jos bought 1,000 share at $32.87 and then sold them for $33.92."<<endl;
    cout<<"He also paid two commission to his broker.\n\n"<<endl;
    cout<<"The amount of money Joe paid for stock was $"<<total<<endl;
    cout<<"The amount of commission Joe paid his broker when he bought the stock ";
    cout<<"was $"<<bro<<endl<<endl;
    cout<<"The amount that Joe sold the stock for was $"<<total2<<endl;
    cout<<"The amount of commission Joe paid his brokers when he sold the stocks ";
    cout<<"was $"<<bro2<<endl<<endl;
    cout<<"The total amount of profit Joe made from buy and selling his stocks was";
    cout<<" $"<<profit2<<endl;
   //Exit
    return 0;
}

