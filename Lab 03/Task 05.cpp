#include<iostream>
#include<string.h>

using namespace std;

class Concrete{
  
  string message;
  
  
public:
    
    Concrete (string msg){
      message = msg;
    }
    
  void displayMessage(){
        cout << " " << message << endl;
    }
};

int main(){
    
    Concrete c("Object Oriented Programming");
    c.displayMessage();
}
