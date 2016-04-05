/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 30, 2016, 9:41 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    //declare variables
    int daysW, countD, dailyP, total;
    //daysW = how many days getting paid
    //countD = the day counter
    //dailyP =daily pay
    // Total = total pennies
    
    dailyP =1;
    total=0;
        
    //get days and deny numbers less than 1
    cout << "How many days are you getting paid?\n";
            cin >> daysW;
            while (daysW < 1)  {
                cout<< "please input a number of 1 or higher.\n";
            cin >> daysW;  
            }
                
            for (countD = 1;countD <= daysW;countD++){
                   cout << countD << setw(5)<< dailyP <<endl;
                   
                   total =total + dailyP;
                   dailyP = dailyP * 2;

                }
            cout << "total month's pay: $" << total << endl;
            return 0;
}