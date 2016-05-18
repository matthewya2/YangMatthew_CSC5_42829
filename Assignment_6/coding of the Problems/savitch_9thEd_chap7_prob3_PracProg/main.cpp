/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2014, 2:45 PM
 */

#include <iostream>
using namespace std;

void count2s();
int main(int argc, char** argv) {
    
    count2s();
    return 0;
}
void count2s(){
    int size, n=0;         //size of array, n is the number of 2's 
    int array[size];       
    
    cout <<"what is the size of your array?"<<endl;
    cin >> size;
    cout << "please input the contents of each slot in the "
                "array."<<endl;
    for (int i=0;i<size;i++){
                cout <<"slot "<<i+1<<":"<<endl;
        cin>>array[i];   
    }
    
    for (int i=0;i<size;i++){
        if (array[i]==2){
            n++;
        }
    }
    cout << "there were "<<n<<" number 2's";

}