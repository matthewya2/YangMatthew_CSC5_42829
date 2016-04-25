/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 25, 2016, 9:51 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

float getSale();
void highest(float, float, float, float);
int main(int argc, char** argv) {
    //declare and initialize variables
    float nEast = 0;
    float sEast = 0;
    float nWest = 0;
    float sWest = 0;
    
    //get sales numbers
    cout << "what is the Northeast division's quarterly sales figure?";
    nEast=getSale();
    cout << "what is the Northeast division's quarterly sales figure?";
    sEast=getSale();
    cout << "what is the Northeast division's quarterly sales figure?";
    nWest=getSale();
    cout << "what is the Northeast division's quarterly sales figure?";
    sWest=getSale();
    return 0;
}
float getSale(){
    float sales=0;
    cin >> sales;
    
    //input validation for neg numbers
    while (sales<0){
        cout << "please input a positive number";
        cin >>sales;
    }
}
