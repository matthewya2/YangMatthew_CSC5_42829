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
    int counter;
    
        
        while (counter <= 15){
            cout << char(counter++);}
    cout << endl;    
    while (counter > 15 && counter <= 31){
            cout << char(counter++);}
    cout << endl;    
    while (counter > 31 && counter <= 47){
            cout << char(counter++);}
        cout << endl;    
    while (counter > 47 && counter <= 63){
            cout << char(counter++);}
        cout << endl;    
    while (counter > 63 && counter <= 79){
            cout << char(counter++);}
        cout << endl;    
    while (counter > 79 && counter <= 95){
            cout << char(counter++);}
            cout << endl;    
    while (counter > 95 && counter <= 111){
            cout << char(counter++);}
            cout << endl;    
    while (counter > 111 && counter <= 127){
            cout << char(counter++);}
    return 0;
}