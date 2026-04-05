/*
Author: Your-Name
Class: Course_Code-Course_Number-Section_Number
Assignment: PA x or Lab x
Date Assigned: Date-Assigned
Due Date: Due-Date and Time
Description:
A brief description of the purpose of the file/class.
Certification of Authenticity:
I certify that this is entirely my own work, except where I have given
fully-documented references to the work of others. I understand the definition and
consequences of plagiarism and acknowledge that the assessor of this assignment
may, for the purpose of assessing this assignment:
- Reproduce this assignment and provide a copy to another member of academic staff;
and/or
- Communicate a copy of this assignment to a plagiarism checking service (which may
then retain a copy of this assignment on its database for the purpose of future
plagiarism checking)
*/


#include <iostream>
#include <cmath>
#include <string>
int CENT=100;
int MONTHS=12;

using namespace std;

/*Example 1:
                       Enter Amount Needed:  $27500
                       Enter Interest Rate:  5.5
                Enter Duration (in months):  60
                    Monthly Deposit Amount:  $399.24

Example 2:
                       Enter Amount Needed:  $5000
                       Enter Interest Rate:  8
                Enter Duration (in months):  24
                    Monthly Deposit Amount:  $192.80
*/

int main(){
int amountNeeded;
double interest;
int duration;
double monthlyAmount;

cout << "Enter Amout Needed: ";
cin >> amountNeeded;
cout << "\nEnter Interest Rate: ";
cin >> interest;
cout << "\nEnter Duration (in months): ";
cin >> duration;
cout << "\nMonthly Deposit Amount: ";
interest = interest / MONTHS / CENT;
duration = duration;
cout << (interest * amountNeeded)/(pow(1 + interest, duration) - 1);

return 0;
}
