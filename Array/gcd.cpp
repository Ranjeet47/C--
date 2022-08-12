#include <iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"give the input two value ";
    cin>>m>>n;
    
    while(m != n){
        if(m>n){
            m = m-n;
    
        }else if(n>m){
            n = n-m;
        }
    }
    cout<<"the gcd og given two number is "<<m<<endl;

    return 0;
}