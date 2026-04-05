// Author:         Samuel McLamb
// Class:          CSI-140
// Assignment:     Stocks Assignment
// Date Assigned:  Not Sure
// Due Date:       March 30

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
#include <iomanip>


using namespace std;

string convertInt2Str(int intValue);
int convertStr2Int(string stringValue);
string convertDecToHex(int source);


int main(){
    cout << setw(35) << "        Enter a number (base 10):  ";
    int num;
    cin >> num;

    cout << setw(35) << "   The same number in base 16 is:  " << convertDecToHex(num) << endl;
}

string convertInt2Str(int intValue)
{
    stringstream stringValue;
    stringValue << intValue;
    return stringValue.str();
}
// You can use this section of code as is
int convertStr2Int(string stringValue)
{
    int intValue;
    stringstream str;
    str << stringValue;
    str >> intValue;
    return intValue;
}

string convertDecToHex(int source)
{
    // int remainder = source % 16;
    // int dividend = source / 16;
    // string convert = convertInt2Str(dividend) + convertInt2Str(remainder);
    int dividend;
    int remainder;
    string convert = "";
    while (remainder != 0){
        remainder = source % 16;
        if(remainder == 0){
        return convert;
    }
        if (remainder < 10){
            convert = char(remainder + 48) + convert;
        }
        else{
            convert = char(remainder + 55) + convert;
        }
        source = source / 16;
    }
    return "error";
}
