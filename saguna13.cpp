#include <iostream>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a) {
        name = n;
        age = a;
        cout << "Constructor called for " << name << endl;
    }

    // Member function
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    // Destructor
    ~Person() {
        cout << "Destructor called for " << name << endl;
    }
};

int main() {
    cout << "Creating person1..." << endl;
    Person person1("Alice", 25);
    person1.display();

    cout << "\nCreating person2..." << endl;
    Person person2("Bob", 30);
    person2.display();

    cout << "\nExiting program..." << endl;

    return 0;
}
