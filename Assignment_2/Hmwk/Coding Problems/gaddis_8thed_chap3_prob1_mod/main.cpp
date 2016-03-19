/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on March 18, 2016, 5:51 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int gallons, mxMiles, mPG;
    
    cout << "how many gallons of gas can this car hold?";
    cin >> gallons;
    cout << "how many miles can it be driven on a full tank?";
    cin >> mxMiles;
    
    mPG = mxMiles/gallons;
    
    cout << "Your car gets " <<mPG<< " miles per Gallon.";
    return 0;
}

