/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew Yang
 *
 * Created on March 17, 2016, 7:22 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

// global constants
int metricT(35273.92); // metric ton value in ounces

int main(int argc, char** argv) {
// define variables
    float ouncesC; // ounces contained in cereal box
    float numberC; // number of cereal boxes
    float ozToMt;  // ounces divided by Metric tons
    
    // get ounce value
    cout << "how many ounces does your cereal box contain?"<<endl;
    cin >> ouncesC;
    
    // calculations
    ozToMt = ouncesC / metricT;
    numberC = metricT / ouncesC;
    
    // output
    cout << "Your cereal box weighs " << ozToMt << " in Metric Tons.\n";
    cout << "You would need " << numberC << " boxes in order to have 1 metric\n"
            "tons worth of cereal boxes weighing " << ouncesC << " ounces.";
    
    return 0;
}

