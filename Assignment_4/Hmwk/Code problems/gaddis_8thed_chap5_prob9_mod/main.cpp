/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on March 30, 2016, 9:41 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv) {
    //declare variables
    int maxFlor;    //the floors in the hotel 
    int flor;       //current floor
    int countR;     //counting the rooms
    int rooms;      //rooms on a floor
    float roomsT;     //total rooms
    int roomsOF;    //rooms occupied on a floor
    float roomsOT;    //rooms occupied in total
    int roomsUT;    //rooms unoccupied in total
    float percent;   //percent of rooms occupied
    roomsT=0;
    roomsOT=0;
    roomsOF=0;
    roomsUT=0;
    
    // get the maxflors
    cout << "How many floors does this hotel have?\n";
    cin >> maxFlor;
    
    //input validation
    while (maxFlor < 1){
        cout << "please input a number bigger than 0 for the input of floors."
                "\n";
        cin >>maxFlor;
    }
    
    //get rooms per floor 
    for (flor = 1;flor <= maxFlor; flor++){ 
        //no 13th floor    
        if (flor==13){ 
            continue;
        }
            cout << "how many rooms are on the #" << flor << " floor?\n";
                cin >> rooms;
            //input validation
                while (rooms < 10){
                    cout << "The input must be a number bigger than 9.\n";
                    cin >> rooms;
                }   
            cout << "how many of those rooms are occupied?\n";
                cin >> roomsOF;
                roomsOT +=roomsOF;
                roomsT  +=rooms;
                roomsUT = roomsT - roomsOT;
                percent = roomsOT / roomsT*100;
    }
    cout << "there are " << roomsT << " rooms in all,\n";
    cout << "there are " << roomsOT << " rooms that are occupied,\n"
            "there are " << roomsUT << " room(s) that are not occupied,\n"
            "and the precentage of occupied rooms is %" << percent;
            return 0;
}