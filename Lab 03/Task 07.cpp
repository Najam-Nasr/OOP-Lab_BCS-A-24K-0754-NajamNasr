#include<iostream>
#include<string.h>

using namespace std;

class Student{
  
  string name;
  int rollNo;
  double marks;
  char grade;
  
public: 

    Student (string n, int r, double m){
        name = n; rollNo = r; marks = m;
    }

void calculateGrade(){
    if(marks >= 90){
        grade = 'A';
    }
    else if(marks <90 && marks >=80){
        grade = 'B';
    }
    else if(marks <80 && marks >=70){
        grade = 'C';
    }
    else if(marks <70){
        grade = 'F';
    }
}

void displayStudentInfo(){
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
}
};

int main(){
    Student s1 ("Najam", 0754, 1100);
    s1.calculateGrade();
    s1.displayStudentInfo();
    cout << " " << endl;
    
    Student s2 ("Ahmed", 4570, 1100);
    s2.calculateGrade ();
    s2.displayStudentInfo();
    cout << " " << endl;
    
}
