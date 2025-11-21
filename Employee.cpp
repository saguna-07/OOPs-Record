#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int id;
    float basicPay;
    float da, hra, grossSalary, tax, netSalary;

public:
    void getDetails() {
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Employee ID: ";
        cin >> id;
        cout << "Enter Basic Pay: ";
        cin >> basicPay;

        calculateSalary(); 
    }
    void calculateSalary() {
        da = basicPay * 0.70f;               
        hra = basicPay * 0.10f;              
        grossSalary = basicPay + da + hra;   
        tax = grossSalary * 0.20f;          
        netSalary = grossSalary - tax;        
    }
    void displayPayslip() {
        cout << "\n======= Employee Payslip =======\n";
        cout << "Employee Name : " << name << endl;
        cout << "Employee ID   : " << id << endl;
        cout << "Basic Pay     : ₹" << basicPay << endl;
        cout << "DA (70%)      : ₹" << da << endl;
        cout << "HRA (10%)     : ₹" << hra << endl;
        cout << "-----------------------------\n";
        cout << "Gross Salary  : ₹" << grossSalary << endl;
        cout << "Tax (20%)     : ₹" << tax << endl;
        cout << "-----------------------------\n";
        cout << "Net Salary    : ₹" << netSalary << endl;
    }
};

int main() {
    Employee emp;
    cin.ignore();

    emp.getDetails();
    emp.displayPayslip();
return 0;
}

