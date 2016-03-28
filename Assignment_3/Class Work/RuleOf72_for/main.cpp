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
    float pv=   100.0;  //present value
    float iRate=0.08f;   // interest rate
    float nComp;        //number of compounding periods by rule of 72
    int   nYears;         //comparison of calculation to the rule of 72
    float fv=pv;        //future value
    
    //calculate the approximate number years to double by rule of 72
    nComp = (0.72f / iRate);
    
    //output initial conditions and setup the table
    cout << "Present value = $" << pv << endl;
    cout << "interest rate = " <<iRate*100 << "%" << endl;
    cout << "years  Future Value" << endl;
    cout << fixed << setprecision(2)<< showpoint;
    cout << setw(3) << nYears << setw(10) << " $" << fv << endl;
    
    //loop each year until the future value is 2x the present value
    for(nYears = 1;fv<2*pv;nYears++){
        fv*= (1+iRate); //yearly interst rate calculation
        cout << setw(3) << nYears << setw(10) << " $" << fv << endl;
    }while (fv < 2*pv);
    
    // output results
    cout << "by the Rule of 72, it will take " << nComp << 
            " years to double" << endl;
    cout << "the future value = $" << fv << endl;
    cout << "the number of years to more than double = " << nYears << endl;
    return 0;
    
}

