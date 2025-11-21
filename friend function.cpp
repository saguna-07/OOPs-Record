#include <iostream>
using namespace std;

class Box {
private:
    int length;

public:
    Box(int l) : length(l) {}

    // Declare a friend function
    friend void printLength(const Box& b);
};

// Friend function definition
void printLength(const Box& b) {
    // Can access private member 'length' directly
    cout << "Length of the box: " << b.length << endl;
}

int main() {
    Box box1(10);
    printLength(box1);  // Calls the friend function

    return 0;
}
