/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2014, 2:45 PM
 */

#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

//function prototypes
void prntAry(char [],int,int);
int rdFile(char [],char []);
int score(char[],int,char[],int);

int main(int argc, char** argv) {
   //declare variables
    const int SIZE=100;
    char answers[SIZE];
    char user[SIZE];
    
    //open file
    char fnAns[]="AnswerKey.dat";
    int nAnswers = rdFile(fnAns,answers);
    char fnUsr[]="UserAnswers.dat";
    int nUser = rdFile(fnUsr,user);
    
    //print the arrays
    cout<<"The Answer Key"<<endl;
    prntAry(answers,nAnswers,10);
    cout<<"The Users Answers"<<endl;
    prntAry(user,nUser,10);
   
    // calc results
    int results =score (answers,nAnswers,user,nUser);
    cout << "Score = "<<results<< " right -> "
            << 1.0f*results/nAnswers*100<<"%"<<endl;
        
    //exit
    return 0;
}
int score(char a[],int nA,char u[],int nU){
    //Calculate the results
    int results=0;
    for(int ques=0;ques<nA&&ques<nU;ques++){
        if(a[ques]==u[ques])results++;
    }
    return results;
}
void prntAry (char a[],int nInA,int perLine){
    //loop and output array
    cout <<endl;
    for (int i=0;i<nInA;i++){
        cout << a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}

int rdFile(char fn[],char dat[]){
    //Declare variables
    ifstream ansKey;
    
    //Open the file
    ansKey.open(fn);
    
    //Read from the file
    int n=0;
    while(ansKey>>dat[n]){
        n++;
    }
    
    //Close the file
    ansKey.close();
    
    //Return the size
    return n;
}