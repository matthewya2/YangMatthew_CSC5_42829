/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew
 *
 * Created on April 23, 2016, 10:20 PM
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <ctime>

using namespace std;

void calcRL();

 
int main(int argc, char** argv) {

    
    //use the function
    calcRL();
    return 0;
}
void calcRL(){
    //define Variables
    float cost;             //cost of the item
    float markupP;          //mark up percent of said item
    float total;            //total cost of said item
    
    //receive the cost
    cout << "Please input the Item's wholesale cost."<<endl;
    cin >> cost;
        while(cost<0){
            cout << "Please input only positive numbers."<<endl;
                cin >>cost;
        }
    
    //receive the markupP
    cout << "Now please input the Item's markup percentage without "
            "the percent symbol"<<endl;
    cin >> markupP;
        while(markupP<0){
            cout << "Please input only positive numbers." <<endl;
                cin >>markupP;
        }
    
    //ready markupP for multiplication
    markupP=(markupP+100)/100;
    
    //calculating the total
    total = cost*markupP;
    cout << "The Final price of the Item is, $" << setprecision(2) << fixed << total;
}
