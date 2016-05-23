/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  Grading Program
 * Date:     May 11th, 2016  8:17am
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    const int SIZE=10;
    int answers[SIZE];
    int userInp;
    bool valid=false;
    
    answers[0]=13579;
    answers[1]=26791;
    answers[2]=26792;
    answers[3]=33445;
    answers[4]=55555;
    answers[5]=62483;
    answers[6]=77777;
    answers[7]=79422;
    answers[8]=85647;
    answers[9]=93121;

            
            
    
    cout<<"Enter your Lottery Numbers"<<endl;
    cin >> userInp;
    
    for(int i=0;i<SIZE;i++){
        if (answers[i]==userInp){
            valid=true;
        }
    }
    if (valid==true){
        cout << "Winner!!";
    }
    else(cout << "You are not a winner");
    
    return 0;
}

