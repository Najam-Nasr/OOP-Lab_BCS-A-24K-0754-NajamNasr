#include<iostream>
#include<string>
using namespace std;

class CallRecord{
  
  int callerID;
  float durationMinutes;
  static int TotalCalls;

public:

    CallRecord(){
        TotalCalls++;
    }

static int getTotalCalls(){

    cout << "Total Number of call logged: " << TotalCalls << endl;
    return TotalCalls;
 }
};

int CallRecord :: TotalCalls = 0;

int main(){
    CallRecord c[20];
    CallRecord::getTotalCalls();
}
