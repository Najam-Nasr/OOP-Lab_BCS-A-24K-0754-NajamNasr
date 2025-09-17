#include<iostream>
#include<string.h>

using namespace std;

class Student{
    
private:
    int rollNumber;

public:
    
    void setRollNo (int r){
        rollNumber = r;
    }
    int getRollNo(){
        return rollNumber;
    }
};

int main(){
    Student s;
    s.setRollNo(123);
    cout << " " << s.getRollNo() << endl;
}
