#include<iostream>
using namespace std;
class A {
public:
    void displayA() {
        cout<<"This is class A."<<endl;
    }
};
class B:public A{
public:
    vois displayB() {
        cout<<"This is class B."<<endl;
    }
};
class :public B {
public:
    void displayC() {
        cout<<"This is class C."<<endl;
    }
};
int main ()
{
    C.obj;
    obj.displayA();
    obj.displayB();
    obj.displayC();
    return 0;
}
