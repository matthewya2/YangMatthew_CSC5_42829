/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 30, 2016, 9:41 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    //declare variables
    float ocean, counter;
    
    
    cout << "this program counts the height of the ocean every year if it were"
            " to rise 1.5mm every year for 25 years.\n";
   
    for (counter = 0,ocean=1.5; counter <= 25; counter++){
        cout<< (counter*ocean)<< "  ";
        
    }
    cout <<endl;
            return 0;
}