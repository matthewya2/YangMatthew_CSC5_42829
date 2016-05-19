/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2014, 2:45 PM
 */

#include <iostream>
using namespace std;

void swapF2B();
int main(int argc, char** argv) {
    
    swapF2B();
    return 0;
}
void swapF2B(){
    int size;         //size of array, n is the number of 2's 
    int array[size];
    int medium=0;
    
    cout <<"what is the size of your array?"<<endl;
    cin >> size;
    cout << "please input the contents of each slot in the "
                "array."<<endl;
        for (int i=0;i<size;i++){
            cout <<"slot "<<i+1<<":"<<endl;
            cin>>array[i];   
        }
    array[0]=medium;
    array[size-1]=array[0];
    array[size-1]=medium;
    
    for (int i=0;i<size;i++){
    cout << array[i]<< " ";
    }
}