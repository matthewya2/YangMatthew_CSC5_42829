/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2014, 2:45 PM
 */

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
   //declare variables
    const int SIZE=10;
    int userIn[SIZE];
    int max, min;
    
    // gets values from user 
    for(int i=0;i<SIZE;i++){
        cout << "enter a number";
        cin >> userIn[i];
    }
    
    // find the max value of inputs
    max = userIn[0];
    for(int j=1;j<SIZE;j++){
        if (userIn[j]>max){
        max = userIn[j];
        }
    }
    //finds the min value of inputs
    for(int j=1;j<SIZE;j++){
        if (userIn[j]<min){
        min = userIn[j];
        }
    }
    //displays max and min value
    cout<< "this is the max, "<<max<<endl;
    cout<< "and this is the min, "<<min<<endl;
    //exit
    return 0;
}

