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
    const int SIZE=18;
    int answers[SIZE];
    int userInp;
    bool valid=false;
    
    answers[0]=5658845;
    answers[1]=4520125;
    answers[2]=7895122;
    answers[3]=8777541;
    answers[4]=8451277;
    answers[5]=1302850;
    answers[6]=8080152;
    answers[7]=4562555;
    answers[8]=5552012;
    answers[9]=5050552;
    answers[10]=7825877;
    answers[11]=1250255;
    answers[12]=1005231;
    answers[13]=6545231;
    answers[14]=3852085;
    answers[15]=7576651;
    answers[16]=7881200;
    answers[17]=4581002;
            
        //sort
    for(int j=0;j<SIZE-1;j++){
        for(int i=j+1;i<SIZE;i++){
            if(answers[j]>answers[i]){
                answers[j]=answers[j]^answers[i];
                answers[i]=answers[j]^answers[i];
                answers[j]=answers[j]^answers[i];
            }
        }
    }        
    
    cout<<"Enter your User ID"<<endl;
    cin >> userInp;
    
    for (int i=0;i<SIZE;i++){
        cout << answers[i]<< endl;
    }
    
    //find
    int beginning=0, middle, end=SIZE-1;
    
    while (end>=beginning){
        middle=(beginning+end)/2;
        if (userInp==answers[middle]){
            valid=true;break;
        }
        else if(answers[middle]>userInp){
            end=middle-1;
        }
        else{beginning=middle+1;}
    }
            
    if (valid==true){
        cout << "Valid!";
    }
    else(cout << userInp<< " is not valid.");
    
    return 0;
}

