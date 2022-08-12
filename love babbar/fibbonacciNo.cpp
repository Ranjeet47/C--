#include<bits/stdc++.h>
using namespace std;

signed main(){
int n;
cin>>n;
int a=0,b=1;
cout<<a<<"\n"<<b<<endl;
for(int i=2;i<=n;i++){
    int nextfib = a+b;
   cout<<a+b<<endl; 
   a =b;
   b = nextfib;

    
}
}
