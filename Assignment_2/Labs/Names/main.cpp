/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 16, 2016, 10:07 AM
 */

#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //define the three names
    char firstN[12], secondN[12];
    
    //get the names
    cout << "enter Your first name, second name";
    cin  >> firstN >> secondN;
    cout << firstN <<" "<< secondN;
    
    if (strcmp(firstN,secondN)<0){
        cout<< firstN<<" "<<secondN;
    }
    else {
            cout<< secondN<<" "<< firstN;
        }
    return 0;
}

