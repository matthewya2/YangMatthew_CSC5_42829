/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on April 27th, 2016, 8:05 AM
 * Purpose:  
 */

//System Libraries
#include <iostream>//I/O
#include <iomanip>
#include <cstdlib>


using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
unsigned short coinTos(unsigned short);

//Execution Begins Here!
int main(int argc, char** argv) {
    //declare variables
    int tTosses, countT;    //total tosses, count of tosses
    unsigned short cValue;  //value of the coin
    unsigned short heads, tails;
    
    //random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //get tosses
    cout << "How many tosses, would you like to do on the coin?"<< endl;
    cin >> tTosses;
    
    //tosser
    for (countT=1;countT<=tTosses;countT++){
        cValue = coinTos(cValue);
        if (cValue ==1 ){cout << "Heads" << endl;
        heads++;
        }
        if (cValue ==2 ){cout << "Tails" << endl;
        tails++;
        }
    }
    
    //displays number of heads and tails
    cout << "you have tossed " << heads << " heads,"
            "and " << tails << " tails.";
    return 0;
}

    //random generator of 1's and 2's
unsigned short coinTos(unsigned short cValue){
    cValue = rand()%2+1; 
    return cValue;
}