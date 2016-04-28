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

//function prototype
float kinetic(float, float);

int main(int argc, char** argv) {
    //declare variables
    float mass = 0;     //mass of the object
    float velocity = 0;   //volume
    float kE = 0;       //Kinetic Energy
    
    cout << "Enter the mass of your object in kilograms." << endl;
    cin >> mass;
    cout << "Now enter the velocity of this object in meters per second." << endl;
    cin >> velocity;
    
    //get KE from kinetic function
    kE = kinetic(mass, velocity);
    
    //output results
    cout << "The kinetic Energy of your object is " << kE << ".";
    return 0;
}
float kinetic(float mass, float velocity){
    //Kinetic Energy formula which = (1/2)mv^2
    return ((1/2.0f) * mass * velocity * velocity);
}