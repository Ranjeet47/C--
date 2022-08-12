#include <iostream>
#include <cmath>
using namespace std;
int main(){
    float a,b,c,d,r1,r2;
    cout<<"give the value of a,b,c ";
    cin>>a>>b>>c;
    r1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
    r2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);
    d = ((b*b )- (4*a*c));
    if(d==0){
        cout<<"both root are real and equl "<<r1<<endl;

    }
    else if(d>0){
        cout<<"both root are real and unequl "<<r1<<"   "<<r2<<endl;

    }
    else{
        cout<<"both root are imaginary "<<r1<<"   "<<r2<<endl;
    }

    return 0;
}