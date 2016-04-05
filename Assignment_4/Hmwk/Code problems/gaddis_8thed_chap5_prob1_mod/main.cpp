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
    int number;     //starting number to count with 
    int max ;       //max number the user inputs
    int counter;    //output
    
    //get the max number
            cout << "choose a positive integer. \n";
    cin  >> max;
    
    //input validation
    while (max <= 0){
        
        cout << "pick a positive number please.\n";
        cin >>max;
    };
    
    if (max >0){
    
    //counting code
    for (number=1, counter = 0; number<=max; number++){
        counter+= number;
    }
        cout << counter;
    
    }
    return 0;
}

