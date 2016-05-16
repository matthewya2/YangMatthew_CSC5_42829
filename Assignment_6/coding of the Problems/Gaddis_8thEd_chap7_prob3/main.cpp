/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2014, 2:45 PM
 */

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    const int TYPES=5;
    string salsas[TYPES], maxS, minS; //salsas, max sales salsa, min sales salsa
    int sales[TYPES];       //sales of each salsa
    salsas[0]="mild";
    salsas[1]="medium";
    salsas[2]="hot";
    salsas[3]="sweet";
    salsas[4]="zesty";
    int max, min, total;    //max sales, min sales, total sales
    
    //receives salsa sales
    for(int i=0;i<TYPES;i++){
        cout << " how many "<<salsas[i]<< " salsa's were sold?"<< endl;
        cin >> sales[i];
        while(sales[i]<0){
        cout <<"please input a valid number for number of jars sold.";
        cin >> sales[i];
        }
    }
    //finds maximum sales for a salsa
    max= sales[0];maxS=salsas[0];
    for(int j=1;j<TYPES;j++){
        if (sales[j]>max){
        max = sales[j];
        maxS= salsas[j];
        }
    }
    //finds minimum sales for a salsa
    min= sales[0];minS=salsas[0];
    for(int j=1;j<TYPES;j++){
        if (sales[j]<min){
        min = sales[j];
        minS= salsas[j];
        }
    }
    //calculates the total
    total = sales[0];
    for(int j=1; j<TYPES;j++){
        total+=sales[j];
    }

    //outputs results
    for (int i=0;i<TYPES;i++){
    cout << "You sold "<<sales[i]<<" jars of "<<salsas[i]<< " salsa's."<<endl;
    }
    cout << "you sold "<<total<<" jars of salsa in all."<<endl;
    cout << maxS <<" was the highest selling salsa,"<<endl;
    cout << minS <<" was the lowest selling salsa."<<endl;
    
    return 0;
}