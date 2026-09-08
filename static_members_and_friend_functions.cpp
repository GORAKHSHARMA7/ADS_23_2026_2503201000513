#include <iostream>
using namespace std;

class Student {
private:
    int marks;

    // Static data member
    static int totalStudents;

public:
    Student(int m) {
        marks = m;
        totalStudents++;
    }

    // Static member function
    static void showTotalStudents() {
        cout << "Total Students: " << totalStudents << endl;
    }

    // Friend function declaration
    friend void showMarks(Student s);
};

// Definition of static data member
int Student::totalStudents = 0;

// Friend function definition
void showMarks(Student s) {
    cout << "Student Marks: " << s.marks << endl;
}

int main() {

    Student s1(85);
    Student s2(90);
    Student s3(78);

    cout << "Student 1: ";
    showMarks(s1);

    cout << "Student 2: ";
    showMarks(s2);

    cout << "Student 3: ";
    showMarks(s3);

    cout << endl;

    // Accessing static member through static function
    Student::showTotalStudents();

    return 0;
}