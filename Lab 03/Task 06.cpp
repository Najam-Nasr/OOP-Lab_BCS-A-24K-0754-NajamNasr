#include<iostream>
#include<string.h>

using namespace std;

class Vehicle{

public:
    string make;
    string model;

void displayinfo(){
    cout << "Make: " << make << endl;
    cout << "Model: " << model << endl;
}
};

class Car : public Vehicle{
public:
    string engineType;

void displayinfo(){
    
Vehicle :: displayinfo();
    
    cout << "Engine Type: " << engineType << endl;
    }
};

int main(){
    Car c;
    c.make = "Suzuki";
    c.model = "Mehran";
    c.engineType = "Petrol";
    c.displayinfo();
}
