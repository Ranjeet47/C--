#include <iostream>
using namespace std;
class Shape
{public:
virtual float area() = 0;
virtual float perimeter() = 0;

};

class Rectangle : public Shape
{
    public:
    float length;
    float breadth;
    Rectangle(float l=1,float b=1){
        length = l;
        breadth = b;
    }
    float area(){
        return length*breadth;
    }
    float perimeter(){
    return 2*(length + breadth);
    }
};
class Circle : public Shape
{
    public:
    float radius;
    Circle(float r=1){
        radius = r;
    }
    float area(){
        return 3.14*radius*radius;
    }
    float perimeter(){
    return 2*3.14*radius;
    }
};

int main(){
    Shape *s = new Rectangle(10,5);
    cout<<"area of Rectangle "<<s->area()<<endl;
    cout<<"perimeter of Rectangle  "<<s->perimeter()<<endl;
    s = new Circle(5);
    cout<<"area of Circle "<<s->area()<<endl;
    cout<<"perimeter of Circle "<<s->perimeter()<<endl;
    return 0;
}