#include<iostream>
#include<string>
using namespace std;

class CurrencyExchange{
    const double PKR_to_USD_Rate;
    string branchName;
    int totalTransactions;

public:
    CurrencyExchange(const double r, string b, int t): PKR_to_USD_Rate(r), branchName(b), totalTransactions(t){
        cout << "PKR_to_USD_Rate: " << PKR_to_USD_Rate << endl;
        cout << "Branch Name: " << branchName << endl;
    }

    double convertPKRtoUSD(double amount){
        totalTransactions++;
        return amount * PKR_to_USD_Rate;
    }

    int gettotalTransactions() const{
        return totalTransactions;
        cout << "Total Transaction: " << totalTransactions << endl;
    }
};

int main(){
    string b; double r; double PKR; double USD;
    cout << "Enter branch name: ";
    cin >> b;

    cout << "Enter PKR to USD Rate: ";
    cin >> r;

    CurrencyExchange c(r, b, 0);

    cout << "Enter amount in PKR: ";
    cin >> PKR;

    USD = c.convertPKRtoUSD(PKR);
    cout << "PKR: " << PKR << " = " << "USD: " << USD << endl;
    cout << "Total Transaction: " << c.gettotalTransactions() << endl;
}
