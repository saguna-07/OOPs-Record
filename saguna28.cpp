#include <iostream>
#include <string>
using namespace std;

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
        cin.ignore();
    }

    void displayStudent() const {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};

// Derived class 1
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

    void displayBSc() const {
        displayStudent();
        cout << "\nMath marks: " << math;
        cout << "\nPhysics marks: " << phy;
        cout << "\nChemistry marks: " << chem << endl;
    }
};

// Derived class 2
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

    void displayBA() const {
        displayStudent();
        cout << "\nHindi marks: " << hindi;
        cout << "\nPunjabi marks: " << punjabi << endl;
    }
};

int main() {
    BSc b1;
    BA b2;
    int choice;

    cout << "1. BSc\n2. BA\nEnter your stream (1 or 2): ";
    cin >> choice;
    cin.ignore(); // clear input buffer

    cout << "\n-----------------------------\n";

    if (choice == 1) {
        b1.getBSc();
        cout << "\n-----------------------------\n";
        b1.displayBSc();
    } else if (choice == 2) {
        b2.getBA();
        cout << "\n-----------------------------\n";
        b2.displayBA();
    } else {
        cout << "Invalid choice!";
    }

    cout << "\n-----------------------------\n";
    return 0;
}
