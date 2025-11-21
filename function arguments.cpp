#include<iostream>
using namespace std;
class myclass {
public:
    int data;
    myclass(int value) {
        data=value;
    }
};
void display(myclass obj) {
    cout<<"Data:"<<obj.data<<endl;
}
int main ()
{
    myclass obj1(10);
    display(obj1);
    return 0;
}
