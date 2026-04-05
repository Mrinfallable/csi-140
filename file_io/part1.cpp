#include <fstream>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// Author: Sam
// Class: CSI-140
// Assignment: File Io
// Date Assigned: Not Sure
// Due Date: Mar 2 by 11:30am
// Description:
// part1 for the file io assignment.
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

typedef struct {
    string SSN;
    string name;
    double grade[2];
} Report;

int main() {
    const int size = 2;
    ifstream str("data.txt");
    Report reports[size];

    if (str.is_open()) {
        for (int i = 0; i < size; i++) {
            getline(str, reports[i].SSN); 
            getline(str, reports[i].name);
            str >> reports[i].grade[0];
            str >> reports[i].grade[1];
            str.ignore(2, '\n');
        }
        str.close();
    }

    // Testing the output
    cout << left << setw(15) << "SSN" << setw(25) << "Name" << right << setw(7) << "Average\n";
    for(int i = 0; i < size; i++) {
        cout << left << setw(15) << reports[i].SSN << setw(25) << reports[i].name << right << setw(7) << (reports[i].grade[0] + reports[i].grade[1]) / 2 << endl;
    }

    return 0;
}
    
