// Author:         Samuel McLamb
// Class:          CSI-140
// Assignment:     Module-03-Lab-1-Change Calculator
// Date Assigned:  Not Sure
// Due Date:       Feb 5 by 10am 

// Description:
// A brief description of the purpose of the file/class.
// Certification of Authenticity:
// I certify that this is entirely my own work, except where I have given
// fully-documented references to the work of others. I understand the definition and
// consequences of plagiarism and acknowledge that the assessor of this assignment
// may, for the purpose of assessing this assignment:
// - Reproduce this assignment and provide a copy to another member of academic staff;
// and/or
// - Communicate a copy of this assignment to a plagiarism checking service (which may
// then retain a copy of this assignment on its database for the purpose of future
// plagiarism checking)

#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

const double PACKAGE_A_MONTHLY_COST = 9.95;
const double PACKAGE_A_OVERCHARGE = .08;
const double PACKAGE_A_HOURS_CALL_TIME = 5;

const double PACKAGE_B_MONTHLY_COST = 14.95;
const double PACKAGE_B_OVERCHARGE = .06;
const double PACKAGE_B_HOURS_CALL_TIME = 10;

const double PACKAGE_C_MONTHLY_COST = 19.95;
const double PACKAGE_C_OVERCHARGE = 0;
const double PACKAGE_C_HOURS_CALL_TIME = 1;

string display_result(string package,
                    string name, 
                    int hours, 
                    double pmc, 
                    double phct, 
                    double pao){
    string result;
    string due;
    due = "$" + to_string(pmc + (60 * max((int)(hours - phct), 0) * pao));
    result += "                     Customer: " + name + "\n";
    result += "             Customer Package: " + package + "\n";
    result += "                   Hours Used: " + to_string(hours) + "\n"; 
    result += "          Customer Amount Due: " + due + "\n";
    result += "-----------------------------------------\n";
    return result;
}

int main(){
    string package;
    int hours = 0;
    string name;
    cout << "                       Enter Your Name: ";
    cin >> name;
    cout << "\nWhat Package do you have? (A, B, or C): ";
    cin >> package;
    cout << "\n             How many hours were used?: ";
    cin >> hours;
    cout << "\n-----------------------------------------\n";
    
    if (package == "A"){
        cout << display_result(package, name, hours, PACKAGE_A_MONTHLY_COST, PACKAGE_A_HOURS_CALL_TIME, PACKAGE_A_OVERCHARGE);
    }
    else if (package == "B"){
        cout << display_result(package, name, hours, PACKAGE_B_MONTHLY_COST, PACKAGE_B_HOURS_CALL_TIME, PACKAGE_B_OVERCHARGE);
    }
    else if (package == "C"){
        cout << display_result(package, name, hours, PACKAGE_C_MONTHLY_COST, PACKAGE_C_HOURS_CALL_TIME, PACKAGE_C_OVERCHARGE);
    }
    return 0;
}
