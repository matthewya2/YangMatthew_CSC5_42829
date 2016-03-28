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
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //declare variables
    int number;
    
    cout << "Input a number 1-10 and I will give you the Roman numeral "
            "equivalent.\n";
    cin >> number;
    switch (number)
    {
        case 1: cout << "I";      break;
        case 2: cout << "II";     break;
        case 3: cout << "III";    break;
        case 4: cout << "IV";     break;
        case 5: cout << "V";      break;
        case 6: cout << "VI";     break;
        case 7: cout << "VII";    break;
        case 8: cout << "VIII";   break;
        case 9: cout << "IX";     break;
        case 10:cout << "X";      break;
    }
    if (number > 10 || number < 1) {cout << "error, please pick a number 1-10.";}
    
    
    return 0;
}

