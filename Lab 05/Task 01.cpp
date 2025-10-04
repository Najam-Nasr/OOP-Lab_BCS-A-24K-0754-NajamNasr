#include<iostream>
#include<string>
using namespace std;

class PetrolPump{
   
    int pumpID;
    float literfilled;
   
    public:
    static float pricePerLiter;
   
    void getid(){
        cout << "Enter your pump ID: ";
        cin >> pumpID;
        cout << "\n";
    }
   
    void getlitter(){
        cout << "Enter litter filled: ";
        cin >> literfilled;
        cout << "\n";
    }
   
        float printReceipt(){
            float total = pricePerLiter * literfilled;
            return total;
           
        }    
};

float PetrolPump :: pricePerLiter = 270.5;

int main(){
    PetrolPump p;
   
    p.getid();
    p.getlitter();
    cout<< "Receipt: " <<p.printReceipt()<<endl;
}
