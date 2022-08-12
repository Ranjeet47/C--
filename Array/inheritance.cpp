#include <iostream>
using namespace std;

class Base
{
    public:

    void display(){
        cout<<"Display of base"<<endl;
    }
};
class Derived : public Base
{
    public:
    void show(){
cout<<"Display of Derived"<<endl;
    }
};

int main(){
Derived b;
    b.show();
    b.display();
}