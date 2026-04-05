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


int main() {
    ofstream str("data.txt");
    str.close();
    string SSN;
    string name;
    string average;
    while (1){
        str.open("data.txt", ios::app);
        cout << "Enter your SSN ";
        getline(cin, SSN);
        cout << "\nEnter your Name ";
        getline(cin, name);
        cout << "\nEnter your average grade ";
        getline(cin, average);
        str << SSN << "\n" << name << "\n" << average << "\n";
        str.close();
    }
    
  
}
    
