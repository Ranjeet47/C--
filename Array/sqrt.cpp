#include <iostream>
#include <cmath >
using namespace std;
int main(){
    int a,b,c;
    cout<<"give the value of a,b,c ";
    cin>>a>>b>>c;
    float r,p;
    r = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
    p = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);

    cout<<r<<"    "<<p<<endl;

  return 0;
}