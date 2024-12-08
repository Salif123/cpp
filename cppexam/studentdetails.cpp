#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;
    float mark1;
    float mark2;
    char branch;
    float total;

public:
    void getdetails();
    void display();
};

void Student::getdetails() {
    cout << "Enter roll number: ";
    cin >> roll;
    cout << "Enter name: ";
    cin >> name ;
    
    cout << "Enter mark1: ";
    cin >> mark1;
    cout << "Enter mark2: ";
    cin >> mark2;
    cout << "Enter branch: ";
    cin >> branch;
    total = mark1 + mark2;
}

void Student::display() {
    cout << "Roll Number: " << roll << endl;
    cout << "Name: " << name << endl;
    cout << "Mark1: " << mark1 << endl;
    cout << "Mark2: " << mark2 << endl;
    cout << "Branch: " << branch << endl;
    cout << "Total: " << total << endl;
}

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student s[100]; // assuming maximum 100 students
    for (int i = 0; i < n; ++i) {
        cout << "Enter the details of student " << i + 1 << ":\n";
        s[i].getdetails();
    }

    for (int i = 0; i < n; ++i) {
        cout << "\nDetails of student " << i + 1 << ":\n";
        s[i].display();
    }

    return 0;
}
