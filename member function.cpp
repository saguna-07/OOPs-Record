#include<iostream>
using namespace std;
class counter{
private:
    static int count;
public:
    static void showCount (){
        cout<<"count="<<count<<endl;
    }
    void increment () {
        count++;
    }
};    
int counter :: count=0;
int main() {
    counter c1,c2;
    c1.increment();
    c2.increment();
    counter :: showCount ();
    return 0;
}
