#include<bits/stdc++.h>
using namespace std;

int totalSetBit(int a,int b){
    int count = 0,mount=0;
    while(a!=0){
        if(a&1){
            count++;
        }
        a = a>>1;
    }
    while(b!=0){
        if(b&1){
            mount++;
        }
        b = b>>1;
    }
    int dount = mount +count;
    return dount;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<totalSetBit(a,b)<<endl;
    return 0;
}