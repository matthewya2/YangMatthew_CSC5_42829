/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Purpose:  To Illustrate the code for
 * developing a menu
 * Problem 1 -> Sum the numbers between 1 and 10
 * Problem 2 -> Multiply the numbers between 1 and 10
 * Problem 3 -> Divide the numbers between 1 and 10
 * Modified on Mar 21st, 2016
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    int choice;
    //General Menu Format
    do{
        //Display the selection
        cout<<"Type 1 to solve problem 1"<<endl;
        cout<<"Type 2 to solve problem 2"<<endl;
        cout<<"Type 3 to solve problem 3"<<endl;
        cout<<"Type 4 to solve problem 4"<<endl;
        cout<<"Type 5 to solve problem 5"<<endl;
        cout<<"Type 6 to solve problem 6"<<endl;
        cout<<"Type 7 to solve problem 7"<<endl;
        cout<<"Type 8 to solve problem 8"<<endl;
        cout<<"Type 9 to solve problem 9"<<endl;
        cout<<"Type 10 to solve problem 10"<<endl;
        cout<<"Type anything else to quit with no solutions."<<endl;
        //Read the choice
        
        cin>>choice;
        //Solve a problem that has been chosen.
        switch(choice){
                case 1:{
    int number;     //starting number to count with 
    int max ;       //max number the user inputs
    int counter;    //output
    
    //get the max number
            cout << "choose a positive integer. \n";
    cin  >> max;
    
    //input validation
    while (max <= 0){
        
        cout << "pick a positive number please.\n";
        cin >>max;
    };
    
    if (max >0){
    
    //counting code
    for (number=1, counter = 0; number<=max; number++){
        counter+= number;
    }
        cout << "the sum of all the numbers leading to your number is " << 
                counter;
    
    }
                }break;
                case 2:{
                    //declare variables
    int counter;
    
        
    while (counter <= 15){
            cout << char(counter++);}
    cout << endl;    
    while (counter > 15 && counter <= 31){
            cout << char(counter++);}
    cout << endl;    
    while (counter > 31 && counter <= 47){
            cout << char(counter++);}
        cout << endl;    
    while (counter > 47 && counter <= 63){
            cout << char(counter++);}
        cout << endl;    
    while (counter > 63 && counter <= 79){
            cout << char(counter++);}
        cout << endl;    
    while (counter > 79 && counter <= 95){
            cout << char(counter++);}
            cout << endl;    
    while (counter > 95 && counter <= 111){
            cout << char(counter++);}
            cout << endl;    
    while (counter > 111 && counter <= 127){
            cout << char(counter++);}
                }break;
                case 3:{
    //declare variables
    float ocean, counter;
    
    
    cout << "this program counts the height of the ocean every year if it were"
            " to rise 1.5mm every year for 25 years.\n";
   
    for (counter = 0,ocean=1.5; counter <= 25; counter++){
        cout<< (counter*ocean)<< "  ";
        
    }
    cout <<endl;
                }break;
                case 4:{
                    //declare variables
    float cals, counter;
    
    
    cout << "this program counts the amount of calories burned running on a "
            " treadmill if you burn 3.6 calories per minute at 5 minute "
            "intervals for 30 minutes.\n";
   
    for (counter = 0,cals=3.6; counter <= 30; counter++){
        cout<< (counter*cals)<< "  ";
        
    }
    cout <<endl;
                    break;
                }
                case 5:{
                    //declare variables
    float incre, counter, years;
    years=1;
    
    
    cout << "this program counts the amount of money cost to get a membership"
            " at a country club if its starting cost is $2500, and if it "
            "increases by 4% each year.\n";
   
    for (counter = 2500,incre=0.04; years <= 6; years++){
        cout<< (years*incre*counter+counter)<< "  ";
        
    }
    cout <<endl;
                    break;
                }
                case 6:{
    //declare variables
    float mph, dist, countH, hours, countD, countDD;
    /*mph= speed
    *dist=distance traveled
    *countH= the counting of the hours
    *hours= hours traveled
    *countD= distance traveled in the hours next to it
    *countDD= tool to find countD
    */
      
    cout << "What is the speed of the vehicle in MPH?\n";
    cin >> mph;
            if (mph <0) {
                cout<< "please input a positive number.\n";
                cin >> mph;  
            }
    cout << "How many hours has it traveled?\n";
    cin >> hours;
            if (hours < 1){
                 cout << "please input a time greater than 1.\n";
                 cin >> hours;
                }
    
    dist = mph * hours;
   
    for (countH=1; countH<=hours; countH++){
        countDD = dist / hours;
        countD = countDD * countH;
        cout << countH<< setw(5)<< countD<<endl;
    }
                    break;
                }
                case 7:{
    //declare variables
    int daysW, countD, dailyP, total;
    //daysW = how many days getting paid
    //countD = the day counter
    //dailyP =daily pay
    // Total = total pennies
    
    dailyP =1;
    total=0;
        
    //get days and deny numbers less than 1
    cout << "How many days are you getting paid?\n";
            cin >> daysW;
            while (daysW < 1)  {
                cout<< "please input a number of 1 or higher.\n";
            cin >> daysW;  
            }
                
            for (countD = 1;countD <= daysW;countD++){
                   cout << countD << setw(5)<< dailyP <<endl;
                   
                   total =total + dailyP;
                   dailyP = dailyP * 2;

                }
            cout << "total month's pay: $" << total << endl;
                }break;
                case 8:{
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
                    break;
                }
                case 9:{
    //declare variables
    float miles;     //miles
    float liters;   //liters of gas used
    float mpg;      // miles per gallon
    
    do{
    cout << "how many miles have you driven?\n";
    cin >> miles;
    cout << "how many liters has your car used?\n";
    cin >> liters;
    mpg = miles / liters;
    cout << "your car runs at " << mpg << " miles per gallon.\n";
    }while (miles >0);
    
                    break;
                }
                case 10:{
    //declare variables
    float miles1;     //miles on car 1
    float miles2;     //miles on car 2
    float liters1;    //liters of gas used on car 1
    float liters2;    //liters of gas used on car 2
    float mpg1;       // miles per gallon on car 1
    float mpg2;       //miles per gallon on car 2
    
    do{
    cout << "how many miles have you driven in car 1?\n";
    cin >> miles1;
    cout << "how many liters has it used?\n";
    cin >> liters1;
    
    mpg1 = miles1 / liters1;    //mpg for first
    
    cout << "how many miles have you driven in car 2?\n";
    cin >> miles2;
    cout << "how many liters has it used?\n";
    cin >> liters2;
    
    mpg2 = miles2 / liters2;    // mpg for second
    
    //declare mpg
    cout << "your first car runs at " << mpg1 << " miles per gallon.\n";
    cout << "your second car runs at " << mpg2 << " miles per gallon.\n";
   
    //which car has better mileage
    if (mpg1 > mpg2){ cout << "your first car gets better mileage!\n";}
            if (mpg1==mpg2){cout << "they are equally efficient!\n";}
            if (mpg1 < mpg2){cout << "your second car gets better mileage!\n";}
            
    }while (miles1 >0);
                    break;
                }
            default:{
                        cout<<"Exit?"<<endl;
                }
        };
    }while(choice<='10');
    return 0;
}