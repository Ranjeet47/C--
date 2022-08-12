#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n;
    cin>>n;
    int i= 1;
    while(i<=n){
        int j= 1;
        while(j<=i){
            cout<<n-j+1<<" ";
            j +=1;
        }cout<<endl;
        i +=1;
    }
}