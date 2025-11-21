#include<iostream>
using namespace std;
class Book 
{
    public:
    string title;
    string author;
    float price;
    void getdetails ();
    void displaydetails ();
};
void Book::getdetails ()
{
    cout<<"Enter Book Title:";
    cin>>title;
    cout<<"Enter Author Name:";
    cin>>author;
    cout<<"Enter Book Price:";
    cin>>price;
}
void Book::displaydetails ()
{
    cout<<"In---Book Details---\n";
    cout<<"Title:"<<title<<endl;
    cout<<"Author:"<<author<<endl;
    cout<<"Price:"<<price<<endl;
}
int main ()
{
    Book b1;
    b1.getdetails ();
    b1.displaydetails ();
    return 0;
}
