#include <iostream>
#include <cstring>
using namespace std;

class String {
    char str[100];
public:
    String() {}
    String(const char s[]) { strcpy(str, s); }

    String operator+(String obj) {
        String temp;
        strcpy(temp.str, str);
        strcat(temp.str, obj.str);
        return temp;
    }

    void display() { cout << str << endl; }
};

int main() {
    String s1("Hello "), s2("World!"), s3;
    s3 = s1 + s2;
    cout << "Concatenated String: ";
    s3.display();
    return 0;
}
