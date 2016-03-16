/* 
 * File:   main.cpp
 * Author: Matthew Yang
 *
 * Created on August 20, 2014, 2:45 PM
 */

#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    float payRate, hrsWrkd, payChk;
    float ovrTime=40;
    
    //input values
    cout << "input Pay Rate ($'s/hr) and hours worked both dd.dd format"<<endl;
    cin  >> payRate >>hrsWrkd;
    
    if (hrsWrkd < 0) {
        payChk = 0;
    }else if (hrsWrkd <= ovrTime){ 
        payChk = hrsWrkd * payRate;
    }else if (hrsWrkd<= 98){ 
         payChk=hrsWrkd*payRate + (hrsWrkd-ovrTime) * payRate;    
    }     else{
         payChk = 0;
    }
    //output results
    cout << "paycheck = $" << payChk << " for "
            <<hrsWrkd << "hours @ $" << payRate << "/hr" << endl;
          
    
    return 0;
    
}

