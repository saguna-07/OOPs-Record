#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int roll;
    float marks;
    void display() {
        cout<<"Student Name:"<<name<<endl;
        cout<<"Roll Number:"<<roll<<endl;
        cout<<"Marks:"<<marks<<endl;
    }
};
int main() {
    student s1;

    cout<<"Enter Student Name:";
    cin>>s1.name;
    cout<<"Enter Roll Number:";
    cin>>s1.roll;
    cout<<"Enter Mariks:";
    cin>>s1.marks;
    cout<<"\n---Student Information---\n";
    s1.display();
    return 0;
}                                                               