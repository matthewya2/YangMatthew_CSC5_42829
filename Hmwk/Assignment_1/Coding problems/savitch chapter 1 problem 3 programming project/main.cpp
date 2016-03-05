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
    float time, dist;
    cout << "This program displays how far an object will fall when you input time.\n";
    cout << "How long will the object fall?\n";
    cin  >> time;
    dist = (9.8*time*time)/2;
    cout<< "The object will fall a total of "<< dist<<" meters";
    return 0;
}

