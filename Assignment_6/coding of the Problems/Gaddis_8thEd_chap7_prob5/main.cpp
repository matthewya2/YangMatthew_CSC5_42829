/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2014, 2:45 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    const int MONKEYS=3, DAYS=5;
    int monkEat[MONKEYS][DAYS];
    float total=0, avg=0;
    int least, gratest;
    
    for(int i=0;i<DAYS;i++){
        cout << "How many pounds of food did monkey 1 get on day "<< i+1 <<"?"<<endl;
        cin >>monkEat[0][i];
            while(monkEat[0][i]<0){
                cout <<"please input a valid answer.";
                cin >> monkEat[0][i];
        }
    }
    
    for(int i=0;i<DAYS;i++){
        cout << "How many pounds of food did monkey 2 get on day "<< i+1 <<"?"<<endl;
        cin >>monkEat[1][i];
            while(monkEat[1][i]<0){
                cout <<"please input a valid answer.";
                cin >> monkEat[1][i];
        }
    }
    
    for(int i=0;i<DAYS;i++){
        cout << "How many pounds of food did monkey 3 get on day "<< i+1 <<"?"<<endl;
        cin >>monkEat[2][i];
            while(monkEat[2][i]<0){
                cout <<"please input a valid answer.";
                cin >> monkEat[1][i];
        }
    }
    
    for (int i=0;i<DAYS;i++){
        total+=monkEat[0][i];
        total+=monkEat[1][i];
        total+=monkEat[2][i];
    }   
        avg=total/(MONKEYS*DAYS);
    
        //finds the least 
        least=monkEat[0][0];
    for (int i=1;i<DAYS;i++){
    if (monkEat[0][i]<least){
        least=monkEat[0][i];}
    }
    for (int i=1;i<DAYS;i++){
    if (monkEat[1][i]<least){
        least=monkEat[1][i];}
    } 
    for (int i=1;i<DAYS;i++){
    if (monkEat[2][i]<least){
        least=monkEat[2][i];}
    } 
    
        //finds the least 
        gratest=monkEat[0][0];
    for (int i=1;i<DAYS;i++){
    if (monkEat[0][i]>gratest){
        gratest=monkEat[0][i];}
    }
    for (int i=1;i<DAYS;i++){
    if (monkEat[1][i]>gratest){
        gratest=monkEat[1][i];}
    } 
    for (int i=1;i<DAYS;i++){
    if (monkEat[2][i]>gratest){
        gratest=monkEat[2][i];}
    } 
    
    cout << "your monkeys have been eating at an average of "<<avg<<" lbs."
            " a day"<<endl;
    cout << "the least one of your monkeys have eaten on one day was "<<least<<
            " lbs."<<endl;
    cout << "the greatest one of your monkeys have eaten on one day was "
            <<gratest<<" lbs."<<endl;
    return 0;
}