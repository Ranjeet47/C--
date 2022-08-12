#include <iostream>
using namespace std;

class Rectangle
{private:
int length;
int breadth;
public:
   
    Rectangle(int l=0,int b=0);
   
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    void setLength(int l);
    void setBreadth(int b);
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
class Cuboid : public Rectangle
{
    private:
    int height;
    public:

    Cuboid(int h){
        height = h;
    
    }
    int getHeight(){return h;}
    void setHeight(int h){height = h;}
    int volume {
        return getLength()*getBreadth()*height;
    }
};
int main(){
Cuboid c(5);
c.setLength(10);
c.setBreadth(7);
cout<<"volume is "<<c.volume()<<endl;

    return 0;
}

Rectangle::Rectangle(int l=0,int b=0)
{
    length = l;
    breadth = b;
}

void Rectangle::setLength(int  l){
length = l;
}
void Rectangle::setBreadth(int b){
    breadth = b;
}

int Rectangle::area(){
return length*breadth;
}

int Rectangle::perimeter()
{
    return 2*breadth*length;

}

bool Rectangle::isSquare()
{
    return length==breadth;
}
    
Rectangle::~Rectangle()
{
    // cout<<"Rectangle Destroyed";
} 