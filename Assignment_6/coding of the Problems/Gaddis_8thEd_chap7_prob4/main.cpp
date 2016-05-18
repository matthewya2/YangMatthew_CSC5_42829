/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2014, 2:45 PM
 */

#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    int size, n;         //size of array, the letter n, 
    int array[size];       
    int larger[size];       //larger array is the  numbers larger than n
    
    //gets size of array
    cout <<"what is the size of your array?"<<endl;
    cin >> size;
    cout << "please input the contents of each slot in the "
                "array."<<endl;
    for (int i=0;i<size;i++){
                cout <<"slot "<<i+1<<":";
        cin>>array[i];   
    }
    
    cout <<"now pick a number, n."<<endl;
    cin >> n;
    
    cout <<"numbers that are greater than the number, n, are:";
    for (int i=0;i<size;i++){
        if (n<array[i]){
            cout << array[i]<<"  ";
        }
    }
    return 0;
}