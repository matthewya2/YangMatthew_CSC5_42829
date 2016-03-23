/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2014, 2:45 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    float gradeN;     //number grade
    
    
    cout << "what is your grade?";
    cin  >> gradeN;
    
    //give the letter grade from the number grade
    if (gradeN < 60) cout << "F";
    if (gradeN >= 60 and gradeN < 70) cout << "D";
    if (gradeN >= 70 and gradeN < 80) cout << "C";
    if (gradeN >= 80 and gradeN < 90) cout << "B";
    if (gradeN >= 90) cout << "A";
    return 0;
    
}