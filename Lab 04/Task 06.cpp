#include<iostream>
#include<string>
using namespace std;

class OrderDetails{
    int orderID;
    string itemName;
    const double deliveryFee;

public:
    OrderDetails(double fee, int orderID, string itemName) : 
        deliveryFee(fee) 
    {
        this->orderID = orderID;
        this->itemName = itemName;
        cout << "Order ID: " << this->orderID << endl;
        cout << "Item Name: " << this->itemName << endl;
        cout << "Delivery Fee = " << deliveryFee << endl;
    }

    ~OrderDetails(){
        cout << "Order ID: " << orderID << " Archived and memory cleared" << endl;
    }
};

int main(){
    int orderID; 
    string itemName; 
    double deliveryFee;

    cout << "Enter your order ID: ";
    cin >> orderID;
    cout << "\n";

    cout << "Enter your item name: ";
    cin >> itemName;
    cout << "\n";

    cout << "Enter your delivery fee: ";
    cin >> deliveryFee;
    cout << "\n";

    OrderDetails(deliveryFee, orderID, itemName);

    return 0;
}
