/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on March 18, 2016, 5:14 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    int numberP, maxP; 
            
            //get the number of people in the meeting,and the max number
            //of people in the room according to fire safety laws
    cout << "how many people are in this meeting?\n";
        cin >> numberP;
        
    cout << "how many people are allowed to be in this room according to fire\n"
    "safety laws?";
        cin >> maxP;     
        
    if (numberP <= maxP) {
        cout << "you may continue with this meeting";
    }           
    else cout << "you may not continue this meeting because there are too\n"
            "many people in the room according to fire safety laws.";            
    return 0;
}

