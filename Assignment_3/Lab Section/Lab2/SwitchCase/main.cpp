/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 23, 2016, 10:25 AM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
float gradeN;     //number grade
    
    
    cout << "what is your grade?";
    cin  >> gradeN;
    
    //give the letter grade from the number grade
    switch (gradeN < 60){
            case true: cout << "F"; break;
            default: switch (gradeN < 70){
                            case true: cout << "D"; break;
                            default: switch (gradeN < 80){
                                case true: cout << "C"; break;
                                default: switch (gradeN <90){
                                    case true: cout << "B"; break;
                                    default: switch (gradeN < 100){
                                        case true: cout << "A";
                                        default: "error";
                                    }
                                }
                            }
                            
            }
    }
                    
            
    return 0;
}

