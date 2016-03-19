/* 
 * File:   main.cpp
 * Author: Matthew Yang
 *
 * Created on March 9, 2016, 8:06 AM
 * Purpose: babylonian square root aproximation
 */

// system libraries
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//set variables
    float n, r, guess;
    
    //input our number to square root
    cout << "what number would you like to find the square root of?"<<endl;
    cin  >> n;
    
// calculate the first aproximation
        guess = n/2;
        r=n/guess;
        guess = (guess+r)/2;   
        //output the first approximation
        cout << "first approximation = square root ("<<n<<" = r("
                <<r<<")guess("<<guess<<")"<<endl;
        
        
// calculate the second aproximation
        r=n/guess;
        guess = (guess+r)/2;   
        //output the third approximation
        cout << "first approximation = square root ("<<n<<" = r("
                <<r<<")guess("<<guess<<")"<<endl;
        
        
// calculate the third aproximation
        r=n/guess;
        guess = (guess+r)/2;   
        //output the third approximation
        cout << "first approximation = square root ("<<n<<" = r("
                <<r<<")guess("<<guess<<")"<<endl;        
        
        
// calculate the fourth aproximation
        r=n/guess;
        guess = (guess+r)/2;   
        //output the fourth approximation
        cout << "first approximation = square root ("<<n<<" = r("
                <<r<<")guess("<<guess<<")"<<endl;  
        
// calculate the fifth aproximation
        r=n/guess;
        guess = (guess+r)/2;   
        //output the fifth approximation
        cout << "first approximation = square root ("<<n<<" = r("
                <<r<<")guess("<<guess<<")"<<endl; 
        
    
// calculate the sixth aproximation
        r=n/guess;
        guess = (guess+r)/2;   
        //output the sixth approximation
        cout << "first approximation = square root ("<<n<<" = r("
                <<r<<")guess("<<guess<<")"<<endl;        
    return 0;
}

