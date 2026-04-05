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

const int BILLS[6] = {50, 20, 10, 5, 2, 1};

int main(){
    int amount = 0;
    cout << "enter amount: ";
    cin >> amount;
    for(int i = 0; i < sizeof(BILLS) / sizeof(BILLS[0]); i++){
        cout << "£" << BILLS[i] << " Bills(s): " << to_string(amount/BILLS[i]) << "\n";
        amount = amount % BILLS[i];
    }
    return 0;
}
