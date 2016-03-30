/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on August 20, 2014, 2:45 PM
 */

#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    //declare variables
    float salary  = 10e4f;   //$100,000
    float percDep = 1e-1f;  //%10 to save each year
    float pv      = 0.0f;   //present value
    float iRate   = 0.05f;  // interest rate
    int   nYears  = 0;      //comparison of calculation to the rule of 72
    float fv=pv;            //future value
    float yrlyDep;          //yearly deposit in $'s
    float savRet;           //savings to retire
    
    //calculate the approximate savings required to retire
    savRet  = salary / iRate;
    yrlyDep = salary * percDep;
    
    //output initial conditions and setup the table
    cout << "Savings required to retire = $" << savRet << endl;
    cout << "Yearly Deposit/Municipal Bond purchase = $" << yrlyDep << endl;
    cout << "Interest rate = " << iRate * 100 << "%" <<endl;
    cout << "years  Future Value" << endl;
    cout << fixed << setprecision(2)<< showpoint;
    cout << setw(3) << nYears << setw(10) << " $" << fv << endl;
    
    //loop each year until the future value is 2x the present value
    for(nYears = 1;fv<savRet;nYears++){
        fv*= 1+iRate;//yearly interst rate calculation
        fv+= yrlyDep; 
        cout << setw(3) << nYears << setw(10) << " $" << fv << endl;
    }
    return 0;
}