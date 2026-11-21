#include <iostream>
#include <string>
using namespace std;

class Student {
private;
    int marks;
public:
    string name;
    void setMarks(int m) {
        if (m >= 0 && m <= 100) {        marks = m;
        } else {
            cout << "Invalid marks!" << endl;
       }
    }
    int getMarks() {
        return marks;
    }
    char getGrade() {
        if (marks >= 80) {
            return 'A';
        } else if (marks >= 60) {
            return 'B';
        } else if (marks >= 50) {
            return 'C';
        } else {
            return 'F';        }
  }
};
int main() {
    Student s1;
    s1.name = "Ali";
    s1.setMarks(85);
    cout << "Name: " << s1.name << endl;
    cout << "Marks: " << s1.getMarks() << endl;
    cout << "Grade: " << s1.getGrade() << endl;
    s1.setMarks(120);
   return 0;
}