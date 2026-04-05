// Author:         Samuel McLamb
// Class:          CSI-140
// Assignment:     Module-03-Lab-1-Change Calculator
// Date Assigned:  Not Sure
// Due Date:       Feb 26 by 10am 

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

using namespace std;



int main(){
    int num;
    int result = 1;
    do{
        cout << "Computer factorial. Enter -1 to exit.\n";
        cout << "Enter a number: ";
        cin >> num;

        if (num < -1){
            cout << "number must be greater than -1";
            break;
        }
        else if(num == -1){
            break;
        }
        else if (num == 0 || num == 1){
            break;
        }
        else{
            for(int i = 1; i <= num; i++){
                result *= i;
            }
            cout << "Result: " << result << "\n";
        }

    } while (1);
    
   
    return 0;
}