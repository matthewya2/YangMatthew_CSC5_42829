/* 
 * File:   main.cpp
 * Author: Matthew Yang
 *
 * Created on March 9, 2016, 8:06 AM
 * Purpose: babylonian square root aproximation
 */

// system libraries
#include <cstdlib>
#include <iostream>

using namespace std;

/*
 *   PAYINCP = .076;        // payment increase is 7.6%
 */
int main(int argc, char** argv) {
//set variables
   unsigned int oannsal;     // original annual salary
   unsigned int nannsal;     // new annual salary
   unsigned int omonsal;     // original monthly salary
   unsigned int nmonsal;     // new monthly salary
   const float PAYINCP=0.076;// payment increase percent
   float retrosx;            // retroactive increase for 6 months
   float payincr;            //payment increase for a year     
   short months;             //user input of months
   float retroPM;            //retroactive payment per month
   
   //get original annual salary
   cout << "What is your original salary?"<<endl;
        cin >> oannsal;
        
        //calculations
        payincr = oannsal * PAYINCP;
        nannsal = oannsal + payincr;
        omonsal = oannsal / 12;
        nmonsal = nannsal /12;
        retrosx = payincr / 2;
                
                
    //output
    cout <<"your retroactive pay for 6 months is $"<< retrosx<< "."<<endl;
    cout <<"your new annual salary is $"<< nannsal<<"."<<endl;
    cout <<"your new monthly salary is $"<< nmonsal<<"."<<endl;
    cout << "enter a number of months if you would like to find out how \n"
            "much money you would earn from the point after the payment \n"
            "increase.\n";
    cin >> months;

            retroPM = (oannsal * PAYINCP) / 12 * months;
            
            cout << retroPM;

    return 0;
}

