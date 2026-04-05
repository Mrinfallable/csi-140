// Author:         Samuel McLamb
// Class:          CSI-140
// Assignment:     Stocks Assignment
// Date Assigned:  Not Sure
// Due Date:       March 23 by 10am 

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
#include <fstream>
#include <algorithm> 

using namespace std;

struct Stock {
    string stockName;
    double buyingCost;
    double buyingCommission;
    int buyingAmount;
    double sellingCost;
    double sellingCommission;
    int sellingAmount;
    double profit;

};

int main(){
    string input_filename = "file1.txt";
    string output_filename = "file2.txt"; 
    cout << "enter input filename: ";
    cin >> input_filename;
    cout << "\n" << "enter output filename";
    cin >> output_filename;
    ofstream create_file(input_filename, ios::app);
    create_file.close();
    ifstream infile(input_filename);
    ofstream outfile(output_filename);
    string firstLine;
    outfile << setw(20) << left << "STOCK"
                << setw(15) << right << "BUYING AMT"
                << setw(15) << "BUYING COMM"
                << setw(15) << "SELLING AMT"
                << setw(15) << "SELLING COMM"
                << setw(15) << "PROFIT" << endl;

    double totalBuyingAmt;
    double totalBuyingComm;
    double totalSellingAmt;
    double totalSellingComm;
    double grandProfit;

    while(getline(infile >> ws, firstLine)){
        Stock currentStock;
        currentStock.stockName = firstLine;
        infile >> currentStock.buyingCost
            >> currentStock.buyingCommission
            >> currentStock.buyingAmount
            >> currentStock.sellingCost
            >> currentStock.sellingCommission
            >> currentStock.sellingAmount;
        double buyingAmt = currentStock.buyingCost * currentStock.buyingAmount;
        double buyingComm = buyingAmt * currentStock.buyingCommission / 100;
        double sellingAmt = currentStock.sellingCost * currentStock.sellingAmount;
        double sellingComm = sellingAmt * currentStock.sellingCommission / 100;
        double profit = (sellingAmt - sellingComm) - (buyingAmt + buyingComm);
        

        outfile << setw(20) << fixed << setprecision(2) << left << currentStock.stockName
                << setw(15) << right << buyingAmt
                << setw(15) << buyingComm
                << setw(15) << sellingAmt
                << setw(15) << sellingComm
                << setw(15) << profit << endl;
        totalBuyingAmt += buyingAmt;
        totalBuyingComm += buyingComm;
        totalSellingAmt += sellingAmt;
        totalSellingComm += sellingComm;
        grandProfit += profit;

        
    }
    outfile << setw(26) << fixed << setprecision(2) << "Total Buying Amount: "
            << setw(16) << totalBuyingAmt << "\n"
            << setw(26) << "Total Buying Commission: "
            << setw(16) << totalBuyingComm << "\n"
            << setw(26) << "Total Selling Amount: "
            << setw(16) << totalSellingAmt << "\n"
            << setw(26) << "Total Selling Commission: " 
            << setw(16) << totalSellingComm << "\n"
            << setw(26) << "Grand Profit: "
            << setw(16) << grandProfit << endl;

}
    
    



