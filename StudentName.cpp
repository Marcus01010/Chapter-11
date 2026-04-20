#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string student_name;

public:
    Student();
    void displayName();
};

Student::Student() {
    student_name = "Unknown";
}

void Student::displayName() {
    cout << "Student Name: " << student_name << endl;
}

int main() {
    Student student_object;
    student_object.displayName();
    return 0;
}
