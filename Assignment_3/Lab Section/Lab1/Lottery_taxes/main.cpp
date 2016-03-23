/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on August 20, 2014, 2:45 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    
    //declare variables
    float lottery;  // lottery money received 
    float taxP;     //tax penalty
    float taxL;     //lump sum penalty
    float taxM;     //marriage equity
    float lottL;    //amount after lump sum
    float lottP;    //amount of money after lump sum and tax
    float lottM;    //amount of money after lump sum, tax, and marriage split
    
    declare vale of variables
            taxP = 0.52;
            taxL=  0.62;
            taxM=  0.50;
    //get lottery variable
    cout << "how much did u win fam?";
    cin >> lottery;
    
    //calculations
   lottL = taxL * lottery;
   lottP = lottL -(taxP * lottL);
   lottM = lottP * taxM;
   
   
    //output result
    cout << "u will receive $" << setprecision(2) <<fixed<< lottP << ", fam"
            ".\n";
    cout << "but if u has a marriage partner, since u be splittin,"
            " u now has $" << lottM << ".";
            
    return 0;
}