#include<bits/stdc++.h>
using namespace std;

int fact(int num){
    int ans = 1;
    if(num==0){
        return 1;
    }
    for(int i=1;i<=num;i++){
        ans =ans*i;
    }
    return ans;

}

int ncr(int n,int r){
    int num = fact(n);
    int denom = fact(r)*fact(n-r);
    int finalans = num/denom;
    return finalans;
}

int main(){
int n,r;
cin>>n>>r;
cout<<ncr(n,r)<<endl;
return 0;
}