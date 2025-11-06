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
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }

    void displayStudent() {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};

// Derived class for B.Sc
class BSc : public Student {
private:
    int phy, chem, math;

public:
    void getBSc() {
        getStudent();
        cout << "Enter Math marks: ";
        cin >> math;
        cout << "Enter Physics marks: ";
        cin >> phy;
        cout << "Enter Chemistry marks: ";
        cin >> chem;
    }

    void displayBSc() {
        displayStudent();
        cout << "\nMath marks: " << math;
        cout << "\nPhysics marks: " << phy;
        cout << "\nChemistry marks: " << chem << endl;
    }
};

// Derived class for B.A
class BA : public Student {
private:
    int hindi, punjabi;

public:
    void getBA() {
        getStudent();
        cout << "Enter Hindi marks: ";
        cin >> hindi;
        cout << "Enter Punjabi marks: ";
        cin >> punjabi;
    }

    void displayBA() {
        displayStudent();
        cout << "\nHindi marks: " << hindi;
        cout << "\nPunjabi marks: " << punjabi << endl;
    }
};

int main() {
    BSc b1;
    BA b2;
    int choice;

    cout << "1. BSc  2. BA\nEnter your stream: ";
    cin >> choice;

    if (choice == 1) {
        b1.getBSc();
        b1.displayBSc();
    } else {
        b2.getBA();
        b2.displayBA();
    }

    return 0;
}
