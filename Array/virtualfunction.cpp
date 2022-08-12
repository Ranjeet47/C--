#include <iostream>
using namespace std;

class Base
{public:
virtual void fun()
{
    cout<<"display of base"<<endl;
}

};
class Derived: public Base 
{
    public:
    void fun(){
        cout<<"display of derived"<<endl;
    }

};

int main(){
    Base *p = new Derived();
    p->fun();
    }