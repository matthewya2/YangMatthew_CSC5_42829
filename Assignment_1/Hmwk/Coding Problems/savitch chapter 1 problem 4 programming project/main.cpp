/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on March 4, 2016, 10:46 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    short unsigned dimes, nickels, quarts, qvalue, nvalue, dvalue, tvalue;
    cout << "This program counts how much money you have with nickels, quarters and dimes.\n";
    cout << "how many nickels do you have?\n";
            cin >> nickels;
    cout << "How many Dimes do you have?\n";
            cin >> dimes;
    cout << "How many Quarters do you have?\n";
            cin >> quarts;
            qvalue= 25*quarts;
            nvalue= 5*nickels;
            dvalue= 10*dimes;
            tvalue= qvalue+dvalue+nvalue;
    cout << "You have "<< tvalue << " cents.";
            
    return 0;
}

