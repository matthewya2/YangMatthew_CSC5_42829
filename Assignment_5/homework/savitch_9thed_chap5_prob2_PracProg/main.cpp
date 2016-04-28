/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 25, 2016, 9:51 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//function prototype
void input();
void convers();
void output();
int main(int argc, char** argv) {
    //declare variables
    float lengthI;              //total length in inches 
    float lengthC;              //total length in centimeters
    float inches, feet;
    float meters, centiM;       //... centimeters
    
    input();
    convers();
    output();
    
    return 0;
}
void input(){
    float lengthI;
    cout << "How many inches does your length have?" <<endl;
    cin >> lengthI;
}
void convers(){
    float inches, feet;
    float meters=0, centiM;
    float lengthI, lengthC=0;
    
    lengthC = lengthI*2.54;
    meters  = lengthC / 100;

}
void output(){
    float meters, centiM, lengthI, lengthC;
    cout << "your length, " <<lengthI<< " is equivalent to " <<meters<< 
            " meters. "<<lengthC;
}