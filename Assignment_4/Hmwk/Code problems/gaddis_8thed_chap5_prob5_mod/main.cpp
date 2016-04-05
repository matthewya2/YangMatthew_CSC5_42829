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
    float incre, counter, years;
    years=1;
    
    
    cout << "this program counts the amount of money cost to get a membership"
            " at a country club if its starting cost is $2500, and if it "
            "increases by 4% each year.\n";
   
    for (counter = 2500,incre=0.04; years <= 6; years++){
        cout<< (years*incre*counter+counter)<< "  ";
        
    }
    cout <<endl;
            return 0;
}