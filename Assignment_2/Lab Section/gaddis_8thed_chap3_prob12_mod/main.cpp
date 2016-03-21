/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 9, 2016, 10:34 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//global constants

int main(int argc, char** argv) {
//set variable types
    float celsius;
    float fahren; 
    
    cout << "How many celsius is it outside?"<<endl; 
            cin >> celsius;
            fahren = ((9/5)*celsius) +32;
            cout<< "it is "<< fahren<< " fahrenheit outside.";
                    
    return 0;
}

