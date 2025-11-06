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
        cin.ignore(); // clear newline from buffer
    }

    void displayStudent() const {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};

class Address {
private:
    string city;

public:
    void getAddress() {
        cout << "Enter city: ";
        getline(cin, city);
    }

    void displayAddress() const {
        cout << "\nCity: " << city;
    }
};

class Account : public Student, public Address {
private:
    int totalFee;
    int submitFee;
    int balance;

public:
    void getAccount() {
        getStudent();
        getAddress();
        cout << "Enter total fee: ";
        cin >> totalFee;
        cout << "Enter submitted fee: ";
        cin >> submitFee;
        balance = totalFee - submitFee;
    }

    void displayAccount() const {
        displayStudent();
        displayAddress();
        cout << "\nTotal fee: " << totalFee;
        cout << "\nSubmitted fee: " << submitFee;
        cout << "\nBalance fee: " << balance << endl;
    }
};

int main() {
    Account a1;
    a1.getAccount();
    cout << "\n-----------------------------\n";
    a1.displayAccount();
    cout << "\n-----------------------------\n";
    return 0;
}
