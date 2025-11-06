#include <iostream>
#include <string>
using namespace std;

// Base class
class Student {
private:
    string name;
    int rno;

public:
    void getStudent() {
        cout << "Enter name of the student: ";
        getline(cin, name);
        cout << "Enter roll number of the student: ";
        cin >> rno;
        cin.ignore(); // clear newline
    }

    void displayStudent() const {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};

// Derived class from Student
class Test : public Student {
protected:
    int math, eng, sci;

public:
    void getTest() {
        getStudent();
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter English marks: ";
        cin >> eng;
        cout << "Enter Science marks: ";
        cin >> sci;
    }

    void displayTest() const {
        displayStudent();
        cout << "\nMath marks: " << math;
        cout << "\nEnglish marks: " << eng;
        cout << "\nScience marks: " << sci;
    }
};

// Derived class from Test
class Result : public Test {
private:
    int total;
    float avg;

public:
    void getResult() {
        getTest();
        total = math + eng + sci;
        avg = total / 3.0;
    }

    void displayResult() const {
        displayTest();
        cout << "\nTotal Marks: " << total;
        cout << "\nAverage Marks: " << avg << endl;
    }
};

// Main function
int main() {
    Result r1;
    r1.getResult();
    cout << "\n-----------------------------\n";
    r1.displayResult();
    cout << "\n-----------------------------\n";
    return 0;
}
