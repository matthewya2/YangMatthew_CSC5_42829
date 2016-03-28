/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on March 27, 2016, 6:40 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    int month, day, year;
    cout << "Enter a month in numeric form, yall!\n";
            cin >> month;
    cout << "Enter a day in numeric form, yall!\n";
            cin >> day;
    cout << "Enter a two digit year, yall!\n";
    cin >> year;
    
    if (year == day * month) {
        cout << "That's one magical date you got there lehr!";
    } 
    else{
        cout << "I'm sorry to say, that date is not magical.";
    }
            return 0;
}

