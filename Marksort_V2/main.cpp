/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on May 18th, 2016, 8:05 AM
 * Purpose:  Sort a random array
 */

//System Libraries
#include <iostream>//I/O
#include <cstdlib> //Rand and Set Random
#include <ctime>   //Utilize time to set the seed
#include <iomanip> //Format
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void mrkSort(int [],int);//Sort the whole array
void smlNLst(int [],int, int);//Find smallest in list from a position
void swap(int &,int &);//Swap elements
void prntAry(int [],int, int);//Print the array with columns
void fillAry(int [],int);//Fill array with 2 digit random numbers

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed for variability
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    const int SIZE=100;
    int array[SIZE];
    int perLine=10;
    
    //Fill the array
    for(int i=0;i<SIZE;i++){
        array[i]=rand()%90+10;//2 digit random number
    }
    
    //Print the array
    cout<<endl<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<array[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl<<endl;
    
    
    for(int j=0;j<SIZE-1;j++){
        for(int i=j+1;i<SIZE;i++){
            if(array[j]>array[i]){
                array[j]=array[j]^array[i];
                array[i]=array[j]^array[i];
                array[j]=array[j]^array[i];
            }
        }
    }
    
    //Print the array
    cout<<endl<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<array[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl<<endl;
    //Exit Stage Right!
    return 0;
}

