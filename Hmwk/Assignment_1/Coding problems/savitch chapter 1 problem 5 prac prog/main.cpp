/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew Yang
 *
 * Created on March 1, 2016, 8:44 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    // surfare = surface area
    short width, height, surfare;
        cout << "what is the height of your rectangle in feet?";
        cin  >> height;
        cout << "What is the Width of your rectangle in feet?";
        cin  >> width;
         surfare = 2*height+2*width;
        cout << "you need "<< surfare << " feet of fence.";
    return 0;
}

