#include <iostream>
using namespace std;

class Car{
    public:
    virtual void start()= 0;
    virtual void stop() = 0;
};

class Innova : public Car
{
    public:
    void start(){
        cout<<"innova started"<<endl;
    }
    void stop(){
        cout<<"innova stopped"<<endl;
    }
};

class Swift : public Car
{
    public:
    void start(){
        cout<<"Swift started"<<endl;
    }
    void stop(){
        cout<<"Swift stopped"<<endl;
    }
};

int main(){
    Car *p = new Innova();
    p->start();
p = new Swift();
p->start();

return 0;
}