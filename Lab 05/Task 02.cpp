#include<iostream>
#include<string>
using namespace std;

class MobileDevice{
  
  string modelName;
  const int IMEINumber;
  
public:

  MobileDevice(string name, int IMEI) : IMEINumber(IMEI) {
      this-> modelName = name;
  }
  
 void verifyDevice() const{
     cout << "Model Name: " << this->modelName << endl;
     cout << "IMEI Number: " << this->IMEINumber << endl;
 }
};

int main(){
    
    MobileDevice m("Samsung", 87946512);
    m.verifyDevice();
    
}
