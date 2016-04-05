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
    float miles;     //miles
    float liters;   //liters of gas used
    float mpg;      // miles per gallon
    
    do{
    cout << "how many miles have you driven?\n";
    cin >> miles;
    cout << "how many liters has your car used?\n";
    cin >> liters;
    mpg = miles / liters;
    cout << "your car runs at " << mpg << " miles per gallon.\n";
    }while (miles >0);
    
            return 0;
}