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
    const int SIZE=12;
    float userIn[SIZE];
    float max, min;
    float total=0,avg=0;
    
    // gets values from user 
    for(int i=0;i<SIZE;i++){
        cout<<"enter the amount of rainfall for month "<<i+1<<" in inches"<<endl;
        cin >> userIn[i];
    }
    //finds the total rainfall
    for (int y;y<SIZE;y++){
        total+=userIn[y];
    }
    
    //finds the average rainfall
    avg=total/SIZE;
    
    // find the max value of inputs
    max = userIn[0];
    for(int j=1;j<SIZE;j++){
        if (userIn[j]>max){
        max = userIn[j];
        }
    }
    
    for(int j=1;j<SIZE;j++){
        if (userIn[j]<min){
        min = userIn[j];
        }
    }
    //displays values
    cout<< "the average rainfal per month in inches is "<< avg<<endl;
    cout<< "the total rainfall is "<<total<<" inches"<<endl;
    cout<< "this is the max rainfall in inches "<<max<<endl;
    cout<< "and this is the min rainfall in inches "<<min<<endl;
    //exit
    return 0;
}

