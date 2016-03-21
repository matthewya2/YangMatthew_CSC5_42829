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
const float PAYINCP=0.076;  // payment increase percent
/*
 *   PAYINCP = .076;        // payment increase is 7.6%
 */
int main(int argc, char** argv) {
//set variables
   unsigned int oannsal; // original annual salary
   unsigned int nannsal; // new annual salary
   unsigned int omonsal; // original monthly salary
   unsigned int nmonsal; // new monthly salary
   
   float payincr;        //payment increase        
   
   
   cout << "What is your original salary?"<<endl;
        cin >> oannsal;
        
        payincr = oannsal * PAYINCP;
        nannsal = oannsal + payincr;
        omonsal = oannsal / 12;
        nmonsal = nannsal /12;
        cout <<"your retroactive pay for 6 months is $"<< payincr/2 << "."<<endl;
        cout <<"your new annual salary is $"<< nannsal<<"."<<endl;
        cout <<"your new monthly salary is $"<< nmonsal<<"."<<endl;
        
        
        
    return 0;
}

