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
    float miles1;     //miles on car 1
    float miles2;     //miles on car 2
    float liters1;    //liters of gas used on car 1
    float liters2;    //liters of gas used on car 2
    float mpg1;       // miles per gallon on car 1
    float mpg2;       //miles per gallon on car 2
    
    do{
    cout << "how many miles have you driven in car 1?\n";
    cin >> miles1;
    cout << "how many liters has it used?\n";
    cin >> liters1;
    
    mpg1 = miles1 / liters1;    //mpg for first
    
    cout << "how many miles have you driven in car 2?\n";
    cin >> miles2;
    cout << "how many liters has it used?\n";
    cin >> liters2;
    
    mpg2 = miles2 / liters2;    // mpg for second
    
    //declare mpg
    cout << "your first car runs at " << mpg1 << " miles per gallon.\n";
    cout << "your second car runs at " << mpg2 << " miles per gallon.\n";
   
    //which car has better mileage
    if (mpg1 > mpg2){ cout << "your first car gets better mileage!\n";}
            if (mpg1==mpg2){cout << "they are equally efficient!\n";}
            if (mpg1 < mpg2){cout << "your second car gets better mileage!\n";}
            
    }while (miles1 >0);
    
            return 0;
}