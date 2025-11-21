#include <iostream>
using namespace std;

void myFunction() {
    class LocalClass {
    public:
        void display() {
            cout << "Hello from LocalClass inside myFunction!" << endl;
        }
    };

    LocalClass obj; 
    obj.display();
}

int main() {
    myFunction();
    return 0;
}
