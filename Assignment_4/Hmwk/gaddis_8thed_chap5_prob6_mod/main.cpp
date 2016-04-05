/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 30, 2016, 9:41 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //declare variables
    float mph, dist, countH, hours, countD, countDD;
    /*mph= speed
    *dist=distance traveled
    *countH= the counting of the hours
    *hours= hours traveled
    *countD= distance traveled in the hours next to it
    *countDD= tool to find countD
    */
      
    cout << "What is the speed of the vehicle in MPH?\n";
    cin >> mph;
            if (mph <0) {
                cout<< "please input a positive number.\n";
                cin >> mph;  
            }
    cout << "How many hours has it traveled?\n";
    cin >> hours;
            if (hours < 1){
                 cout << "please input a time greater than 1.\n";
                 cin >> hours;
                }
    
    dist = mph * hours;
   
    for (countH=1; countH<=hours; countH++){
        countDD = dist / hours;
        countD = countDD * countH;
        cout << countH<< setw(5)<< countD<<endl;
    }
    
    
            return 0;
}