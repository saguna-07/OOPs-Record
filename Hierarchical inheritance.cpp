#include <iostream>
using namespace std;
class A {
public:
    void displayA() {
        cout<<"This is class A."<<endl;
    }
};
class C:public A {
public:
    void displayC() {
        cout<<"This is class C."<<endl;
    }
};
int main () {
    B obj1;
    C obj2;
    obj1.displayA();
    obj1.displayB();
    obj2.displayA();
    obj2.displayC();
    return 0;
}
