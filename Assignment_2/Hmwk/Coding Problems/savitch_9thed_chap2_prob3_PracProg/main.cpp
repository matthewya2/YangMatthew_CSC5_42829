/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on March 17, 2016, 7:50 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

// Declare Global Constants
int secondM(60); //seconds per minute

int main(int argc, char** argv) {
    // declare variables
    float mph; //Miles per Hour
    float minutpM;      // minutes per mile 
    
    // get mph
    cout << "How fast is your treadmill going in miles per hour?";
            cin >> mph;
            
    //calculations
            minutpM = secondM / mph;
            
            
    // output
            cout << "you are going at a pace of " << setprecision(3) << 
                    minutpM << fixed << " minutes per mile";
            
     
    return 0;
}

