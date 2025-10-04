#include <iostream>
#include <string>
using namespace std;

class MobileAccount{
    double balance;
    string phoneNumber;

public:
    MobileAccount(){
        balance = 50.0;
        phoneNumber = "";
    }

    MobileAccount(double bal, string phone){
        balance = bal;
        phoneNumber = phone;
    }

    void setbalance(double bal){
        balance = bal;
    }

    void setphoneNumber(string phone){
        phoneNumber = phone;
    }

    double getbalance(){
        return balance;
    }

    string getphoneNumber(){
        return phoneNumber;
    }

    void display(){
        cout << "Balance: " << balance << "PKR" << endl;
        cout << "Phone Number: " << phoneNumber << endl;
    }
};

int main(){
    MobileAccount m(879, "45865");
    m.display();
}
