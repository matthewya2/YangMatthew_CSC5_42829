/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on March 18, 2016, 3:05 PM
 */

#include <cstdlib>
#include <iostream>



using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
// declare variables
    float radius, VM;
    
    //get radius
cout << "Enter radius of a sphere." << endl; 
cin >> radius;

// calculations
VM = (4.0 / 3.0) * 3.1415 * radius * radius * radius;

//output
cout << " The volume is " << VM << endl;
    return 0;
}

