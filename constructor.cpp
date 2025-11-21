#include<iostream>
using namespace std;
class sample
{
    int n;
    public:
    sample()
    {
        n=0;
    }
    sample(int a)
    {
        n=a;
    }
    sample(sample &x)
    n=x.n;
    void display()
    {
        cout<<n;
    }
};
int main()
{
    sample A(100);
    sample B(A);
    sample C=A;
    sample.D;
    D=A;
    A.display();
    B.display();
    C.display();
    D.display();
    return 0;
}
