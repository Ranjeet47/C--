#include<bits/stdc++.h>
using namespace std;
signed main(){
    int n,i=1;
    cin>>n;
    while(i<=n){
        int j=1;
        char ch = 'A'+i-1;
        while(j<=n){
            cout<<ch<<" ";
            j +=1;
        }cout<<endl;
        i +=1;
    }
}