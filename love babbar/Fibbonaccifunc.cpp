#include<bits/stdc++.h>
using namespace std;

void Fibbonacci(int n){
    int a=0,b=1;
    if(n==0){
        cout<<a<<endl;
    }
     if(n>=1){
        cout<<a<<endl;
        cout<<b<<endl;
    }
    
    for(int i=2;i<=n;i++){
        int nextfib = a+b;
        cout<<nextfib<<endl;
        a=b;
        b=nextfib;
    }

}
int main(){
    int n;
    cin>>n;
    Fibbonacci(n);
    return 0;
}