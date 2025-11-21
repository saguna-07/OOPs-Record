#include<iostream>
using namespace std;
class mark
{
    public:
    int maths;
    int science;
    //constructor
    marks()
    {
        cout<<"inside constructor"<<endl;
        cout<<"c++ object created"<<endl;
    }
    
    //destructor
    ~marks()
    {
        cout<<"inside constructor"<<endl;
        cout<<"c++ object created"<<endl;
    }
};
int main()
{
    mark m1;
    mark m2;
    return 0;
}
