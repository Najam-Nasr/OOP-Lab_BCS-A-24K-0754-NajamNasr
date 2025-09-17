#include<iostream>

using namespace std;

class Calculator{
    int num1, num2;
    
public:
    void setNumbers(int x, int y);
    int add();
};

void Calculator :: setNumbers(int x, int y){
    num1 = x; num2 = y;
}

int Calculator :: add(){
    return num1 + num2;
}

int main(){
    Calculator cal;
    int x,y;
    cout << "Enter two number: ";
    cin >> x >> y;
    cal.setNumbers (x, y);
    cout << "Sum: " << cal.add() << endl;
}
