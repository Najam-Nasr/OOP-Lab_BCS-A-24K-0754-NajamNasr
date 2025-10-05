#include<iostream>
#include<string>
using namespace std;

class Kitchen{
    const string apartmentID;

public:
    Kitchen(string ID): apartmentID(ID){
        cout << "Kitchen Appartment: " << apartmentID << " created\n"<<endl;
    }
    ~Kitchen(){
        cout << "Kitchen Apartment: " << apartmentID << " destroyed" << endl;
    }
};

class Apartment {
  Kitchen k;
  
public:
    Apartment(string ID): k(ID){}
    
    ~Apartment(){}
    
};

int main(){
    Apartment a("B23");
}
