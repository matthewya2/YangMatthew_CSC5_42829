/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on March 27, 2016, 6:40 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //declare variables
    int x, y;
    
    //state the code and get numbers
    cout << "input two numbers and I will show you which is smaller...yay.\n";
    cin >> x >> y; 
    
    //calculations and output of the calculations
    cout << (x<y? x:y);
   
    
    return 0;
}

