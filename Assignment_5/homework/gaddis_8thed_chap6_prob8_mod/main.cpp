/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 25, 2016, 9:51 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//function prototype
unsigned short random(unsigned short);

int main(int argc, char** argv) {
    //declare variables
    unsigned short coinV;   //coin value (1-2)
    unsigned short tosses;  //coin tosses
    unsigned short countT;  //count of tosses
    
    cout << "how many coin tosses do you want to have?";
    cin >> tosses;
    
    coinV= random();
    
    //makes the amount of tosses til countT = tosses
    for (countT=1;countT<=tosses;countT++){
        coinV = random();
        if (coinV = 1){ cout << "Heads" << endl;}
        if (coinV = 2){ cout << "tails" << endl;}
        else {cout << "error" << endl;}
        cout << coinV;
    }
    
    return 0;
}
unsigned short random(unsigned short coinV){
    coinV = rand() % 2+1;
    return;
}
    