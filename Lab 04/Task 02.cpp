#include <iostream>
#include <string>
using namespace std;

class NUCES_Student{
    int id;
    string name;

public:
    NUCES_Student(){
        id = 0;
        name = "Not Registered";
    }

    NUCES_Student(int ID){
        id = ID;
        name = "Name Pending";
    }

    NUCES_Student(int id, string name){
        this->id = id;
        this->name = name;
    }

    void display(){
        cout << "ID: " << id << endl;
        cout << "Name: " << name << endl;
    }
};

int main(){
    NUCES_Student n;
    n.display();

    NUCES_Student n1(897);
    n1.display();

    NUCES_Student n2(546, "Najam Nasr");
    n2.display();
}
