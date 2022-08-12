#include <iostream>
using namespace std;

class BasicCar
{
    public:
    virtual void start(){
        cout<<"basicCar started"<<endl;

    }
};
class AdvanceCar : public BasicCar
{
    void start(){
        cout<<"AdvanceCar started"<<endl;
    }
};
int main(){
   BasicCar *p = new AdvanceCar() ;
   p->start();
}