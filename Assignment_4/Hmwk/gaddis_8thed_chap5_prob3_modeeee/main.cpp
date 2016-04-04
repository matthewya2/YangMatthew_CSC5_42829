/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 30, 2016, 9:41 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //declare variables
    float cals, counter;
    
    
    cout << "this program counts the amount of calories burned running on a "
            " treadmill if you burn 3.6 calories per minute at 5 minute "
            "intervals for 30 minutes.\n";
   
    for (counter = 0,cals=3.6; counter <= 30; counter++){
        cout<< (counter*cals)<< "  ";
        
    }
    cout <<endl;
            return 0;
}