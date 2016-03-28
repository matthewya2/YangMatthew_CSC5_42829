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
using namespace std;



int main(int argc, char** argv) {
    //declare variables
    int weightN;     //weight in newtons
    int massK;     //mass in kilograms
    
    //get weight and mass
    cout << "What is the objects mass in kilograms?";
    cin  >> massK;
    
    //calculations
    weightN = massK * 9.8;
            cout << "The object weighs " << weightN << " Newtons.\n";
    
    if (weightN <10) {
        cout << "The object is too light";
    }
    else if (weightN > 1000){
        cout << "The object is too heavy";
    }
    
    return 0;
}

