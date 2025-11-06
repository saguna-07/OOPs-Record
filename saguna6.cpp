#include <iostream>
using namespace std;

class Outer {
private:
    int outerData = 100;

public:
    class Nested {
    public:
        void display() {
            cout << "Inside Nested class!" << endl;
        }
    };

    void show() {
        cout << "Outer class data: " << outerData << endl;
    }
};

int main() {
    Outer::Nested nestedObj;  // Creating object of nested class
    nestedObj.display();

    Outer outerObj;
    outerObj.show();

    return 0;
}
