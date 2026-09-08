#include <iostream>
using namespace std;

class Student {
    int roll;
    string name;

public:
    // Default Constructor
    Student() {
        roll = 0;
        name = "Unknown";
        cout << "Default Constructor called" << endl;
    }

    // Parameterized Constructor
    Student(int r, string n) {
        roll = r;
        name = n;
        cout << "Parameterized Constructor called" << endl;
    }

    // Copy Constructor
    Student(const Student &s) {
        roll = s.roll;
        name = s.name;
        cout << "Copy Constructor called" << endl;
    }

    // Display function
    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Name: " << name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    cout << "Creating object using Default Constructor:" << endl;
    Student s1;
    s1.display();

    cout << "\nCreating object using Parameterized Constructor:" << endl;
    Student s2(101, "Gorakh");
    s2.display();

    cout << "\nCreating object using Copy Constructor:" << endl;
    Student s3(s2);
    s3.display();

    cout << "\nEnd of main()" << endl;

    return 0;
}