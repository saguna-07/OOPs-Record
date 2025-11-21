#include <iostream>
using namespace std;
class Number {
    int x, y;
public:
    Number(int a, int b) {
        x = a;
        y = b;
    }
    Number operator-() {
        Number temp;
        temp.x = -x;
        temp.y = -y;
        return temp;
    }
    Number() {}
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() {
    Number n1(5, -8), n2;
    cout << "Original values: ";
    n1.display();
    n2 = -n1;
     cout << "After applying unary minus (-): ";
    n2.display();

    return 0;
}
