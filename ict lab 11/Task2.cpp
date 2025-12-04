#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
    int gradeLevel;

public:
    Student(int i, string n, int g) {
        id = i;
        name = n;
        gradeLevel = g;
    }


    void displayDetails() {
        cout << "Student ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Grade Level: " << gradeLevel << endl;
    }
};

int main() {
    Student s1(101, "Taha", 12);

    s1.displayDetails();

    return 0;
}
