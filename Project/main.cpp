/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on May 2, 2016, 7:50 AM
 */

#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void cardDis();     //number of 
int main(int argc, char** argv) {
    //declare variables
    int cards[26] = {0};        //total cards
    int freqofC[13] = {0};      //frequency of cards
    int cadpik1, cadpik2;      //card picks 1 and 2
    
    //create randomness
    unsigned seed = time(0);
    srand(seed);

    
    //create values for each card
    for(int i=0; i<26; ++i) {
        int num = rand() % 13 + 1;
        while (freqofC[num-1]>=2) {         //makes sure that no card has the 
            num = rand() % 13 + 1;          //same value more than twice.
        }
        ++freqofC[num-1];
        cards[i] = num;
    }
    
    //need to loop this,
    cout << "pick one card.";
    cin >> cadpik1;
    cout << "pick another.";
    cin >> cadpik2;
    
    cadpik1 = cards[cadpik1-1];
    cout << cadpik1 << endl;
    
    cadpik2 = cards[cadpik2-1];
    cout << cadpik2 << endl;
    if (cadpik1==cadpik2){ cout <<"this card is eliminated";}
    //until this
    
    
    // TEST
     for(int i=0; i<13; ++i)
               cout << freqofC[i] << ' ';
           cout << endl; 
    for(int i=0; i<26; ++i)
        cout << cards[i] << ' ';
    cout << endl;


    
    
    return 0;
}