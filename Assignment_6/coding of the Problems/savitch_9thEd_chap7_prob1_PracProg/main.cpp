/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2014, 2:45 PM
 */

#include <iostream>
using namespace std;

bool firlas2();
int main(int argc, char** argv) {
    
    firlas2();
    return 0;
}
bool firlas2(){
    int size, n;         //size of array, the letter n, 
    int array[size];       
    
    cout <<"what is the size of your array?"<<endl;
    cin >> size;
    cout << "please input the contents of each slot in the "
                "array."<<endl;
    for (int i=0;i<size;i++){
                cout <<"slot "<<i+1<<":";
        cin>>array[i];   
    }
    
    if (array[0]==2||array[size-1]==2){
        cout <<"the last number, or the beginning number was a 2!";
        return true;
    }
    else {cout <<"the last and/or first number was not a 2.";
        return false;}
}