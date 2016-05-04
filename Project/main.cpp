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


int main(int argc, char** argv) {
    //declare variables
    bool isDone = false;        //determines when game is done
    const int SIZE =26;         //total #of cards
    int cards[SIZE] = {0};      //total card's values
    int freqofC[13] = {0};      //frequency of cards
    int cadpik1;                //card picks 1
    int cadpik2;                //card picks 1
//    int cnt;                    //counter
    char repeat='n';                //replay?
    
    //creates randomness
    unsigned seed = time(0);
    srand(seed);

    
    //create values for each card, while making sure each card is repeated only twice
    for(int i=0; i<26; ++i) {
        int num = rand() % 13 + 1;
        while (freqofC[num-1]>=2) {         //makes sure that no card has the 
            num = rand() % 13 + 1;          //same value more than twice.
        }
        ++freqofC[num-1];
        cards[i] = num;
    }
    

    
    do{
        // TEST
     for(int i=0; i<13; ++i)
               cout << freqofC[i] << ' ';
           cout << endl; 
    for(int i=0; i<26; ++i)
        cout << cards[i] << ' ';
    cout << endl;
    

    //pick card 1, and makes sure it is a valid number.
    cout << "pick one card.";
    cin >> cadpik1;
    if (cadpik1<1||cadpik1>26) {cout << "you must pick a number greater than 0,"
            "and less than 26";
    cin >>cadpik1;
    }
    //pick card 2, and make sure it is a valid number.
    cout << "pick another.";
    cin >> cadpik2;
    if (cadpik2<1||cadpik2>26) {cout << "you must pick a number greater than 0,"
            "and less than 26";
    cin >>cadpik2;
    }
    //makes sure that the cards you inputted are different.
    while (cadpik1==cadpik2){
        cout << "you must pick a number that is different than the first "<<endl
                <<"card you have picked. Pick another card for your second card.";
        cin >>cadpik2;
    }
    
    cout << "The first Card you picked has a "<<cards[cadpik1-1] << 
            " under it." <<endl;
    

    cout << "The second Card you picked has a "<<cards[cadpik2-1] << 
            " under it." <<endl;
    
    
    if (cards[cadpik1-1]==cards[cadpik2-1]){ cout <<"these cards are eliminated"<< endl;
    cards[cadpik1-1]=0;
    cards[cadpik2-1]=0;   
    }
    
    
    int cnt=0;  //counts the number of eliminated cards
    for(int i=0; i<26; ++i)
        if( cards[i]==0 ) ++cnt;
    if(cnt==26) isDone = true;
    
    // # of terminated cards
    cout << "You have eliminated " << cnt << " cards so far." << endl;
    
    
    }while(!isDone);        //finishes the program
    cout << "You have Won!";
    

    return 0;
}