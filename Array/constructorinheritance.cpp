#include <iostream>
using namespace std;

class Base
{public:
    Base(){cout<<"non-param of base"<<endl;}
    Base(int x){cout<<"param of base "<<x<<endl;}
};

class Derived:public Base
{public:
Derived(){cout<<"non-param of derived"<<endl;}
Derived(int a){cout<<"param of derived "<<a<<endl;}
Derived(int x,int a):Base(x)
{cout<<"param of derived  "<<a<<endl;}
};

int main(){
Derived d(10,20);

    return 0;
}