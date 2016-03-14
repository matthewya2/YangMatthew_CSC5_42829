/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Matthew Yang
 *
 * Created on March 1, 2016, 8:44 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int number_of_pods, peas_per_pod, total_peas, addpeas;

cout << "Press return after entering a number.\n";
cout << "Enter the number of pods:\n";
cin  >> number_of_pods;

cout << "Enter the number of peas in a pod:\n";
cin  >> peas_per_pod;
    total_peas = number_of_pods * peas_per_pod;
            // calculating total peas
cout << "If you have ";
cout << number_of_pods;
cout << " pea pods\n";
cout << "and ";
cout << peas_per_pod;
cout << " peas in each pod, then\n";
cout << "you have ";
cout << total_peas;
cout << " peas in all the pods.\n";
    addpeas = peas_per_pod + number_of_pods;
cout << addpeas << " is pods plus peas";
    return 0;
}

