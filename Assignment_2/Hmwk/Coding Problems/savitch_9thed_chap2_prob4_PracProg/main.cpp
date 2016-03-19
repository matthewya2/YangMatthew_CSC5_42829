/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on March 17, 2016, 7:25 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //declare Mad Lib variables 
    string teachN, yourN, food, adject, color, animal;
    short number;
    
    //get variables
    cout << "give the first or last name of your instructor,"<< endl;
            cin >> teachN;
    cout << "your name," << endl;
            cin >> yourN;
    cout << "a food"<<endl;
            cin >> food;
    cout <<"a number between 100 and 120"<< endl;
            cin >> number;
    cout << "an adjective"<< endl;
            cin >> adject;
    cout << "a color"<< endl;
            cin >> color;
    cout << "and an animal." << endl;
            cin >> animal;
    
            // output Mad Lib paragraph
    cout << "Dear Instructor \n" << teachN;
cout << " I am sorry that I am unable to turn in my homework at this time.\n" 
" First, I ate a rotten " << food << " , which made me turn " << color <<" and "
" extremely ill.\n I came down with a fever of " << number << ". Next, my"
<< adject << " pet "<< animal << " must have smelled the remains of the "
<< food << " on my homework, because he ate it.\n I am currently rewriting "
"my homework and hope you will accept it late.\n";
cout << " Sincerely," << yourN;

    
    return 0;
}

