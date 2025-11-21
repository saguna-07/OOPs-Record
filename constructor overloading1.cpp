#include<iostream>
using namespace std;
class myclass {
public:
    myclass () {
        cout<<"Default constructor called:"<<endl;
    }
    myclass (int x) {
        cout<<"Constructor with one parameter called:x="<<x<<endl;
    }
    myclass (int x,int y) {
        cout<<"Constructor with two parameters called:x="<<x<<",y="<<y<<endl;
    }
};
int main ()0
{
    myclass obj1;
    myclass obj2(10);
    myclass obj3(20,30);
    return 0;
}
