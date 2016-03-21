/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 14, 2016, 10:37 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    //declare variables
    int a(2), b(3);
    
    //output original variables
    cout<< a<<" "<<b<<endl;
    
    //swap variables
    a=a^b;
    b=a^b;
    a=a^b;
    
    //output new variables
    cout<< a<<" "<<b;
    return 0;
}

