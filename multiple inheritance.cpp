#include<iostream>
using namespace std;
class Animal {
public:
    void eat() {
        cout<<"Animals eats food."<<endl;
    }
};
class Bird {
public:
    void fly() {
        cout<<"Birds can fly."<<endl;
    }
};
class Bat : public Animal,public Bird {
public:
    void sound() {
        cout<<"Bat makes sound."<<endl;
    }
};
int main ()
{
    Bat b;
    b.eat();
    b.fly();
    b.sound();
    return 0;
}
