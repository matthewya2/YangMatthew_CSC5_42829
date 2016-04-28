/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on April 25, 2016, 9:51 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int crashes();
void lowest(int,int,int,int,int);
int main(int argc, char** argv) {
    //declare and initialize variables
    int north = 0;
    int south = 0;
    int east = 0;
    int west = 0;
    int central=0;
    
    //get sales numbers
    cout << "what was the North's number of car accidents last year?";
    north=crashes();
    cout << "what was the East's number of car accidents last year?";
    south=crashes();
    cout << "what was the South's number of car accidents last year?";
    east=crashes();
    cout << "what was the West's number of car accidents last year?";
    west=crashes();
    cout << "what was Central's number of car accidents last year?";
    central=crashes();
    //call highest sales function
    lowest(north,south,east,west,central);
    return 0;
}
//get crashes
int crashes(){
    int crash=0;
    cin >> crash;
    
    //input validation for neg numbers
    while (crash<0){
        cout << "please input a positive number";
        cin >>crash;
    }
    return crash;
}
//get lowest crashes
void lowest(int north, int east, int south, int west, int central){
    //find the lowest value
    int lowest = min(north, min(south, min(east, min(west, central))));
    
    if (north == lowest){
        cout<< "The North had the least accidents last year,with "<< lowest << " made.";
    }
    else if (east == lowest){
        cout<< "The East had the least accidents last year,with "<< lowest << " made.";
    }
    else if (south == lowest){
        cout<< "The South had the least accidents last year,with "<< lowest << " made.";
    }
    else if (west == lowest){
        cout<< "The West had the least accidents last year,with "<< lowest << " made.";
    }
    else{
        cout<< "Central had the least accidents last year,with "<< lowest << " made.";
    }
}