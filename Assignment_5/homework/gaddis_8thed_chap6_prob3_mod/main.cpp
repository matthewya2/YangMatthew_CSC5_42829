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
    
    //call highest sales function
    highest(nEast,sEast,nWest,sWest);
    return 0;
}
//get sales
float getSale(){
    float sales=0;
    cin >> sales;
    
    //input validation for neg numbers
    while (sales<0){
        cout << "please input a positive number";
        cin >>sales;
    }
    return sales;
}
//get highest sales
void highest(float nEast, float sEast, float nWest, float sWest){
    //find the highest sales
    float highest = max(nEast, max(sEast, max(nWest, sWest)));
    
    if (nEast == highest){
        cout<< "The northeastern division had the highest sales for this quarter,"
                "with $"<< setprecision(2) << fixed << nEast << " made.";
    }
    else if (sEast == highest){
        cout<< "The northeastern division had the highest sales for this quarter,"
                "with $"<< setprecision(2) << fixed << sEast << " made.";
    }
    else if (nWest == highest){
        cout<< "The northeastern division had the highest sales for this quarter,"
                "with $"<< setprecision(2) << fixed << nWest << " made.";
    }
    else {
        cout<< "The northeastern division had the highest sales for this quarter,"
                "with $"<< setprecision(2) << fixed << sWest << " made.";
}
}