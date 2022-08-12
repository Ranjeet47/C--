#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a,b,c,d;
    a=n/100;
    n=n%100;
    b=n/50;
    n=n%50;
    c=n/20;
    n=n%20;
    d=n;

    cout<<"number of 100 note "<<a<<endl;
    cout<<"number of 50 note "<<b<<endl;
    cout<<"number of 20 note "<<c<<endl;
    cout<<"number of 1 note "<<d<<endl;

   
   }