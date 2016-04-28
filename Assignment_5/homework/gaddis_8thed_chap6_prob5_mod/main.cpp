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
float distance(unsigned short);

int main(int argc, char** argv) {
    //display the "key"
    cout << "Time" << setw(16) << "Distance Fallen"<< endl;
    
    //call function distance() to find distance
    //countT= the count of time
    for (unsigned short countT=1; countT<=10; ++countT){
        cout << countT << setw(10) << fixed << showpoint <<
                setprecision(3) << distance(countT) << " m." << endl;
    }
    return 0;
}
float distance(unsigned short time){
    //distance formula
    float g=9.81;
    float dist;
    dist = (1/2.0f)* g * time *time;
    return dist;
}